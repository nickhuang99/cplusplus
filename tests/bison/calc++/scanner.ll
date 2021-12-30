/* Scanner for calc++.   -*- C++ -*-

   Copyright (C) 2005-2015, 2018-2021 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

%{ /* -*- C++ -*- */
# include <cerrno>
# include <climits>
# include <cstdlib>
# include <cstring> // strerror
# include <string>
# include "driver.hh"
# include "parser.hh"
%}

%{

%}


%option noyywrap nounput noinput batch debug

%{
  // A number symbol corresponding to the value in S.
  yy::parser::symbol_type
  make_NUMBER (const std::string &s);
%}

id    [a-zA-Z][a-zA-Z_0-9]*
int   [0-9]+
blank [ \t\r]


 /**/
%%
 /**/

 /**/
{blank}+  
\n+        

"-"        return yy::parser::make_MINUS();
"+"        return yy::parser::make_PLUS();
"*"        return yy::parser::make_STAR();
"/"        return yy::parser::make_SLASH();
"("        return yy::parser::make_LPAREN();
")"        return yy::parser::make_RPAREN();
":="       return yy::parser::make_ASSIGN();

{int}      return make_NUMBER (yytext);
{id}       return yy::parser::make_IDENTIFIER (yytext);
 /**/
.          {
             throw yy::parser::syntax_error
               ("invalid character: " + std::string(yytext));
}
 /**/
<<EOF>>    return yy::parser::make_YYEOF ();
%%

 /**/
yy::parser::symbol_type
make_NUMBER (const std::string &s)
{
  errno = 0;
  long n = strtol (s.c_str(), NULL, 10);
  if (! (INT_MIN <= n && n <= INT_MAX && errno != ERANGE))
    throw yy::parser::syntax_error ("integer is out of range: " + s);
  return yy::parser::make_NUMBER ((int) n);
}
 /**/

 /**/
void
driver::scan_begin ()
{
  yy_flex_debug = trace_scanning;
  if (file.empty () || file == "-")
    yyin = stdin;
  else if (!(yyin = fopen (file.c_str (), "r")))
    {
      std::cerr << "cannot open " << file << ": " << strerror (errno) << '\n';
      exit (EXIT_FAILURE);
    }
}
 /**/

 /**/
void
driver::scan_end ()
{
  fclose (yyin);
}
 /**/

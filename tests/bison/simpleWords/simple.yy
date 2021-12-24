/* Simple variant-based parser.   -*- C++ -*-

   Copyright (C) 2018-2021 Free Software Foundation, Inc.

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

%code top{
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;
}

%require "3.2"
%language "c++"


%define api.value.type variant

%code
{
  // Print a list of strings.
  auto
  operator<< (std::ostream& o, const std::vector<std::string>& ss)
    -> std::ostream&
  {
  	o << "begin to print"<<std::endl;
    o << '{';
    const char *sep = "";
 /**/
    for (const auto& s: ss)
      {
        o << sep << s;
        sep = ", ";
      }
 /**/
    return o << '}';
  }
}

%define api.token.constructor

%code
{
  namespace yy
  {
  	ifstream yyin;
    // Return the next token.
    auto yylex () -> parser::symbol_type
    {    	
    	string str;
    	while (yyin>>str){
    		stringstream ss(str);
    		int n;
    		if (ss>>n){
    			return parser::make_NUMBER(n);
    		}else{
    			return parser::make_TEXT(str);
    		}
    	}
    	return parser::make_YYEOF ();	
    }
  }
}
%%
 /**/
result:
  list  { std::cout << $1 << '\n'; }
;
 /**/

%nterm <std::vector<std::string>> list;
 /**/
list:
  %empty     { /* Generates an empty string list */ }
| list item  { $$ = $1; $$.push_back ($2); }
;
 /**/

%nterm <std::string> item;
%token <std::string> TEXT;
%token <int> NUMBER;
 /**/
item:
  TEXT
| NUMBER  { $$ = std::to_string ($1); }
;
 /**/
%%

namespace yy
{
  // Report an error to the user.
  auto parser::error (const std::string& msg) -> void
  {
    std::cerr << msg << '\n';
  }
}

int main (int argc, char**argv)
{
	if (argc==2 ){	
		yy::yyin.open(argv[1]);
		if (yy::yyin){
			yy::parser parser;
			return parser.parse ();  	
		}
	}  
  	cout<<"usage: "<<argv[0]<<" [filename]"<<endl;
  	return -1;
}

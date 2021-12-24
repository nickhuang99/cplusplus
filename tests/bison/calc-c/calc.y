%code top {
//  #include <assert.h>
//  #include <ctype.h>  /* isdigit. */
//  #include <stdio.h>  /* printf. */
//  #include <stdlib.h> /* abort. */
//  #include <string.h> /* strcmp. */
#include <iostream>
#include <cstring>
#include <string>
using namespace std;	
  int yylex (void);
  void yyerror (char const *);
}

%header
/* Generate YYSTYPE from the types used in %token and %type.  */
		/*%define api.value.type "variant"*/
%define api.value.type union		
%token <int> NUM "number"
%type  <int> expr term fact

/* Generate the parser description file (calc.output).  */
%verbose

/* Nice error messages with details. */
%define parse.error detailed

/* Enable run-time traces (yydebug).  */
%define parse.trace

/* Formatting semantic values in debug traces.  */
%printer { fprintf (yyo, "$$ is %i", $$); } <int>;

%% /* The grammar follows.  */
input:
  %empty
| input line
;

line:
  '\n'
| expr '\n'  { printf ("%i\n", $1); }
| error '\n' { yyerrok; }
;

expr:
  expr '+' term { $$ = $1 + $3; }
| expr '-' term { $$ = $1 - $3; }
| term
;

term:
  term '*' fact { $$ = $1 * $3; }
| term '/' fact { $$ = $1 / $3; }
| fact
;

fact:
  "number"
| '(' expr ')' { $$ = $2; }
;

%%

int
yylex (void)
{
  int c;

  /* Ignore white space, get first nonwhite character.  */
  while ((c = getchar ()) == ' ' || c == '\t')
    continue;

  if (c == EOF)
    return YYEOF;

  /* Char starts a number => parse the number.         */
  if (c == '.' || isdigit (c))
    {
      ungetc (c, stdin);
      if (scanf ("%i", &yylval.NUM) != 1)
        //abort ();
    	return YYUNDEF;
      return NUM;
    }

  /* Any other character is a token by itself.        */
  return c;
}

/* Called by yyparse on error.  */
void
yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

int
main (int argc, char const* argv[])
{
  /* Enable parse traces on option -p.  */
  for (int i = 1; i < argc; ++i)
    if (!strcmp (argv[i], "-p"))
      yydebug = 1;
  return yyparse ();
}

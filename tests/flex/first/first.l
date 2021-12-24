%{
	#include <stdio.h>
	#include <stdlib.h>
%}
%option noyywrap
%%
.*\n 	{ECHO; return 1;}
%%
int yyparse (char const *file)
{
	yyin = fopen (file, "r");
	if (!yyin)
	{
		perror ("fopen");
		exit (EXIT_FAILURE);
	}
	/* One token only. */
	yylex ();
	if (fclose (yyin) != 0)
	{
		perror ("fclose");
		exit (EXIT_FAILURE);
	}
	YY_FLUSH_BUFFER;
	return 0;
}
int main (int argc, char**argv)
{
	if (argc==2){
		yyparse (argv[1]);
		yyparse (argv[1]);
	}
	return 0;
}
typedef int foo, bar;
int baz (void)
{
	static bar (bar);     /* redeclare bar as static variable */
	extern foo foo (foo); /* redeclare foo as function */
	foo(bar);
	return foo (bar);
}

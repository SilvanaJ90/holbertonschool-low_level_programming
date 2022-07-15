C - Variadic functions

Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is

int check(int a, double b, ...);

Variadic functions must have at least one named parameter, so, for instance,

char *wrong(...);

is not allowed in C. (In C++, such a declaration is permitted.) In C, a comma must precede the ellipsis; in C++, it is optional. 

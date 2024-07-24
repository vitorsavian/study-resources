#include <iostream>

int add(int x, int y); // this is a declaration

int main(int argc, char *argv[]) {
  std::cout << "The sum 3 and 4 is: " << add(3, 4) << std::endl;
  return 0;
}

int add(int x, int y) {
  return x + y;
} // this is a functio
  //
  //

// Declaration -> void foo() without body and also foo(){}
//
// Definition -> void foo() {}
//
// Pure declaration -> void foo();
//
// Initialization -> int x {2}
//
//
// The one definition rule (ODR)

/*The one definition rule (or ODR for short) is a well-known rule in C++. The
 * ODR has three parts:*/
/**/

/*Within a file, each function, variable, type, or template in a given scope can
 * only have one definition. Definitions occurring in different scopes (e.g.
 * local variables defined inside different functions, or functions defined
 * inside different namespaces) do not violate this rule.*/

/*Within a program, each function or variable in a given scope can only have one
 * definition. This rule exists because programs can have more than one file
 * (we’ll cover this in the next lesson). Functions and variables not visible to
 * the linker are excluded from this rule (discussed further in lesson 7.6 --
 * Internal linkage).*/

/*Types, templates, inline functions, and inline variables are allowed to have
 * duplicate definitions in different files, so long as each definition is
 * identical. We haven’t covered what most of these things are yet, so don’t
 * worry about this for now -- we’ll bring it back up when it’s relevant.*/

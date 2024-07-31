#include <iostream>

// #define is like the macros from cpp
// there two types of basic macros: object-like macros, and function like macros

// Function-like macros act like functions, and serve a similar purpose. Their
// use is generally considered unsafe, and almost anything they can do can be
// done by a normal function
//
// Object like macros can be defined in one of two ways:
//
// #define IDENTIFIER
// #define IDENTIFIER substitution_text
//

#define MY_NAME "Vitor"

int main(int argc, char *argv[]) {
  std::cout << "My name is: " << MY_NAME << '\n';
  return 0;
}

// Condition compilation

#define PRINT_JOE

void print() {
#ifdef PRINT_JOE
  std::cout << "Joe\n";
#endif
}

// #if 0 means the code will not compile and #if 1 means the code will compile

// You can define file.h to receive a the define and it will work on files that
// include the .h file #include "Alex.h" // copies #define MY_NAME from Alex.h
// here #include <iostream>

// int main()
//{
//  std::cout << "My name is: " << MY_NAME << '\n'; // preprocessor replaces
//  MY_NAME with "Alex"
// return 0;
//}

#include <iostream>

// function header
// returnType functionName() {}

void doPrint() { std::cout << "In doPrint()\n"; }

int main(int argc, char *argv[]) {
  std::cout << "Starting main()\n";
  doPrint();
  std::cout << "Ending main()\n";
  return 0;
}

// Cpp cannot do nested functions so you cannot do something like
// void foo() {
//
// }

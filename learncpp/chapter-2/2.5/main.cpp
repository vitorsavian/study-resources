#include <iostream>

int add(int x, int y) { // function parameters are local variables
  int z{x + y};
  return z;
}

void doSomething() { std::cout << "Hello" << std::endl; }

int main(int argc, char *argv[]) {
  int x{0};
  doSomething();
  return 0;
}

#include <iostream>

int main(int argc, char *argv[]) {
  int x;
  int y, z;

  int width;
  width = 5;

  std::cout << width;

  width = 7;

  std::cout << width;

  int initializedWidth{5};

  // types of initizalizations
  int a;     // (default initialization)
  int b = 5; // (default copy)
  int c(6);  // (direct initialization)
  // C++11 preferred
  int d{7};    // (direct list initialization)
  int e = {8}; // (copy list initialization)
  int f{};     // (value initialization)

  return 0;
}

int init() {
  // An integer can onlyh hold non-fractional values
  int w1{4.5}; // compile error: list init does not allow narrowing conversion
               // of 4.5 to 4

  w1 = 4.5; // okay: copy assignment allows narrowing conversion of 4.5 to 4

  int w2 = 4.5; // compiles: copy init initiaizes width with 4
  int w3(4.5);  // compiles: direct init initializes width with 4

  return 0;
}

int initializeVariables() {
  int a = 5, b = 6;
  int c(7), d(8);
  int e{9}, f{10};
  int g = {9}, h = {10};
  int i{}, j{};
}

int maybe_unused() { [[maybe_unused]] double pi{3.14159}; }

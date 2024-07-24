#include <iostream>

int main(int argc, char *argv[]) {
  // when a variable is not initialized, cpp sets anything to it (mostly
  // garbage)

  int x;

  std::cout << x << "\n";

  std::cout << sizeof(int) << '\n';

  return 0;
}

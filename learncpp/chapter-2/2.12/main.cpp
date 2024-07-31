#include "square.h"
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "a square has " << getSquareSides() << " sides\n";
  std::cout << "a square of length 5 has perimeter lenght "
            << getSquarePerimeter(5) << '\n';
  return 0;
}

#include <iostream>

int main(int argc, char *argv[]) {
  int number{};
  std::cout << "Enter an integer: ";
  std::cin >> number;
  std::cout << "Double that number is: " << number * 2 << std::endl;
  return 0;
}

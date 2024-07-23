#include <iostream>
#include <ostream>

int maintwo(int argc, char *argv[]) {
  std::cout << "Hello World!" << std::endl; // print Hello world! to console
  std::cout << 4 << std::endl;
  return 0;
}

int cin() {
  std::cout << "Enter a number";
  int x{};
  std::cin >> x;
  std::cout << "You entered " << x << "\n";

  // the site sets you to actually go to third party librarys
  // to find easy ways to get inputs before entering enter
  // so you can use pdcurses, FXTUI, cpp-terminal or notcurses

  return 0;
}

int mainB(int argc, char *argv[]) {
  std::cout << "Enter two numbers: ";

  int x{};
  std::cin >> x;

  int y{};
  std::cin >> y;

  std::cout << "You entered" << x << " and " << y << "\n";

  return 0;
}

// to show that the input is a buffer that add things to a list
// when you run the std::cin and add like 4 5 and then press enter
// the 4 will be added to x and if you try to get the y
// the cin will set y as 5
//
// << is the insert operator and >> the extration operator

int main() {
  std::cout << "Enter three numbers: ";
  int x{}, y{}, z{};

  std::cin >> x;
  std::cin >> y;
  std::cin >> z;

  std::cout << "You entered " << x << "," << y << ", and " << z << "\n";

  return 0;
}

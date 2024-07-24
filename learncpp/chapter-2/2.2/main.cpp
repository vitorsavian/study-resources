#include <iostream>

int getValueFromUser() {
  std::cout << "Enter an Integer: ";
  int input{};
  std::cin >> input;
  return input;
}

int main(int argc, char *argv[]) {
  getValueFromUser();
  int num{getValueFromUser()};
  std::cout << num << " double is: " << num * 2 << "\n";
  return 0;
}

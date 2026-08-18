#include <cmath>
#include <cstdlib>
#include <iostream>
#include <print>

namespace {
double a{};
double b{};
double c{};
} // namespace
void gettingInput() {
  std::print("Welcome to the program! You need to enter the next coefficients(a,b,c): ");
  std::cin >> a >> b >> c;
}
bool checkingInput() {
  while (a == 0) {
    std::print("Incorrect, this is an linear function! Re-enter a: ");
    std::cin >> a;
  }
  return true;
}
int calculating() {
  using std::print;
  double discriminant{pow(b, 2) - 4 * a * c};
  if (discriminant < 0) {
    print("The discriminant is: {}\n", discriminant);
    print("There are not roots!\n");
    return EXIT_SUCCESS;
  }
  double root1{(-b + sqrt(discriminant)) / (2 * a)};
  double root2{(-b - sqrt(discriminant)) / (2 * a)};
  if (discriminant == 0) {
    print("The discriminant is: {}\n", discriminant);
    print("There is exactly the one root: {}\n", root1);
    return EXIT_SUCCESS;
  }
  print("The discriminant is: {}\n", discriminant);
  std::cout << "There are exactly two roots: \n" << root1 << '\n' << root2 << '\n';
  return EXIT_SUCCESS;
}
int main() {
  gettingInput();
  checkingInput();
  calculating();
  return EXIT_SUCCESS;
}

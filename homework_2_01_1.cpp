//альтернативная версия без switch

#include <iostream>

char registr(int literal) {
  if (literal >= 65 && literal <= 90) {
    literal += 32;
    return literal;
  } else if (literal >= 97 && literal <= 122) {
    literal -= 32;
    return literal;
  } else {
    std::cout << "waiting letter! exit \"0\"";
    return literal = 7;
  }
}

int main(int argc, char** argv) {
  while (true) {
    char literal;
    std::cin >> literal;
    if (literal == '0') {
      break;
    }
    literal = registr(literal);
    std::cout << "\t" << literal << "\n";
  }
  return 0;
}
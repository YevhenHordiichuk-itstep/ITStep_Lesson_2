//deckToBase

#include <iostream>

using namespace std;

void decToBase(int N, int B) {
  while (B <= 10) {
    int a = N;
    int power = 0;
    
    while (a > 0) {
    a /= B;
    ++power;
    }
  
    char buffer[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int j = power - 1;
    int b = N;
    
    while (b > 0) {
      buffer[j] = b % B + '0';
      b /= B;
      --j;
    }
    
    switch (B) {
      case 2:
        cout << B << "\tbinary\t\t";
        break;
      case 3:
        cout << B << "\tternary\t\t";
        break;
      case 4:
        cout << B << "\tquaternary\t";
        break;
      case 5:
        cout << B << "\tquinary\t\t";
        break;
      case 6:
        cout << B << "\tsexagesimal\t";
        break;
      case 7:
        cout << B << "\tseptenary\t";
        break;
      case 8:
        cout << B << "\tvomerina\t";
        break;
      case 9:
        cout << B << "\tdeviationa\t";
        break;
      case 10:
        cout << B << "\tdecimal\t\t";
        break;  
    }
    
    for (int i = 0; i < power; ++i) {
    cout << buffer[i];
    }
    cout << "\n";
    ++B;
  }
}

int main(int argv, char** argc) {
  int N = 95;
  int B = 2;
  decToBase(N, B);
  return 0;
}
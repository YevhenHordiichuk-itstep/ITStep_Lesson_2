#include <iostream>

int getmax(int array[], int N) {
  int b = array[0];
  for (int i = 1; i < N; ++i) {
    if (array[i] >= b) {
      b = array[i];
    }
  }
  return b;
}

int main(int argc, char** argv) {
  int array[256] = {0};
  int N, max;
  std::cout << "enter N: ";
  std::cin >> N;
  std::cout << "enter N elements: ";
  for (int i = 0; i < N; ++i) {
    std::cin >> array[i];
  }
  max = getmax(array, N);
  std::cout << "max: " << max;
  return 0;
}
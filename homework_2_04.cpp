#include <iostream>

void upsort(int mas[], int N) {
  for (int i = 0; i < N; ++i) {
    for (int k = 0; k < N - 1 - i; ++k) {
      if (mas[k] > mas[k + 1]) {
        int b = mas[k];
        mas[k] = mas[k + 1];
        mas[k + 1] = b;
      }
    }
  }
  for (int i = 0; i < N; ++i) {
    std::cout << " " << mas[i];
  }
}

int main(int argc, char** argv) {
  int array[256];
  int N;
  std::cout << "enter N: ";
  std::cin >> N;
  std::cout << "enter N elements: ";
  for (int i = 0; i < N; ++i) {
    std::cin >> array[i];
  }
  upsort(array, N);
  return 0;
}
#include <iostream>

using namespace std;

void evenPrime(int array[], int N, int count = 0, int prime = 0) {
  for (int i = 0; i < N; ++i) {
    if (array[i] % 2 == 0) {
      ++count;
    }
        
    int k = 2;
    while (array[i] % k != 0) {
      if (k * k >= array[i] - 1) {
        ++prime;
        break;
      }
      ++k;
    }
  }
  cout << "n = " << N << "\neven = " << count << "\nuneven = " << N - count << "\nprime = " << prime;
}

int main(int argc, char** argv) {
  int array[100];
  int N;
  int i = 0;
  while (true) {
    cin >> array[i];
    if (array[i] == 0) {
      N = i;
      break;
    } else {
      ++i;
    }
  }
  evenPrime(array, N);
  return 0;
}
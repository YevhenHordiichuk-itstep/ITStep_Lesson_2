#include <cstdlib>
#include <iostream>

using namespace std;

void printArray(int array[], int N) {
  for (int i = 0; i < N; ++i) {
    cout << array[i] << "_";
  }
  cout << "\n";
}

void bond(int A[], int B[], int a, int b, int C[], int c) {
  for (int i = 0; i < a; ++i) {
    C[i] = A[i];
  }
  for (int i = a; i < a + b; ++i) {
    C[i] = B[i - a];
  }
  printArray(C, c);
}

int main(int argv, char** argc) {
  int A[10];
  int B[15];
  int a = sizeof(A) / sizeof(A[0]);
  int b = sizeof(B) / sizeof(B[0]);
  
  for (int i = 0; i < a; ++i) {
    for (int k = 0; k < b; ++k) {
      B[k] = rand() % 100 + 1;
    }
    A[i] = rand() % 100 + 1;
  }
  
  int C[a + b];
     
  bond(A, B, a, b, C, a + b);
  return 0;
}
#include <cstdio>

void average(int A[], int N) {
  int sum = 0;
  for (int k = 0; k < N; ++k) {
    sum += A[k];
    }
    printf("%i", sum);
    printf("average = %0.2f", (float) sum / N);
}

int main(int argc, char** argv) {
  int array[16];
  int N = 16;
  for (int i = 0; i < N; ++i) {
    scanf("%i", &array[i]);
    }
    average(array, N);
  return 0;
}
#include <cstdio>
#include <cmath>

void geometricMean(int A[], int N) {
    float mul = 1.00;
    for (int k = 0; k < N; ++k) {
        mul *= A[k];
    }
    while (N % 2 == 0) {
        mul = sqrt(mul);
        N /= 2;
    }
    printf("geometric mean = %0.2f", mul);
}

int main(int argc, char** argv) {
    int array[16];
    int N = 16;
    for (int i = 0; i < N; ++i) {
        scanf("%i", &array[i]);
    }
    geometricMean(array, N);
    return 0;
}
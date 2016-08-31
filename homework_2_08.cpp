#include <cstdio>

void average(int A[], int N) {
    
    int sum = 0;
    
    float average = sum / N;
    
    for (int k = 0; k < N; ++k) {
        sum += A[k];
    }
    
    printf("average = %0.2f", sum / N);
    
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
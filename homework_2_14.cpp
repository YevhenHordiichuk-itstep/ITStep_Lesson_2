#include <iostream>

using namespace std;

long long Akrmn(int m, int n) {
    cout << m << "_" << n << "\n";
    if (m < 0 || n < 0) {
        return 0;
    } else if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return Akrmn(m - 1, 1);
    } else {
        return Akrmn(m - 1, Akrmn(m, n - 1));
    }
}

int main(int argc, char** argv) {
    int m, n;
    long long Akrmn;
    cout << "m, n = ";
    cin >> m >> n;
    
    Akrmn = Akrmn(m, n);
    
    cout << "Akkermann(" << m << ", " << n << ") = " << Akrmn;
    return 0;
}
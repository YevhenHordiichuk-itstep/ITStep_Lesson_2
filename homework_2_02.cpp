#include <iostream>

double res(double x, double y) {
  return x * y;
}

int main(int argc,char** argv) {
	double a, b, c;
	std::cin >> a >> b;
	c = res(a, b);
	std::cout << c;
	return 0;
}
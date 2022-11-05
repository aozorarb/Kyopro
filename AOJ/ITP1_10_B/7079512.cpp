#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	double S, L, h, a, b, c, rad;
	const double PI = acos(-1);
	cin >> a >> b >> c;
	rad = c * PI / 180;
	L = a + b + sqrt(a*a+b*b - (2 * a * b * cos(rad)));
	S = a * b * sin(rad) * 0.5;
	h = b * sin(rad);
	printf("%lf\n%lf\n%lf\n", S, L, h);
	return 0;
}


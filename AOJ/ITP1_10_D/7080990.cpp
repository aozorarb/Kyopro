#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	double p1, p2, p3, pInf;
	scanf("%d", &n);
	vector<int> x(n), y(n);
	for(int i=0;i<n;i++) scanf("%d", &x[i]);
	for(int i=0;i<n;i++) scanf("%d", &y[i]);
	// p1
	for(int i=0;i<n;i++) p1 += abs(x[i] - y[i]);
	// p2
	for(int i=0;i<n;i++) p2 += pow(abs(x[i] - y[i]), 2.0);
	p2 = sqrt(p2);
	// p3
	for(int i=0;i<n;i++) p3 += pow(abs(x[i] - y[i]), 3.0);
	p3 = pow(p3, 1.0/3.0);
	// pInf
	pInf = -1;
	for(int i=0;i<n;i++) {
		if(abs(x[i] - y[i]) > pInf) pInf = abs(x[i] - y[i]);
	}
	printf("%lf\n%lf\n%lf\n%lf\n", p1, p2, p3, pInf);

}


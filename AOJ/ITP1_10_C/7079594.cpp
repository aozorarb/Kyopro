#include <iostream>
#include <cstdio>
#include <cmath>
#define MAX_STUDENT 1100
using namespace std;

int main() {
	int n;
	double ans, avg, sigma;
	int s[MAX_STUDENT];
	while(true) {
		for(int i=0;i<MAX_STUDENT;i++) s[i] = 0;
		avg = 0, ans = 0, sigma = 0;
		cin >> n;
		if(n == 0) break;
		for(int i=0;i<n;i++) {
			cin >> s[i];
			avg += s[i];
		}
		avg /= n;
		for(int i=0;i<n;i++) {
			sigma += pow(s[i] - avg, 2.0);
		}
		ans = sqrt((sigma) / n);
		printf("%.8lf\n", ans);

	}
}


#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double r;
    cin >> r;
  	double area = r*r*M_PI;
    double circumference = 2*r*M_PI;
    printf("%.6lf %.6lf",area, circumference);
}

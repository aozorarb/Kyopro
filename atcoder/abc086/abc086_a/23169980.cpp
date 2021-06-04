#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int a,b;
    cin >> a >> b;
    string res;
    if ((a*b)%2 == 1)res = "Odd";
    else res = "Even";
    cout << res << endl;
}

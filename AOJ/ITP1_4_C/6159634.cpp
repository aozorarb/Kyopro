#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(true) {
        int a, b, res;
        char op;
        cin >> a >> op >> b;
        if (op == '?') {
            break;
        }else if (op == '+') {
            res = a + b;
        }else if (op == '-') {
            res = a - b;
        }else if (op == '*') {
            res = a * b;
        }else if (op == '/') {
            res = a / b;
        }
        cout << res << endl;
    }
}

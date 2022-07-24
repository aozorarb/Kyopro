#include <iostream>

using namespace std;

int main() {
    string str;
    int sum = 0, zero = '0';
    while(1) {
        sum = 0;
        cin >> str;
        if(str == "0") break;
        int size = str.size();
        for(int i=0;i<size;i++) {
            sum += (int)str[i] - zero;
        }
        cout << sum << endl;
    }
    return 0;
}

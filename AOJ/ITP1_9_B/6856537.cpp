#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str, tmp;
    int m, h;
    while(1) {
        tmp = "";
        cin >> str >> m;
        if(str == "-") break;
        for(int i=0;i<m;i++) {
            cin >> h;
            tmp = str.substr(0, h);
            str.erase(0, h);
            str += tmp;
        }
        cout << str << endl;
    }

    return 0;
}

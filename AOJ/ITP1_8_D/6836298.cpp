#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    string ans = "No";
    string str, sub_str;
    cin >> str >> sub_str;
    int size = str.size();
    for(int i=0;i<size;i++) for(int j=0;j<sub_str.size();j++) {
        if(str[(i+j) % size] != sub_str[j]) break;
        if(j == sub_str.size() - 1) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}

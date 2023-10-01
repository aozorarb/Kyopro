// https://atcoder.jp/contests/abc286/tasks/abc286_b
#include <iostream>
using namespace std;
int main() {
    int N; cin >> N;
    string str; cin >> str;
    string ans = "";
    for(int i=0;i<N;++i) {
        if(str[i] == 'n' && str[i+1] == 'a') {
            ans += "nya";
            i++;
        } else {
            ans += str[i];
        }
    }
    cout << ans << endl;
}


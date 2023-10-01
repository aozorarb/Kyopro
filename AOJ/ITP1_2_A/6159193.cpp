#include <iostream>
using namespace std;

int main() {
    int a,b;
  	cin >> a >> b;
    string ans;
    if (a < b) {
        ans = "a < b";
    }else if (a > b) {
        ans = "a > b";
    }else if (a == b){
        ans = "a == b";
    }
    cout << ans << endl;
}

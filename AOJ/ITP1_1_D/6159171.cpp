#include <iostream>
#include <string>
using namespace std;

int main() {
    int S;
    cin >> S;
    string h = to_string(S / 3600);
    string m = to_string((S /60) % 60);
    string s = to_string(S % 60);
    string ans = h + ":" + m + ":" + s;
    cout << ans << endl;
}

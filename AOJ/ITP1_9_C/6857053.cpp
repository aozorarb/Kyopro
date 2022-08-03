#include <iostream>

using namespace std;

int main() {
    int taro = 0, hanako = 0, n;
    string tcard, hcard;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> tcard >> hcard;
        if(tcard > hcard) taro += 3;
        else if(tcard == hcard) taro++, hanako++;
        else hanako += 3;
    }
    cout << taro << " " << hanako << endl;
}

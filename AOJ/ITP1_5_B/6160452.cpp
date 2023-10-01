#include <iostream>
using namespace std;

int main() {
    while(true) {
        int H, W;
        cin >> H >> W;
        if (H == 0 && W == 0)break;
        else {
            for (int i=0;i<H;i++) {
                for (int l=0;l<W;l++) {
                    if (i == 0 || i == H-1 )cout << '#';//縦列が端の時
                    else if (l == 0 || l== W-1)cout << '#';//横列が端の時
                    else cout << '.';//中央
                }
                cout << endl;
            }
        }
        cout << endl ;
    }
}

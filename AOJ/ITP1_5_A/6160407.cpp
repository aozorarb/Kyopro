#include <iostream>
using namespace std;

int main() {
    while(true) {
        int H, W;
        cin >> H >> W;
        if (H == 0 && W == 0)break;
        else {
            for (int i=0;i<H;i++) {
                for (int l=0;l<W;l++)cout << '#';
                cout << endl;
            }
         }
     cout << endl;
    }
}

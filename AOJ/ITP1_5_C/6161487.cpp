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
                  if (i % 2 == 0) {
                      	if (l % 2 == 0)cout << '#';//偶数数列でかつ偶数行 
                    	else cout << '.';
                    }else {
                   	 if (l % 2 == 0)cout << '.';
                     else cout << '#';
                  }
                }
                cout << endl;
            }
        }
        cout << endl ;
    }
}

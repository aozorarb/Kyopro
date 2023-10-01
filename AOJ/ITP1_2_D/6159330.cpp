#include <iostream>
using namespace std;

int main() {
    //x+r < W and y+r < H ならいい
    int W,H,x,y,r;
    bool flg = false;
    cin >> W >> H >> x >> y >> r;
    if ((x+r) <= W && 0 <= (x-r) && (y+r) <= H && 0 <= (y+r)) {
        flg = true;
    }
    if (flg) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}

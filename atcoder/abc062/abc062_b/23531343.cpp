#include <bits/stdc++.h> 
using namespace std;
void flame(int W){
    for (int i=0;i<W+2;i++)cout << "#";
    cout << endl;
}
int main() {
    int H,W;
    cin >> H >> W;
    vector<string>A(H);
    for(int i=0;i<H;i++)cin >> A.at(i);
    flame(W);
    for (int i=0;i<H;i++)cout << "#" << A.at(i) << "#" << endl;
    flame(W);
}


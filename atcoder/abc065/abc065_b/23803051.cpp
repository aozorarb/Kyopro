#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int current,N,res = 0;
    cin >> N;
    bool flg = false;
    vector<int>a(N);
    for (int i=0;i<N;i++)cin >> a[i];
    for (int i=0;i<N;i++){
        if (current == 1 ){
            flg = true;
            break;
        }else{
            current = a[current]-1;
            res++;
        }
    }
    if (flg)cout << res << endl;
    else cout << -1 << endl;
}


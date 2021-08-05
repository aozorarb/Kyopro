#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    for (int i=0;i<N;i++)cin >> A.at(i);
    map<int, int>cnt;
    int max_cnt = 0;
    int ans = -1;
    for (int x : A){
        if (cnt.count(x)){
            cnt.at(x)++;
        }else{
            cnt[x] = 1;
        }
    }
    for (int x : A){
        if (cnt[x] > max_cnt){
            max_cnt = cnt[x];
            ans = x;
        }
    }
    cout << ans << ' ' << max_cnt << endl;
    

    return 0;
}

#include <bits/stdc++.h> 
using namespace std; 
int N,M;
int main(){
    cin >> N >> M;
    vector<int>res(N,0);
    for (int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        res[a-1]++;
        res[b-1]++;
    }
    for (int i=0;i<N;i++){
        cout << res[i] << endl;
    }
}
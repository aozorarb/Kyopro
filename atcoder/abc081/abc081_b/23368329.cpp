#include <bits/stdc++.h> 
using namespace std; 
int main() {
int N,res =0;
cin >> N;
vector<int>A(N);
for(int i=0;i<N;i++)cin >> A[i];
bool flg = true;
while(true){
    for (int i=0;i<N;i++){
        if (A[i] % 2 == 0)A[i]/=2;
        else flg = false;
    }
    if (!flg)break;
    res++;
}
cout << res  << endl;
}

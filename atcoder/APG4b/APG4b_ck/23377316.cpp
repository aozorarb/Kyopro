#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin >> S;
    if (S.size() == 1){
        cout << 1 << endl;
        }else{// when only 1
            int res = 1;
            for(int i=1;i<S.size();i+=2){//only operate slice
                if(S[i] == '+')res++;
                else if (S[i] == '-')res--;
              }
            cout << res << endl;
        }
    
    return 0;
}
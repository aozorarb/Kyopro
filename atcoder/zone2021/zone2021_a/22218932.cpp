#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int res = 0;
    for (int i=0;i<12;i++){
        if (S.at(i) == 'Z'){
            if(S.at(i+1) == 'O'){
                if(S.at(i+2) == 'N'){
                    if(S.at(i+3) == 'e'){
                        res++;
                    }
                }
            }
        }
    }
    cout << res << endl;
}
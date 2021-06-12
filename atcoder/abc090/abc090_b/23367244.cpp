#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int A,B,res = 0;
    cin >> A >> B;
    for (int i=A;i<=B;i++){//iは五桁
        string is = to_string(i);
        if (to_string(i)[4] == '0')continue;// 一番下が0の時は反転しない
        string reversed (is.rbegin(),is.rend());
        if (is == reversed){
            res++;
        }
        
    }
    cout << res << endl; 
}
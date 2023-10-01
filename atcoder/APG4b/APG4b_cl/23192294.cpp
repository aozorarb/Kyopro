#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,A;
    cin >> N >> A;
    for (int i=1;i<=N;i++){
        char op;
        int B;
        cin >> op >> B;
        if (B == 0 && op == '/'){
            cout << "error" << endl;
            break;
        }
        switch (op) {
            case '+':
                A+=B;
                cout << i << ":" << A << endl;
                
                break;
            case '-':
                A-=B;
                cout << i << ":" << A << endl;
                
                break;
            case '*':
                A*=B;
                cout << i << ":" << A << endl;  
                break;
            case '/':
                A/=B;
                cout << i << ":" << A << endl;
                
        }

    }
    return 0;
}
   


   

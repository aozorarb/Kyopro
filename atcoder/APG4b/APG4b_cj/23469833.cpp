#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,sum = 0;
    cin >> N;
    vector<int>st(N);
    for(int i=0;i<N;i++){
        cin >> st.at(i);
        sum+=st.at(i);
    }
    int avg = sum/N;
    for (int i=0;i<N;i++){
        cout << abs(st.at(i) - avg) << endl; 
    }
    
    return 0;
}

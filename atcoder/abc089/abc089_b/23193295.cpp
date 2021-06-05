#include <bits/stdc++.h> 
using namespace std; 
int main() {
int N;
bool four = false;
cin >> N;
for (int i=0;i<N;i++){
    char S;
    cin >> S;
    if (S =='Y')four = true;
}
if (four)cout <<"Four"<< endl;
else cout << "Three" << endl;
return 0;
}

#include <bits/stdc++.h>
using namespace std;
vector<long long>memo(90,-1);

long long ryuka(int i,vector<long long>&memo){
    if(memo.at(i) != -1)return memo.at(i);
    return memo.at(i) =ryuka(i-1,memo) + ryuka(i-2,memo);
}
int main(){
    int N;
  	memo.at(0) = 2;
	memo.at(1) = 1;
    cin >> N;
    cout << ryuka(N,memo) << endl;
}
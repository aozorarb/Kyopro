#include <bits/stdc++.h>
using namespace std;
int main(){
    typedef pair<int, int> pairI;
    int N;
    cin >> N;
    vector<pairI>pair_num(N);
    for (int i=0;i<N;i++)cin >> pair_num.at(i).second >> pair_num.at(i).first;
    sort(pair_num.begin(),pair_num.end());
    for (int i=0;i<N;i++)cout << pair_num.at(i).second << ' ' << pair_num.at(i).first <<endl;
    return 0;
}

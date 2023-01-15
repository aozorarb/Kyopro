// https://atcoder.jp/contests/abc285/tasks/abc285_a

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define REP(i,n)   for(int i=0; i<(int)(n); i++)
#define FOR(i,b,e) for(int i=(b); i<=(int)(e); i++)

const int B_MAX = 15;

int a, b;
vector<vector<int> > G(15);

int main() {
    int a, b;
    cin >> a >> b;
    if(b < a) swap(a, b);
    a--, b--;
    G[0].push_back(1);
    G[0].push_back(2);
    G[1].push_back(3);
    G[1].push_back(4);
    G[3].push_back(7);
    G[3].push_back(8);
    G[4].push_back(10);
    G[4].push_back(11);

    G[2].push_back(5);
    G[2].push_back(6);
    G[5].push_back(11);
    G[5].push_back(12);
    G[6].push_back(13);
    G[6].push_back(14);

    bool flg = false;
    //for(int i=0;i<15;++i) {
    //    cout << i << ":" << " ";
    //    for(auto v : G[i]) {
    //        cout << ' ' << v;
    //    }
    //    cout << endl;
    //}
    //printf("a: %d, b: %d\n", a, b);
    for(auto v : G[a]) {
     //   cout << v << endl;
        if(v == b) flg = true;
    }
    puts((flg ? "Yes" : "No"));
}

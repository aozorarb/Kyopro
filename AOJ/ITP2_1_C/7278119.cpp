#include <iostream>
#include <list>
using namespace std;

int main() {
    int q;
    cin >> q;
    list<int> A;
    auto cursor = A.end();
    for(int i=0;i<q;++i) {
        int o, d;
        cin >> o;
        if(o == 0) {
            cin >> d;
            cursor = A.insert(cursor, d);
        } else if(o == 1) {
            cin >> d;
            if(d > 0) for(int i=0;i<d;++i) cursor++;
            else for(int i=d;i<0;++i) cursor--;
        } else if(o == 2) {
            cursor = A.erase(cursor);
        }
    }
    for(auto it : A) cout << it << endl;
}
            


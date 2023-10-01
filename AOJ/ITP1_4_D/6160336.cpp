#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
    
int main() {
    cin >> n;
    vector<long long>array(n);
    for(int i=0;i<n;i++)cin >> array[i];
    sort(array.begin(), array.end());
    long long min = array[0];
    long long max = array.at(n-1);
    long long sum = 0;
    for (int i=0;i<n;i++) {
        sum+=array[i];
    }
    cout << min << ' ' << max << ' ' << sum << endl;
}

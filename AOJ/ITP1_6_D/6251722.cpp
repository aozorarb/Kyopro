#include <iostream>
using namespace std;

int main () {
    //1.declare
    int n,m;
    cin >> n >> m;
    int matrix[110];
    int vector_a[110][110];
    int ans[110];
    //2.input
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> vector_a[i][j];
    //for(int i=0;i<n;i++)for(int j=0;j<m;j++)cout << a.at(i).at(j) << endl; 
     for(int i=0;i<m;i++)cin >> matrix[i];
    // //3.algorithm
    for(int i=0;i<n;i++) {
        int rst = 0;
        for(int j=0;j<m;j++) {
            rst += vector_a[i][j] * matrix[j];
        }
        ans[i] = rst;
    }
    //4.output
    for(int i=0;i<n;i++) {
        cout << ans[i] << endl;
    }
}

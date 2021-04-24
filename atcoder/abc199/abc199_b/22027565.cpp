#include <iostream>
#include <algorithm>
using namespace std;
int N,res,kingA,kingB;
int A[1010];
int B[1010];
int main(){
  cin >> N;
  for(int i=0;i<N;i++)cin >> A[i];
  for(int i=0;i<N;i++)cin >> B[i];//they are in A[i],B[i].
  kingA = *max_element(A,A+N);
  kingB = *min_element(B,B+N);
  for(int i=kingA;i<=kingB;i++)res++;
  cout << res << endl;
}
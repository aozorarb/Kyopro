#include <bits/stdc++.h>

using namespace std;
int main(){
    int N;
    cin >> N;
    vector<tuple<string, int, int> >restaurants;
    for (int i=0;i<N;i++){
        int b;
        string a;
        cin >> a >> b;
        restaurants.push_back(make_tuple(a,-b,i+1));
    }
    sort(restaurants.begin(),restaurants.end());
    for (int i=0;i<N;i++)cout << get<2>(restaurants.at(i)) << endl;
} 


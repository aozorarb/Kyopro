#include <iostream>
#include <vector>
#include <map>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::string;
using std::transform;
using std::vector;


int main() {
    int ans = 0;
    vector<string> sentence;
    string str, word;
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), tolower);
    while(cin >> str) {
        if(str == "END_OF_TEXT")break;
        transform(str.begin(), str.end(), str.begin(), tolower);
        sentence.push_back(str);
    }

    for(int i=0;i<sentence.size();i++) {
       if(sentence[i] ==  word) ans++;
    }
    cout << ans << std::endl;


}

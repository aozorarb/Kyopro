#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<char, int>char_count;
    // char_count[0](a) = 0 char_count[1](b) = 0 ... char_count[26](z) = 0
    for(int i=0;i<27;i++) char_count[i] = 0;
    string str;
    while(true) {
        string line;
        cin >> line;
        if(line == "\0") break;
        str += line;
    }
    for(int i=0;i<str.size();i++) {
        //全部小文字に
        if('A' <= str[i] && str[i] <= 'Z') str[i] += 'a' - 'A';
    }
    for(int i=0;i<str.size();i++) {
        //小文字なら
        if('a' <= str[i] && str[i] <= 'z') {
            char_count[(int)str[i] - 'a'] += 1;
        }
    }
    for(int i=0;i<26;i++) {
        cout << (char)('a'+i) << " : " << char_count[i] << endl;
    }
    return 0;
}

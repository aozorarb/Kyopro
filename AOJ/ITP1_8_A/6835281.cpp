#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    vector<int> char_code(1200);
    for(int i=0;i<str.size();i++) {
        char_code[i] = (int)str[i];
    }
    // もしアルファベットなら変更
    for(int i=0;i<str.size();i++) {
        if('a' <= char_code[i] && char_code[i] <='z') {
            char_code[i] -= 'a' - 'A' ;
        } else if('A' <= char_code[i] && char_code[i] <= 'Z') {
            char_code[i] += 'a' - 'A';
        }
    }
    for(int i=0;i<str.size();i++) {
        cout << (char)char_code[i];
    }
    cout << endl;
    
}

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(true) {
        int input;
        cin >> input;
        if (input == 0)break;
        cout << "Case " << i << ": " << input << endl;
        i++;
    }
}

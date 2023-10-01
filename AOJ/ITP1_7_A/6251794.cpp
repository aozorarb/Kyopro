#include <iostream>
using namespace std;

int main () {
    int middle, last, retry;
    char ans = 'F';
    while(true) {
        cin >> middle >> last >> retry;
        int score = middle + last;
        if (score + retry == -3)break;//-1 * 3 = -3
        if (middle == -1 || last == -1)ans = 'F';
        else if(80 <= score)ans = 'A';
        else if(65 <= score && score < 80)ans = 'B';
        else if(50 <= score && score < 65)ans = 'C';
        else if(30 <= score && score < 50) {
            if(50 <= retry)ans = 'C';
            else ans = 'D';
        }
        else if(score < 30)ans = 'F';
        cout << ans << endl;
    }
    return 0;
}

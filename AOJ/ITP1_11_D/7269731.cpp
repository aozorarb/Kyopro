#include <iostream>
#include <string>
using namespace std;

struct Dice {
    public:
	// upper, front, right, left, bottom, back
    int dice[6];
	Dice(int one, int two, int three, int four, int five, int six) {
		dice[0] = one;
		dice[1] = two;
		dice[2] = three;
		dice[3] = four;
		dice[4] = five;
		dice[5] = six;
	}

    Dice() {};

    private:
    void roll(int n1, int n2, int n3, int n4) {
        int tmp = dice[n1];
        dice[n1] = dice[n2];
        dice[n2] = dice[n3];
        dice[n3] = dice[n4];
        dice[n4] = tmp;
    }

    void rollX() {roll(0, 1, 5, 4);}
    void rollY() {roll(1, 2, 4, 3);}
    void rollZ() {roll(0, 2, 5, 3);}

    public:

    void input() {
        int one, two, three, four, five, six;
        cin >> one >> two >> three >> four >> five >> six;
		dice[0] = one; dice[1] = two; dice[2] = three;
		dice[3] = four; dice[4] = five; dice[5] = six;
    }

    bool eq (Dice self, Dice other) {
        bool res = true;
        for(int i=0;i<6;++i) if(self.dice[i] !=  other.dice[i]) res = false;
        return res;
    }

    bool fuzzySame(Dice other) {
        for(int i=0;i<6;++i) {
            for(int j=0;j<4;++j) {
                if(eq(*this, other)) return true;
                rollZ();
            }
            if(i%2) rollY();
            else rollX();
        }
        return false;

    }
};

int main() {
    int n;
    cin >> n;
    Dice dice[110];
    bool res = true;
    for(int i=0;i<n;++i) dice[i].input();
    for(int i=0;i<n;++i) {
        for(int j=i+1;j<n;++j) {
            if(dice[i].fuzzySame(dice[j])) res = false;
        }
    }
    cout << (res ? "Yes" : "No") << endl;
}


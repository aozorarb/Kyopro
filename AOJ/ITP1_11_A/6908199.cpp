#include <iostream>
#include <tuple>
#include <string>
using namespace std;

struct Dice {
	// u, f, r, l, b, l
	tuple<int, int, int, int, int, int> dice;
	Dice(int one, int two, int three, int four, int five, int six) {
		get<0>(dice) = one;	
		get<1>(dice) = two;
		get<2>(dice) = three;
		get<3>(dice) = four;
		get<4>(dice) = five;
		get<5>(dice) = six;
	}

	void W() {
		int one = get<0>(dice);
		get<0>(dice) = get<2>(dice);
		get<2>(dice) = get<5>(dice);
		get<5>(dice) = get<3>(dice);
		get<3>(dice) = one;
	}

	void S() {
		int one = get<0>(dice);
		get<0>(dice) = get<4>(dice);
		get<4>(dice) = get<5>(dice);
		get<5>(dice) = get<1>(dice);
		get<1>(dice) = one;
	}

	void E() {
		int one = get<0>(dice);
		get<0>(dice) = get<3>(dice);
		get<3>(dice) = get<5>(dice);
		get<5>(dice) = get<2>(dice);
		get<2>(dice) = one;
	}

	void N() {
		int one = get<0>(dice);
		get<0>(dice) = get<1>(dice);
		get<1>(dice) = get<5>(dice);
		get<5>(dice) = get<4>(dice);
		get<4>(dice) = one;
	}

	void print_u() {
		cout << get<0>(dice) << endl;
	}
};

int main() {
	int one, two, three, four, five, six;
	cin >> one >> two >> three >> four >> five >> six;
	Dice koro(one, two, three, four, five, six);
	string dir;
	cin >> dir;
	int size = dir.size();
	for(int i=0;i<size;i++) {
		if(dir[i] == 'W') koro.W();
		else if(dir[i] == 'S') koro.S();
		else if(dir[i] == 'N') koro.N();
		else if(dir[i] == 'E') koro.E();
	}
	koro.print_u();
}


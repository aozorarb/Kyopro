#include <iostream>
#include <tuple>
#include <string>
using namespace std;

const bool debug = false;

struct Dice {
	// upper, front, right, left, bottom, back
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

	void roll(char dir) {
		switch(dir) {
			case 'W':
				W();
				break;
			case 'S':
				S();
				break;
			case 'E':
				E();
				break;
			case 'N':
				N();
				break;
		}
	}

	void setCondition(int upper, int front) {
		// front面を特定
		for(int i=0;i<2;i++) {
			for(int j=0;j<4;j++) {
				if(debug) cout << "now front: " << get<1>(dice) << endl;
				if(front == get<1>(dice)) break;
				else N();
			}
			E();
		}
		// upper面を特定
		for(int i=0;i<4;i++) {
			if(debug) cout << "now upper: " << get<0>(dice) << endl;
			if(upper == get<0>(dice)) break;
			else W();
		}
	}
};

int main() {
	int one, two, three, four, five, six;
	cin >> one >> two >> three >> four >> five >> six;
	Dice koro(one, two, three, four, five, six);
	// main
	int q, qu, qf;
	cin >> q;
	for(int i=0;i<q;i++) {
		cin >> qu >> qf;
		koro.setCondition(qu, qf);
		cout << get<2>(koro.dice) << endl;
	}


}


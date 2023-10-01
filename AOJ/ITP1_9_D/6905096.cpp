#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string slice(string str, int from, int dis) {
	string part = "";
	for(int i=0;i<dis;i++) {
		part += str[from+i];
	}
	return part;
}

void print(string str, int from, int to) {
	int dis = to - from + 1;
	string part = slice(str, from, dis);
	cout << part << endl;
}

void replace(string &str, int from, int to, string sub) {
	int i = 0, j = from;
	while(j < to) {
		str[j] = sub[i];
		i++, j++;
	}

}

int main() {
	string str, command, sub;
	int n, from, to;
	cin >> str >> n;
	for(int i=0;i<n;i++) {
		cin >> command >> from >> to;
		if(command == "replace") {
			cin >> sub;
			str.replace(from, to - from + 1, sub);
			//cout << str << endl;
		}else if(command == "reverse") {
			reverse(str.begin() + from, str.begin() + to + 1);
			//cout << str << endl;
		}else if(command == "print") {
			print(str, from, to);
		}
	}
}


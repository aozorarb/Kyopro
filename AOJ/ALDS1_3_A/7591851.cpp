#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>
using namespace std;

void add(stack<int> &st) {
  int sum = st.top(); st.pop();
  sum += st.top(); st.pop();
  st.push(sum);
}

void sub(stack<int> &st) {
  int ope2 = st.top(); st.pop();
  int sum = st.top() - ope2; st.pop();
  st.push(sum);
}

void mul(stack<int> &st) {
  int sum = st.top(); st.pop();
  sum *= st.top(); st.pop();
  st.push(sum);
}

int main() {
  stack<int> st;
  string S;
  getline(cin, S);
  string str;
  for(int i=0;i<S.size();++i) {
    if(isdigit(S[i])) {
      str.push_back(S[i]);
    } else if(isspace(S[i])) {
      if(!str.empty()) {
        st.push(stoi(str));
        str.clear();
      }
    } else {
      if(!str.empty()) {
        st.push(stoi(str));
        str.clear();
      }
      switch(S[i]) {
        case '+':
          add(st);
          break;
        case '-':
          sub(st);
          break;
        case '*':
          mul(st);
          break;
      }
     //cout << st.top() << endl;
    }
  }
  cout << st.top() << endl;
}


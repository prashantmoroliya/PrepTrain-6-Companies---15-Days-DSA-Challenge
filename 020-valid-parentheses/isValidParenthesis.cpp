#include <iostream>
#include <string>

using namespace std;

// copy this function...
bool isValidParenthesis(string s) {
  int balance = 0;

  for (char bracket : s) {
    if (bracket == '(' || bracket == '[' || bracket == '{') {
      balance++;
    } else {
      if (balance == 0) {
        return false;
      } else if ((bracket == ')' && s[--balance] != '(') ||
                 (bracket == ']' && s[--balance] != '[') ||
                 (bracket == '}' && s[--balance] != '{')) {
        return false;
      }
    }
  }

  return balance == 0;
}

// ignore this..
int main() {
  string input;
  cin >> input;

  if (isValidParenthesis(input)) {
    cout << "Balanced\n";
  } else {
    cout << "Not Balanced\n";
  }

  return 0;
}

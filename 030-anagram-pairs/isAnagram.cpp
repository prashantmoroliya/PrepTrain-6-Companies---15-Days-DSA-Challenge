#include <iostream>
#include <vector>

using namespace std;

bool isAnagram(string str1, string str2) {
  vector<int> freq(26, 0);

  for (char c : str1) {
    ++freq[c - 'a'];
  }

  for (char c : str2) {
    --freq[c - 'a'];
  }

  for (int i : freq) {
    if (i != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  string str1, str2;
  cin >> str1 >> str2;

  bool result = isAnagram(str1, str2);

  if (result) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  return 0;
}

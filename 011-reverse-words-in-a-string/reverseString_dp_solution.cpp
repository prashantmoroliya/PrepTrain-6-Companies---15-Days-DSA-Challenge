#include <bits/stdc++.h>
using namespace std;

// copy this function only...
string reverseString(string &str) {
    stringstream ss(str);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string reversedStr = "";
    for (int i = 0; i < words.size(); i++) {
        if (i != 0) {
            reversedStr += " ";
        }
        reversedStr += words[i];
    }
    return reversedStr;
}

// ignore this...
int main() {
    string input;
    getline(cin, input);
    string reversedString = reverseString(input);
    cout << reversedString << endl;

    return 0;
}



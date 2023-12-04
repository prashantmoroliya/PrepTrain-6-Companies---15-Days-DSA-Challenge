#include <iostream>
#include <vector>

using namespace std;

// copy from here... 
void reverseWordsHelper(string &s, int start, int end) {
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}

string reverseString(string &str) {
    int n = str.length();
    if (n == 0) return ""; // Handling empty string case

    reverse(str.begin(), str.end()); // Reverse the entire string

    int wordStart = 0;
    int wordEnd = 0;
    bool inWord = false;

    for (int i = 0; i < n; ++i) {
        if (str[i] != ' ' && !inWord) {
            wordStart = i;
            inWord = true;
        } else if (str[i] == ' ' && inWord) {
            wordEnd = i - 1;
            reverseWordsHelper(str, wordStart, wordEnd);
            inWord = false;
        }
    }

    if (inWord) {
        reverseWordsHelper(str, wordStart, n - 1);
    }

    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    str.resize(j);

    return str;
}
// till here...

// ignore this function...
int main() {
    string input;
    getline(cin, input);
    string reversedString = reverseString(input);
    cout << reversedString << endl;

    return 0;
}


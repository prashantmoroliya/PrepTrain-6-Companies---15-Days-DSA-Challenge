#include<bits/stdc++.h>
using namespace std;

// copy this function...
string longestPalinSubstring(string str) {
    int n = str.size();
    if(n == 0)
        return "";
    n = 2*n + 1; // Position count
    int L[n]; // LPS Length Array
    L[0] = 0;
    L[1] = 1;
    int C = 1; // centerPosition
    int R = 2; // centerRightPosition
    int i = 0; // currentRightPosition
    int iMirror; // currentLeftPosition
    int maxLPSLength = 0;
    int maxLPSCenterPosition = 0;
    int start = -1;
    int end = -1;
    int diff = -1;

    for (i = 2; i < n; i++) {
        iMirror = 2*C-i;
        L[i] = 0;
        diff = R - i;
        if (diff > 0)
            L[i] = min(L[iMirror], diff);
        while (((i + L[i]) < n && (i - L[i]) > 0) && (((i + L[i] + 1) % 2 == 0) || (str[(i + L[i] + 1)/2] == str[(i - L[i] - 1)/2]))) {
            L[i]++;
        }
        if(L[i] > maxLPSLength) {
            maxLPSLength = L[i];
            maxLPSCenterPosition = i;
        }
        if (i + L[i] > R) {
            C = i;
            R = i + L[i];
        }
    }
    start = (maxLPSCenterPosition - maxLPSLength)/2;
    end = start + maxLPSLength - 1;
    return str.substr(start, end + 1 - start);
}


// ignore this...
int main() {
    string str;
    cin >> str;
    string result = longestPalinSubstring(str);
    cout << result << endl;
    return 0;
}

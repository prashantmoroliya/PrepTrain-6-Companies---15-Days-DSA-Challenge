#include <bits/stdc++.h>

using namespace std;

// just complete the function to score 

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count = 0, candidate = 0;
	for (int i = 0; i < n; i++) {
    	if (count == 0) {
	  		candidate = arr[i];
		}
      	
		if (arr[i] == candidate) {
	  		count++;
		} else {
	  		count--;
		}
    }
  	
	count = 0;
  	for (int i = 0; i < n; i++) {
    	if (arr[i] == candidate) {
	  		count++;
		}
    }
  
  	if (count > n / 2) {
    	return candidate;
    } else {
    	return -1;
	}
}



// don't write main 
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int majorityElement = findMajorityElement(arr, n);
        cout << majorityElement << endl;
    }
    
    return 0;
}


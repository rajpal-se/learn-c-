/*
Problem: Missing number in array
Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.
*/

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}

int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int size = n+1, nums[size] = {0};
    n--;
    
    for(int i=0; i<n; i++)
        nums[ array[i] ] = 1;
    
    for(int i=1; i<=size; i++)
        if(nums[i] == 0)
            return i;
}


/*

*/

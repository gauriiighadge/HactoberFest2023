#include <bits/stdc++.h>
using namespace std;
 
// Returns length of the longest
// contiguous subsequence
int findLongestConseqSubseq(int arr[], int n)
{
    int ans = 0, count = 0;
 
    // sort the array
    sort(arr, arr + n);
 
    vector<int> v;
    v.push_back(arr[0]);
 
    // insert repeated elements only once in the vector
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }
    // find the maximum length
    // by traversing the array
    for (int i = 0; i < v.size(); i++) {
 
        // Check if the current element is equal
        // to previous element +1
        if (i > 0 && v[i] == v[i - 1] + 1)
            count++;
        // reset the count
        else
            count = 1;
 
        // update the maximum
        ans = max(ans, count);
    }
    return ans;
}
 
// Driver code
int main()
{
    int arr[] = { 1, 2, 2, 3 };
    int n = sizeof arr / sizeof arr[0];
    cout << "Length of the Longest contiguous subsequence "
            "is "
         << findLongestConseqSubseq(arr, n);
    return 0;
}

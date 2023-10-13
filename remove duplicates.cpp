#include <bits/stdc++.h>
using namespace std;


string removeDuplicates(string s, int n)
{
    unordered_map<char, int> exists;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (exists.find(s[i]) == exists.end()) {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}
 
// driver code
int main()
{ 
   
    string s;
    cin>>s;
    int n = s.size();
    cout << removeDuplicates(s, n) << endl;
    return 0;
}
 
/*char *removeDuplicate(char str[], int n)
{
   // Used as index in the modified string
   int index = 0;  
    
   // Traverse through all characters
   for (int i=0; i<n; i++) {
        
     // Check if str[i] is present before it 
     int j; 
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}
 
// Driver code
int main()
{
   char str[]= "geeksforgeeks";
   int n = sizeof(str) / sizeof(str[0]);
   cout << removeDuplicate(str, n);
   return 0;
}*/




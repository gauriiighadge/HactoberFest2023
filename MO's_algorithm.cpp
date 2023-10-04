#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0 ;i < n ; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int m;
    cin >> m;
    vector<vector<int>>query;
    for(int i = 0 ; i < m ; i++){
        vector<int>a;
        for(int j = 0 ; j < 2 ; j ++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
     query.push_back(a);
    }

    for(int i = 0 ; i < m ; i++){
        int l = query[i][0];
        int r = query[i][1];

        int sum = 0;
        for(int j = l ; j <= r ; j++) sum += arr[j];
        cout << sum << endl;
    }
}
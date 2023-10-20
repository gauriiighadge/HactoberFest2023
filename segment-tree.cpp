#include<bits/stdc++.h>
#include<cstdio>
#define all(x) ((x).begin(),(x).end())
#define read(x) long long x; cin>>x
using namespace std;
typedef long long ll;

int getminutil(vector<int>&st,int l,int r,int sl,int sr,int si){
	if(sl<=l && sr>=r){
		return st[si];
	}
	if(r<sl || l>sr)return INT_MAX;
	int mid=getMid(l,r);
	return min(getminutil(st,l,mid,sl,sr,2*si+1),getminutil(st,mid+1,r,sl,sr,2*si+2));
}
int getmin(vector<int>&st,int n,int l,int r){
	if(l<0 || r>n-1 || l>r)return -1;
	return getminutil(st,0,n-1,l,r,0);
}
int cons(vector<int>&st,int si,vector<int>&arr, int l,int r){
	if(l==r){ // Leaf node
		st[si]=arr[l]; 
		return arr[l];
	}
	int mid=l+(r-l)/2;
	st[si]=min(cons(st,si*2+1,arr,l,mid),cons(st,si*2+2,arr,mid+1,r));
	return st[si];
}
vector<int> constructST(vector<int>&arr){
	int n=arr.size();
	int sz=(int)(ceil(log2(n)));
	sz= 2*(int)pow(2,sz)-1;
	vector<int>st(sz,0);
	cons(st,0,arr,0,arr.size()-1);// st-the vector to be cons,0 - root node-0th element, left, right
	return st;
}

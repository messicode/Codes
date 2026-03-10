#include<bits/stdc++.h>
using namespace std;


class Solution{

unordered_map<int,int> mp;
int rec(int n,int k)
{
	if(n<k) return mp[n]=INT_MAX;
	if(n==k) return 0;
	if(mp.find(n)!=mp.end()) return mp[n];
	int v1=rec((n/2),k),v2=rec(((n+1)/2),k);
	int v=min(v1,v2);
	if(v==INT_MAX) mp[n]=v;
	else mp[n]=1+v;
	return mp[n];
}


public:
	int C()
	{
		int n,k;
		cin>>n>>k;
		int ans=rec(n,k);
		if(ans>=INT_MAX) return -1;return ans;
	}
};



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {

    Solution sol;
    cout<<sol.C()<<endl;
    }
}
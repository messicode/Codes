#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	string S()
	{
		int n,x;
		unordered_map<int,int> mp;
		cin>>n;
		int v=n*(n-1);
		bool fl=true;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>x;
				mp[x]++;
				if(mp[x]>v) fl=false;
			}
		}
		if(fl)
		return "YES";
		return "NO"; 
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
    cout<<sol.S()<<endl;
    }
}
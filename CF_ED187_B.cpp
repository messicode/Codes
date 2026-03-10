#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	int C1()
	{
		ll n;cin>>n;
		vector<int> nm;
		ll i=0, sm=0,val;
		while(n>=10)
		{
			val=n%10LL;
			if(val){nm.push_back(val);cout<<val<<" ";}
			n/=10LL;
			sm+=val;
		}
		sm+=n;
		// nm.push_back(n-1);
		// cout<<sm<<" ";
		sort(nm.begin(),nm.end(),greater<int>());
		while(sm>9)
		{
			sm-=nm[i++];

		}
		return i;

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
    cout<<sol.C1()<<endl;
    }
}
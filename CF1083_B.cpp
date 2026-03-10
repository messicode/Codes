#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	int C1()
	{

		int n;cin>>n;
		int ans=1;
		while(n%2==0)
		{
			ans=2;n/=2;
		}
		for(int i=3;i*i<=n;i+=2)
		{
			int p=1;
			while(n%i==0)
			{
				p=i;n/=i;
			}
			ans*=p;
		}
		if(n>2)
			ans*=n;	

		return ans;
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
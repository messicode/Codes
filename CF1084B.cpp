#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	int B()
	{
		int n,v,prev=-1,f=0;cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            if(prev>v)f=1;
            prev=v;
        }
        if(f)return 1;
        return n;
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
    cout<<sol.B()<<endl;
    }
}
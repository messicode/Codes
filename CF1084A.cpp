#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	int A()
	{
		
        int mxv=0,cnt=0,n,v;cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>v;
            if(v>mxv)
            {
                mxv=v;cnt=1;
            }
            else if(v==mxv)cnt++;
        }

        return cnt;
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
    cout<<sol.A()<<endl;
    }
}
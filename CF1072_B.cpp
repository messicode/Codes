#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int B()
	{
		int s,k,m;
		cin>>s>>k>>m;
		int fl=m/k;
		if(s>=k)
		{
			int v=k;
			if(fl%2==0) v=s;
			return v-(m%k);
		} 
		else
			return max(0,s-(m%k));
		return 0;
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
#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	int A()
	{
		int n;cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}	
		int c=0;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]+v[i+1]==7 || v[i]==v[i+1])
				i++,c++;
		}
		return c;
		
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
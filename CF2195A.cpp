#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	string A()
	{
		int n;cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}	
		
		for(int i=0;i<n;i++)
		{
			if(v[i]==67)return "YES";
		}
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
    cout<<sol.A()<<endl;
    }
}
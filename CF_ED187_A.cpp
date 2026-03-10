#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	int C1()
	{
		int n,w,d;cin>>n>>w>>d;
		int tw=1+(d/w);
		return (n/tw)+(n%tw!=0);
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
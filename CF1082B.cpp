#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	string B()
	{
		int n;cin>>n;
		string a;cin>>a;
		if(n%2 && a[0]=='b')return "NO";

		int l=n%2;
		while(l+1<n)
		{
			if((a[l]==a[l+1]) && (a[l]!='?' && a[l+1]!='?'))return "NO";
			l+=2;
		}
		return "YES";
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
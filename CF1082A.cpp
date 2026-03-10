#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	string A()
	{
		int a, f,x, y;cin>>x>>y;
		if(y==0) f=x%3;
		else{
			f=(x- (abs(y)*(y<0?4:2)) );
			if( f<0)return "NO";
			f%=3;
			// cout<<tt<<" ";
		}
		// cout<<f<<" ";
		if( !f) return "YES";
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
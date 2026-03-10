#include<bits/stdc++.h>
using namespace std;



class Solution{

public:
	int A()
	{
		int n;
		cin>>n;
		if(n<4)return n;
		return n%2;
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
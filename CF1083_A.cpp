#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	void C1()
	{
		int n,v,pos=-1;cin>>n;
		vector<int> arr;
		for(int i=0;i<n;i++)
		{
			cin>>v;arr.push_back(v);
			if(v==n)pos=i;
		}
		swap(arr[0],arr[pos]);
		for(auto &i:arr)
			cout<<i<<" ";
		cout<<endl;
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
    sol.C1();
    }
}
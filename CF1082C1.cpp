#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	int C1()
	{
		int n;cin>>n;
		vector<int> a;
		int i=n,v;
		while(i--){cin>>v;a.push_back(v);}
		stack<int> st;
		for(int i=n-1;i>=0;i--)
		{
			while(!st.empty() && st.top()==(a[i]+1)) st.pop();
			st.push(a[i]);
		}
		return st.size();
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
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	string C1()
	{
		int n,m,v;cin>>n>>m;
		int mxv=n+m;
		vector<int> arr,brr;
		unordered_map<int,int> freq;
		for(int i=0;i<n;i++)
		{
			cin>>v;arr.push_back(v);
			freq[v]++;
		}

		for(int i=0;i<m;i++)
		{
			cin>>v;brr.push_back(v);
			mxv=max(mxv,v);
		}

		vector<int> div(mxv+1,0);
		for(int i=1;i<=mxv;i++)
		{
			int v=i,nn=i;
			// cout<<v<<"v ";
				if(freq[v]>0)
				while(v<=mxv)
				{
					// cout<<v<<" ";
					div[v]+=freq[i];
					v+=nn;
				}
				// cout<<endl;
		}
		int al=0,bb=0,cm=0;

		for(int i=0;i<m;i++)
		{
			if(div[brr[i]]==n)al++;
			else if(div[brr[i]]==0)bb++;
			else cm++;
		}

		// cout<<al<<" "<<bb<<" "<<cm<<"\n";
		al+=(cm&1);
		//al>b->al else b
		if(al>bb)return "Alice";
		else return "Bob";

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
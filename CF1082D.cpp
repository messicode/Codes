#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	void B()
	{
		int n,k;cin>>n>>k;
		if(k<n || k>2*n) {cout<<"NO\n";return;}
		vector<int> seq;
		for(int i=0;i<n;i++){
			seq.push_back(i+1);
			seq.push_back(i+1);
		}

		for(int i=0,t=k-n;t>0&&i<n;t++)
			{
				swap(seq[i],seq[i+2]);
				i+=4;
			}
			cout<<"YES\n";
		for(auto &i:seq)cout<<i<<" ";
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
    sol.B();
    }
}
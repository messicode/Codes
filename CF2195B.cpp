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
		
		// for(int i=0;i<n;i++)
		// {
		// 	if( (( n%2==1&& v[i]==i+1 )) || (v[i]>n/2 && ((2*(i+1))==v[i])) || (v[i]<n/2 && i+1==v[i]))
		// 		continue;
		// 	cout<<i<<" ";
		// 	return "NO";
		// }


		for(int i=n/4;i<n/2;i++)
		{	
			if(v[i]>v[2*i +1])
				swap(v[i],v[2*i+1]);
		}
		for(int i=0;i<n;i++){
			// cout<<v[i];
			if(v[i]!=i+1)return "NO";

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
    cout<<sol.A()<<endl;
    }
}
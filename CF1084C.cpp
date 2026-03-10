#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{

public:
	string C()
	{
		
        int n;cin>>n;
        string s;cin>>s;
        if(n&1)return "NO";
        int cnt=0;
        for(int l=1;l<n;l++)
        {
            // cout<<l<<"\n";
            for(int i=0;i<n-l;i++)
            {
                int j=i+l;
                if(s[i]=='*')cnt++;

                if(j<n&& s[i]==s[j] && s[i]!='*')
                {
                    if(s[i+1]==s[j-1] && (l==1 || s[i+1]=='*'))
                        {
                            s[i]='*';
                            s[j]='*';
                            // cout<<"m ";
                        }
                }

                // cout<<i<<" "<<s<<endl;
            }
            if(cnt==n)return "YES";
            else cnt=0;
        }
        for(auto &c:s)
            if(c!='*')return "NO";
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
    cout<<sol.C()<<endl;
    }
}
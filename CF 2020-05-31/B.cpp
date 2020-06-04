#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        cout<<s<<endl;
        if (s.size() < 3) cout<<0<<endl;
        else
        {
            int l=0,r=s.size()-1;
            while (s[l] != s[r] && l<=r)
            {
                l++;
                r--;
            }
            int o1=0,o2=0,z1=0,z2=0;
            int mid = (l+r)/2;
            cout<<l<<" "<<r<<endl;
            for (int i=l;i<mid;i++)
            {
                if (s[i]=='0') o1++;
                else z1++;
                cout<<s[i];
            }
            cout<<"\\";
            for (int i=mid;i<=r;i++)
            {
                if (s[i]=='0') o2++;
                else z2++;
                cout<<s[i];
            }
            cout<<endl;
            cout<<min(o1,z1)<<endl;
            cout<<min(o2,z2)<<endl;
            cout<<min(o1,z1)+min(o2,z2)<<endl;
        }
    }
    return 0;
}


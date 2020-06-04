#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n>>x;
        //int arr[1005];
        int odd = 0;
        for (int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if (a%2 == 1) odd++;
            //arr[i] = a;
        }
        int even = n-odd;
        int flag = 0;
        //cout<<odd<<" "<<even<<endl;
        for (int i=1; i<=odd; i+=2)
        {
            //cout<<i<<" ";
            if (x-i <= even && x-i >= 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}

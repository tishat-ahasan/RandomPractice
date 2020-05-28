#include<bits/stdc++.h>
using namespace std;
int n;

int main(){
    cin>>n;
    while(n--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        int per_p = n/k;
        if (m < per_p) {
            cout<<m<<endl;
        }
        else {
            int m2 = m - per_p;
            int x = ceil((float)m2/(float)(k-1));
            cout<<per_p-x<<endl;

        }
    }
    return 0;
}


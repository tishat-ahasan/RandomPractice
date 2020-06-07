#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    int tc;
    scanf("%d",&tc);
    for (int k=1;k<=tc;k++)
    {
        string x;
        cin>>x;
        int l = x.size();
        int flag = 1;
        for (int i=0;i<l;i++){
            if (x[i] != x[l-1]){
                flag = 0;
                break;
            }
            l--;
        }
        (flag==1) ? printf("Case %d: Yes\n",k) : printf("Case %d: No\n",k);



    }


    return 0;
}


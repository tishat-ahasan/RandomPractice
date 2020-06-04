#include<bits/stdc++.h>
using namespace std;
int arr[1025];
int visit[1025];

bool check(int t,int n){
    for (int i=0;i<n;i++)
    {
        if (visit[arr[i]^t] != 1) return false;
    }
    return true;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);

        for (int i=0;i<1025;i++){visit[i]=0;}

        for (int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            visit[arr[i]] = 1;
        }
        int flag = 0;
        for (int i=1;i<=1024;i++)
        {
            if (check(i,n))
            {
                printf("%d\n",i);
                flag=1;
                break;
            }
        }
        if (!flag)
            printf("-1\n");
    }
}

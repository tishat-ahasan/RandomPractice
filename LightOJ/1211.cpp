#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int tc;
    scanf("%d",&tc);
    for (int k=1;k<=tc;k++)
    {
        int n;
        scanf("%d",&n);
        int xmin=1005,ymin=1005,zmin=1005;
        int xmax=0,ymax=0,zmax=0;
        int x1,x2,y1,y2,z1,z2;
        for (int i=0;i<n;i++){
            scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
            xmin = min(xmin,x2);
            ymin = min(ymin,y2);
            zmin = min(zmin,z2);

            xmax = max(xmax,x1);
            ymax = max(ymax,y1);
            zmax = max(zmax,z1);
        }
        printf("\n\n%d %d %d %d %d %d\n\n",xmin,xmax,ymin,ymax,zmin,zmax);


    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        float h,c,t;
        scanf("%f %f %f",&h,&c,&t);
        float avg  = (h+c)/2;
        if (h==t) {cout<<1<<endl;}
        else if (avg >=  t){
         cout<<2<<endl;
        }
        else
        {
            float up = 1000000,down = 1;
            float cur,prev;
            int n=23;
            int mid;
            int mid_prev;
            while (n--){
                mid = (up+down)/2;
                //if (mid == mid_prev) break;
                if (mid%2 == 0) mid++;
                float tot = (mid/2+1)*h+(mid/2)*c;
                float av = tot/mid;
                if (av == t) break;
                else if (av < t) up = mid;
                else down = mid;
                mid_prev = mid;
                //cout<<" mid = "<<mid<<" down = "<<down<<" up = "<<up<<endl;
            }
            float tot = (mid/2+1)*h+(mid/2)*c;
            float av = tot/mid;
            int mid2 = mid-2;

            float tot2 = (mid2/2+1)*h+(mid2/2)*c;
            float av2 = tot2/mid2;

            if (fabs(t-av2) <= fabs(t-av)) cout<<mid2<<endl;
            else cout<<mid<<endl;
        }
    }


}

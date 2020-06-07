#include<bits/stdc++.h>
using namespace std;
double dp[1000005];

int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}

int findDigits(int n,int base)
{
    // factorial exists only for n>=0
    if (n < 0)
        return 0;

    // base case
    if (n <= 1)
        return 1;

    double digits = dp[n];
//    for (int i=2; i<=n; i++)
//        digits += log(i);
    digits = digits/log(base);

    return floor(digits) + 1;
}

int main()
{

    int tc;
    scanf("%d",&tc);
    double digits = 0;
    for (int i=1;i<=1000000;i++){
        digits += log(i);
        dp[i] = digits;
    }
    for (int i=1;i<=tc;i++){
        int x,base;
        scanf("%d %d",&x,&base);
        printf("Case %d: %d\n",i,findDigits(x,base));

    }

}

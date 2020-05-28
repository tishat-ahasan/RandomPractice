#include<bits/stdc++.h>
using namespace std;
int main()
{
    float tot = 0;
    float h = 25;
    float c = 15;

    for (int i=1;i<10 ;i++)
    {
        if (i%2 == 1) tot+=h;
        else tot+=c;
        cout<<i<<"  = "<<tot/i<<endl;

    }


}

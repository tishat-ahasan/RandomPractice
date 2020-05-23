#include<bits/stdc++.h>
using namespace std;

void print_poly(int i,int n){
    if (i==n)
    {
        cout<<"x^"<<i<<endl;
        return;
    }
    if (i==0)
    {
        cout<<1<<" + ";
    }
    else{
        cout<<"x^"<<i<<" + ";
    }
    print_poly(i+1,n);
    return;
}

int main()
{
    int x,n;
    cin>>n;
    print_poly(0,n);
}


#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if (n == 0)
        return 0;
    int y = 2*f(n-1);
    return y+1;
}

int main(){

    cout<<"hello"<<endl;
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;

}

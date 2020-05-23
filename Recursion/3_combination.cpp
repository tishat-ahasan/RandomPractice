#include<bits/stdc++.h>
using namespace std;

int comb(int n,int k){
    if (k==0 | n == k)
        return 1;
    return comb(n-1,k-1)+comb(n-1,k);
}

int main(){

    cout<<"hello"<<endl;
    int n,k;
    cin>>n>>k;
    cout<<comb(n,k)<<endl;
    return 0;

}

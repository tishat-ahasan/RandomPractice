#include<bits/stdc++.h>
using namespace std;

void print_star(int n){
    if (n==0) {
        cout<<endl;
        return;
    }
    cout<<"*";
    print_star(n-1);
    return;
}

void print_space(int n){
    if (n==0) return;
    cout<<" ";
    print_space(n-1);
}

void pyramid(int n,int limit){
    if (n==0) return;
    pyramid(n-1,limit);
    print_space(limit-n);
    print_star(2*n-1);
    return;
}

int main(){
    int n;
    cin>>n;
    pyramid(n,n);
    return 0;
}


//  *
// ***
//*****

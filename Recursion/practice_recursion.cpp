#include<bits/stdc++.h>
using namespace std;
int arr[100];

void print_arr(int i,int n){

    if (i==n) {
        cout<<endl;
        return;
    }
    print_arr(i+1,n);
    cout<<arr[i]<<" ";
    return;
}
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    print_arr(0,n);
    return 0;
}

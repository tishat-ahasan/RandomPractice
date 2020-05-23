#include<bits/stdc++.h>
using namespace std;

int arr[1000];
bool bi_search(int l,int r,int key){
    if (l >= r) return false;
    int mid = (l+r)/2;
    if (key==arr[mid]) return true;
    else if (key>arr[mid]) return bi_search(mid+1,r,key);
    else return bi_search(l,mid-1,key);
}

int sum(int l,int r,int total){
    if (l==r) return arr[l];
    return arr[l]+sum(l+1,r,total);
}

int main(){

    cout<<"enter array size"<<endl;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    sort(arr,arr+n);
//    for (int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
////    cout<<endl;
//    cout<<"Enter number to search";
//    int x;
//    cin>>x;
//    if (bi_search(0,n-1,x)) cout<<"yes"<<endl;
//    else cout<<"no"<<endl;
    cout<<sum(0,n-1,0)<<endl;
    return 0;


}

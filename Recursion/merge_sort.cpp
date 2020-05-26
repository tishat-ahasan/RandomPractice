#include<bits/stdc++.h>
using namespace std;
int arr[1000];

void merge_both(int l,int r){
    int mid = (l+r)/2;
    int x1 = l;
    int x2 = mid+1;
    int temp[1000];
    int t=0;
    while(x1 <= mid && x2 <= r){
        if (arr[x1] <= arr[x2]){
            temp[t++] = arr[x1++];
        }
        else{
            temp[t++] = arr[x2++];
        }
    }

    while(x1 <= mid){
        temp[t++] = arr[x1++];
    }
    while( x2 <= r){
        temp[t++] = arr[x2++];
    }

    for (int i=0;i<t;i++){
        arr[l+i] = temp[i];
    }
    return;
}

void merge_sort(int l,int r){
    if (l>=r) return;
    int mid = (l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    merge_both(l,r);
}
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    merge_sort(0,n-1);
     for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }

}

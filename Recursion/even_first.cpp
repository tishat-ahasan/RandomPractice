#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    if (a%2 == 0) return true;
    return false;
}

int main(){
    vector<int> vec;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end(),comp);
    for (int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }

}

#include<bits/stdc++.h>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(){

    list <int> L1;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if (i%2) L1.push_back(x);
        else L1.push_front(x);
    }

    showlist(L1);


}

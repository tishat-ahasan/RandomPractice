#include<bits/stdc++.h>
using namespace std;
int n;
int arr[10005];

int main(){
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        string grid[n];
        for (int i=0;i<n;i++){
            cin>>grid[i];
        }
        if (2*x<=y){
            int tot=0;
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<m;j++)
                {
                    if (grid[i][j] == '.') tot += x;
                }
            }
            cout<<tot<<endl;
        }

        else if (2*x>y){
            int tot=0;
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<m;j++)
                {
                    if (grid[i][j] == '.') {
                      if (j+1 < m && grid[i][j+1] == '.')
                      {
                        tot += y;
                        j = j+1;
                      }
                      else {
                        tot += x;
                      }

                    }
                }
            }
            cout<<tot<<endl;
        }


    }
    return 0;
}


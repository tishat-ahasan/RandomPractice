#include<bits/stdc++.h>
using namespace std;
int dx[4]= {1,0,-1,0};
int dy[4]= {0,1,0,-1};

int solve()
{
    int col,row;
    cin>>col>>row;
    vector<string> st;
    for (int i=0; i<row; i++)
    {
        string x;
        cin>>x;
        st.push_back(x);
    }

    pair <int,int> start;
    //int visit[row][col]= {0};
    int ans = 0;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            if (st[i][j] == '@')
            {
                start = make_pair(i,j);
                st[i][j] = '#';
                ans++;
                break;
            }
        }
    }
    queue<pair<int,int>> Q;
    Q.push(start);
    //printf("%d %d",start.first,start.second);
    while(!Q.empty())
    {
        //printf("ase\n");
        pair <int,int> u = Q.front();
        Q.pop();
        for (int i=0; i<4; i++)
        {
            //cout<<"i = "<<i<<endl;
            int x = u.first+dx[i];
            int y = u.second+dy[i];
            if (x < row && y < col && x>=0 && y>=0)
            {
                //cout<<1<<endl;
                if (st[x][y] == '.')
                {
                    //cout<<2<<endl;
                    Q.push(make_pair(x,y));
                    st[x][y] = '#';
                    //cout<<x+1<<","<<y+1<<endl;
                    ans++;
                }
            }
        }
    }

    return ans;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int tc;
    cin>>tc;
    for (int i=1; i<=tc; i++)
    {
        int ans = solve();
        printf("Case %d: %d\n",i,ans);

    }


}

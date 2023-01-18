#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf 1e18
#define endl "\n"
#define sorted(x) sort(x.begin(),x.end())
#define sortedr(x) sort(x.rbegin(),x.rend())
#define sum(x) accumulate(x.begin(),x.end(),0LL)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define maxe(x) *max_element(x.begin(),x.end())
#define mine(x) *min_element(x.begin(),x.end())
#define maxi(x) max_element(x.begin(),x.end())-x.begin()
#define mini(x) min_element(x.begin(),x.end())-x.begin()
#define mod 1000000007
#define print(x) for(auto i:x)cerr<<i<<" ";cerr<<endl;
 
#define pb emplace_back
#define pr make_pair
#define ff first
#define ss second
class Graph
{
public:
    vector<vector<int>> adj;
    // vector<vector<pair<int,int>>> adj;
    vector<bool> visited;
    vector<int> ans,ans1;
    vector<int> color;
    int n;
    Graph(int n)
    {
        this->n=n;
        adj.resize(n,vector<int>());
        visited.resize(n,false);
        color.resize(n,0);
        // GraphVis g(10,n,adj);
    }
    void addEdge(int u,int v)
    {
        adj[u].pb(v);
        adj[v].pb(u);
    }
    void bfs(int u)
    {
        /// print adj

        queue<pair<int,int>> q;
        q.push(pr(u,1));
        visited[u]=true;
        color[u]=1;
        while(!q.empty())
        {
            auto node=q.front();
            q.pop();
            for(auto i:adj[node.ff])
            {
                if(!visited[i])
                {
                    visited[i]=true;
                    color[i]=-node.ss;
                    // g.color_node(i,-node.ss);
                    // g.update()
                    q.push(pr(i,-node.ss));
                }
                else
                {
                    if(color[i]==node.ss)
                    {
                        cout<<"-1"<<endl;
                        exit(0);
                    }
                }
            }
        }
 
    }
    void bfs_helper()
    {
// c
        // g.createWindow();
        for (size_t i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                bfs(i);
            }
        }
        // g.destroyWindow();
        for(int i=0;i<n;i++)
        {
            // cout<<color[i];
            if(color[i]==1)
            {
                ans.pb(i+1);
            }
            if(color[i]==-1)
            {
                ans1.pb(i+1);
            }
        }
        
    }
    void print_ans()
    {
        cout<<ans1.size()<<endl;
        for(auto i:ans1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<ans.size()<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
void solve()
{
    int n,m=0;
    cin>>n>>m;
    Graph g(n);
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        g.addEdge(u-1,v-1);
    }
    g.bfs_helper();
    g.print_ans();
 
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
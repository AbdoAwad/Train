#include <bits/stdc++.h>
using namespace std;

int n, m;
int dis[20005];

int main()
{
    cin >> n >> m;
    memset(dis, 0x3f , sizeof dis);
    dis[n] = 0;
    queue <int> q;
    q.push(n);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        if (cur <= 10000 && dis[cur] + 1 < dis [cur * 2] )
        {
            dis[cur * 2] = dis[cur] + 1;
            q.push(cur * 2);
        }
        if (cur - 1 > 0 && dis[cur] + 1 < dis [cur - 1])
        {
            dis[cur - 1] = dis[cur] + 1;
            q.push(cur - 1);
        }
        
    }
    cout << dis[m] << endl;
}
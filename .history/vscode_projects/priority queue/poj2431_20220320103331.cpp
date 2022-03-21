#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
#define N 10005
int n, L, P;
struct node
{
    int dis, add;
} port[N];

bool cmp(node a, node b)
{
    return a.dis > b.dis;
}

void solve()
{
    priority_queue<int> que;
    int ans = 0, pos = P, k = 0;
    while (pos < L)
    {
        while (pos >= L - port[k].dis && k < n)
        {
            que.push(port[k].add);
            k++;
        }
        if (que.empty())
        {
            printf("-1\n");
            return;
        }
        else
        {
            pos += que.top();
            que.pop();
            ans++;
        }
    }
    printf("%d\n", ans);
}

int main()
{
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
            scanf("%d %d", &port[i].dis, &port[i].add);
        scanf("%d%d", &L, &P);
        sort(port, port + n, cmp);
        solve();
    }
    return 0;
}

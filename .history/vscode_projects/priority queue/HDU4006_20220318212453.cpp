#include <iostream>
#include <cstdio>
#include <functional> //提供比较函数greater<int>
#include <queue>
using namespace std;

int main()
{
    int i, n, k, num;
    char c;
    priority_queue<int, vector<int>, greater<int>> q; //小顶堆
    while (~scanf("%d%d", &n, &k))
    {
        while (q.size()) //初始化队列为空
        {
            q.pop();
        }
        for (i = 1; i <= n; i++)
        {
            cin >> c;
            if (c == 'I')
            {
                scanf("%d", &num);
                if (q.size() < k) //堆中元素个数小于k
                    q.push(num);
                else if (q.top() < num)   //当堆顶小于输入元素时
                    q.pop(), q.push(num); //堆顶出队，元素入队
            }                             //堆中永远保存最大的k个元素
            else
                printf("%d\n", q.top()); //堆顶即为第k大元素 
        }
    }
    return 0;
}

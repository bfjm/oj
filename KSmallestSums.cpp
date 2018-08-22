//有k个整数数组，各包含k个元素，每个数组取一个元素加起来，可以得到k^k个和，求这些和中的最小的k值
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Item
{
    /* data */
    int s,b;
    Item(int s, int b):s(s),b(b) {};
    bool operator < (const Item& rhs) const {
        return s > rhs.s;
    }
};

void merge(int* A, int* B, int* C,int n)
{
    priority_queue<Item> q;
    for(int i=0;i<n;i++)
        q.push(Item(A[i]+B[0],0));

    for(int i=0;i<n;i++)
    {
        Item item = q.top();
        q.pop();
        C[i] = item.s;
        int b = item.b;
        if(b+1<n) q.push(Item(item.s-B[b]+B[b+1],b+1));
    }
}
const int maxn = 768;
int A[maxn][maxn];

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&A[i][j]);
            sort(A[i],A[i]+n);
        }
        for(int i=1;i<n;i++)
        merge(A[0],A[i],A[0],n);

        printf("%d",A[0][0]);
        for(int i=1;i<n;i++)
            printf(" %d",A[0][i]);
        printf("\n");
    }
    return 0;
}

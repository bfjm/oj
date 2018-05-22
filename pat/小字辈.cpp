#include<bits/stdc++.h>

using namespace std;
vector<int> num[100005];
vector<int> tem[100005];
/*
9
2 6 5 5 -1 5 6 4 7
*/
int main()
{

    int m,n;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int t;
        scanf("%d",&t);
        if(t!=-1)
            num[t].push_back(i);
        else
            m = i;
    }
    int len=0;
    queue<int>u;
    u.push(m);
    tem[len].push_back(m);
    while(!u.empty())
    {
        int a,s=u.size();
        len++;
        for(int i=0;i<s;i++)
        {
            a=u.front();
            u.pop();
            for(int j=0;j<num[a].size();j++)
            {
                u.push(num[a][j]);
                tem[len].push_back(num[a][j]);
            }
        }
    }
    printf("%d\n",len);
    for(int i=0;i<tem[len-1].size();i++){
        if(i) printf(" ");
        printf("%d",tem[len-1][i]);
    }
    printf("\n");
    return 0;
}

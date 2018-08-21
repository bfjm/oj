//给出一个包含n个整数的数组，你需要回答若干询问，每次询问两个k和v，输出从左到右第k个v的下标
#include <iostream>
#include <vector>
#include <map>

using namespace std;
map<int,vector<int> >a;
int main()
{
		int n,m,x,y;
		while(scanf("%d%d",&n,&m)==2)
		{
				a.clear();
				for(int i=0;i<n;i++)
				{
						scanf("%d",&x);
						if(!a.count(x))
							a[x] = vector<int> ();
						a[x].push_back(i+1);
				}
				while(m--)
				{
						scanf("%d%d",&x,&y);
						if(!a.count(y) || a[y].size() < x)
								printf("0\n");
						else 
								printf("%d\n",a[y][x-1]);
				}
		}
	return 0;
}


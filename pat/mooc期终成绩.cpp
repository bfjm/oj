#include<iostream>

using namespace std;
int num[]={2, 6, 5 ,5 ,-1, 5 ,6, 4, 7};
int f(int x)
{
    if(x==-1)
        return 0;
    x = num[x];
    return 1+f(x);
}

int main()
{   a = num[1];
    cout << f(a)<<endl;
    return 0;
}

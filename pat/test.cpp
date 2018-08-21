#include <iostream>
#include <vector>
using namespace std;
int n,num[100001]={0},t,s=0;
int ma=0;
vector<int> v,m;
int f(int x)
{
    if(x==-1)
        return 0;
    x = num[x];
    return 1+f(x);
}

int main()
{
//    int n,num[100001],t;
    cin >> n;
    int i=0,j=0;
    for( i=1;i<=n;i++)
    {
        cin >> num[i];
    /*    if(num[i]==-1)
        {
            t = i;
        }
    */
        if(num[i]!=-1)
            v.push_back(num[i]);

    }
  //  cout <<"**"<<endl;
          int temp;
    for( i=1;i<=v.size();i++)
    {

        temp = v[i];
        t = f(temp);
        if(t>ma)
        {
            m.clear();
            m.push_back(temp);
            ma = t;
        }
        else if(t==ma)
        {
            m.push_back(temp);
        }
    }
  //  cout <<"***"<<endl;while(1);
    cout << ma<<endl;
    s = m.size();
    for( j=0;j<s-1;j++)
    {
        cout << m[j]<<" ";
    }
    j++;
    cout << m[j]<<endl;


    return 0;
}

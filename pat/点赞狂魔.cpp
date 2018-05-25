 #include <iostream>
 #include <set>
 #include <vector>
 #include <string>
 #include <algorithm>
 using namespace std;

 struct node
 {
 	string name;
 	int num,temp;
 };

 bool cmp(node a,node b)
 {
     if(a.num!=b.num)
        return a.num > b.num;
    return a.temp<b.temp;
 }

 int main()
 {
 	int n,k;
    string m;
    set<string> s;
	node stu[1001];
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> stu[i].name;
		cin >> k;

		s.clear();
		for(int j=0;j<k;j++)
		{
			cin >> m;
			s.insert(m);
		}
		stu[i].num = s.size();
		stu[i].temp=k;
	}
	sort(stu,stu+n,cmp);
	int q=0;
	for(int i=0;i<min(n,3);i++)
    {
        if(q++) cout << " ";
         cout << stu[i].name;
    }
    if(n<3)
        for(int j=n;j<3;j++)
        {
            if(q++) cout << " ";
            cout << "-";
        }
    cout << endl;


        return 0;

 }


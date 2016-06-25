#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int>mp;
	int n,i,max;
	while(cin>>n&&n!=0)
	{
		max=0;
		mp.clear();
		string color,res;
		for(i=1;i<=n;i++)
		{
			cin>>color;
			mp[color]++;
			if(max<mp[color])
			max=mp[color],res=color;
		}
		cout<<res<<endl;
	} 
}

#include<iostream>
#include<iomanip>
using namespace std;
int b=2;


int main()
{
	int a[10]={6,7,2,9,1,10,5,8,4,3},*p=a,i;
	for(i=0;i<10;i++,p++)
	{
		if(*p>a[0])
		{
			*a=*p;
			
			
		}
		cout<<"p[i]="<<p[i]<<" "<<"i="<<i<<endl;
	
	}
	cout<<*a<<endl;
	return 0;
}

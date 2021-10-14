#include<iostream>
using namespace std;
int main()
{
	int a[10],n,x,i,flag=0;
	cout<<"How mach element?\n";
	cin>>n;
	cout<<"Enter elements of the array:\n";
	for(i=0;i<n;++i)
		cin>>a[i];
	cout<<"enter element to search\n";
	cin>>x;
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{flag=1;
			break;}    
	}
	if(flag)
		cout<<"Element fount in position "<<i+1<<"\n";
	else
		cout<<"element not found\n";
	return 0;

}

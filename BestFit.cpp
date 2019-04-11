#include<iostream>
using namespace std;
int main()
{
	int n,pron,i;
	cout<<"Enter the no of memory spaces available:";
	cin>>n;
	int mem[n+1];
	cout<<"\nEnter the size of different memory spaces so available.\n";
	for(i=1;i<=n;i++)
	{
		cout<<"Memory Space "<<i<<" :";
		cin>>mem[i];
	}
	cout<<"Enter the number of processes to allocate memory space to:";
	cin>>pron;
	int pro[pron];
	cout<<"Enter the size of each process.\n";
	for(i=0;i<pron;i++)
	{
		cout<<"Process "<<i+1<<" :";
		cin>>pro[i];
	}
	int t=0;
	mem[0]=99999;
	bool flag;
	int temp=0;
	cout<<"\n";
	while(t!=pron)
	{
	temp=0;
	flag=false;
	for(i=1;i<=n;i++)
	{
		if(pro[t]<=mem[i]&&mem[i]<=mem[temp])
		{
			flag=true;
			temp=i;
		}
	}
	if(!flag)
	{
	   cout<<"\nThere is no memory space available for "<<t+1<<" process.";
	   t++;
    }
    else
    {
    	cout<<"\nThe memory space is available for "<<t+1<<" process and the memory block is "<<temp;
		mem[temp]-=pro[t];
    	pro[t]=0;
    	t++;
	}
   }
	return 0;
}

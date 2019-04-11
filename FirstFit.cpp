#include<iostream>
using namespace std;
int main()
{
	int n,pron,i;
	cout<<"Enter the no of memory spaces available:";
	cin>>n;
	int mem[n];
	cout<<"\nEnter the size of different memory spaces so available.\n";
	for(i=0;i<n;i++)
	{
		cout<<"Memory Space "<<i+1<<" :";
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
	bool flag;
	cout<<"\n";
	while(t!=pron)
	{
	flag=false;
	for(i=0;i<n;i++)
	{
		if(pro[t]<=mem[i])
		{
			flag=true;
			mem[i]-=pro[t];
			pro[t]=0;
			cout<<"\nThe memory space is available for "<<t+1<<" process and the memory block is "<<i+1;
			t++;
		}
	}
	if(!flag)
	{
	   cout<<"\nThere is no memory space available for "<<t+1<<" process.";
	   t++;
    }
   }
	return 0;
}

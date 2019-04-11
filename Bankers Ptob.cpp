#include<iostream>
using namespace std;
int main()
{
	int p,n,i,j,done=0;
	cout<<"Enter the number of processes:";
	cin>>p;
	cout<<"Enter the maximum no of resources:";
	cin>>n;
	bool flag[p];
	int cur[p][n],max[p][n],need[p][n],res[n],check[p];
	cout<<"Enter the respective currently allocated resources for each process:\n";
	for(i=0;i<p;i++)
	{
		cout<<"Process "<<i+1<<":\n";
		for(j=0;j<n;j++)
		{
			cin>>cur[i][j];
		}
		check[i]=0;
		flag[i]=true;
	}
	cout<<"Enter the respective requirement of resources for each process:\n";
	for(i=0;i<p;i++)
	{
		cout<<"Process "<<i+1<<":\n";
		for(j=0;j<n;j++)
		{
			cin>>max[i][j];
			need[i][j]=max[i][j]-cur[i][j];
		}
	}
	cout<<"Enter the total no. of resources available right now:\n";
	for(i=0;i<n;i++)
	{
		cin>>res[i];
    }
    int count=0,check1=0;
    while(true)
	{	
		check1=0;
		for(i=0;i<p;i++)
	    {
		  count=0;
		  if(check[i]==0)
		  {
		   for(j=0;j<n;j++)
		   {
           	 if(need[i][j]<=res[j])
             {
				count++;
			 }
	       }
	       if(count==n)
	       {
	        for(j=0;j<n;j++)
		    {
            	res[j]+=cur[i][j];
            	need[i][j]=0;
            }
	        check[i]=1;
	        done++;
	       }
	       else  flag[i]=false;
	      }
        }
        for(i=0;i<p;i++)
        {
        	if(flag[i]==false)
        	   check1++;
		}
        if(done==p)break;
        if(check1==p)break;
   }
   cout<<"\nThe need matrix now is:\n";
   for(i=0;i<p;i++)
	{
		cout<<"\nProcess "<<i+1<<":\n";
		for(j=0;j<n;j++)
		{
			cout<<need[i][j]<<" ";
		}
	}
   if(done==p)cout<<"\nThe system is in safe state.";
   else cout<<"\nThe system is in unsafe state.";
}

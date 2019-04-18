#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,size;
	cout<<"Enter the size of blocks maximum allowed:";
	cin>>size;
	int a[size];
	fill(a,a+size,-1);
	cout<<"Enter the number of elements in the string:";
	cin>>n;
	int temp;
	bool flag;
	int i=0,count=0,hitfault[2]={0,0};
	while(true)
	{
	   if(count==n)break;
	   cout<<"\nEnter the page no to be accessed:";
	   cin>>temp;
	   count++;
	   flag=false;
	   for(int j=0;j<size;j++)
	   {
	   	  if(a[j]==temp)
	   	  {
	   	  	i--;
		    flag=true;
		    hitfault[0]++;
	   	  	break;
		  }
	   }
	   if(!flag)
	   {
		  	  a[i%size]=temp;
		  	  hitfault[1]++;
	   }
	   cout<<endl;
	   cout<<"The queue now is:\n";
	   for(int k=0;k<size;k++)
	   {
			cout<<a[k]<<"\t";
	   }
	   i++;
	}
	cout<<"\nThe number of hits are:"<<hitfault[0];
	cout<<"\nThe number of faults are:"<<hitfault[1];
	return 0;
}

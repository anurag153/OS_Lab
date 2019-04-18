#include<iostream>
using namespace std;
int main()
{
	int n,cur;
	cout<<"Enter the point where the disk is lying right now:";
	cin>>cur;
	cout<<"Enter the number of data present in the list:";
	cin>>n;
	int distance=0,temp;
	cout<<"Enter the elements of list:\n";
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<":";
		cin>>temp;
		cout<<endl;
		if(temp>cur)
		  distance+=temp-cur;
		else
		  distance+=cur-temp;  
		cur=temp;  
	}
	cout<<"\nThe distance travelled by the disk is: "<<distance;
	return 0;
}

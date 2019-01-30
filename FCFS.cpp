
//FIRST COME FIRST SERVE AT-BT PROGRAM
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of processes:";
	cin>>n;
	float AT[n],BT[n],CT[n],TAT[n],WT[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter Arrival time of process "<<i+1<<":";
		cin>>AT[i];
		cout<<"Enter Burst time of process "<<i+1<<":";
		cin>>BT[i];
	}
	float s=0;
	for(i=0;i<n;i++)
	{
		if(AT[i]<=s)//If the arrival time is smaller than previous process completion time
		{
		  s+=BT[i];
	    }
	    else
	    {
	    	s=AT[i]+BT[i];
		}
		CT[i]=s; //Completion time is given its value
		TAT[i]=CT[i]-AT[i];//Turn Around Time is calculated
		WT[i]=TAT[i]-BT[i];//Waiting Time is calculated
		cout<<"\nProcess "<<i+1;
		cout<<"\nCompletion time:   "<<CT[i];
		cout<<"\nTurn Around time:  "<<TAT[i];
		cout<<"\nWaiting time:      "<<WT[i]<<"\n";
	}
}


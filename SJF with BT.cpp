// Shortest Job First if the arrival time of each proscess is 0.0
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of processes:";
	cin>>n;
	float BT[n],CT[n],TAT[n],WT[n],avWT=0,avTAT=0,avCT=0;
	cout<<"Enter the details of "<<n<<" processes.\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter Burst time of process:";
		cin>>BT[i];
	}
    sort(BT,BT+n);
	float s=0;
	for(i=0;i<n;i++)
	{
		s+=BT[i];
		CT[i]=s; //Completion time is given its value
		TAT[i]=CT[i];//Turn Around Time is calculated
		WT[i]=TAT[i]-BT[i];//Waiting Time is calculated
		avTAT+=TAT[i];
		avWT+=WT[i];
		avCT+=CT[i];
		cout<<"\nProcess "<<i+1;
		cout<<"\nCompletion time:   "<<CT[i];
		cout<<"\nTurn Around time:  "<<TAT[i];
		cout<<"\nWaiting time:      "<<WT[i]<<"\n";
	}
        cout<<"\nAverages:";
        cout<<"\nCompletion time:   "<<avCT/n;
		cout<<"\nTurn Around time:  "<<avTAT/n;
		cout<<"\nWaiting time:      "<<avWT/n;
	
}

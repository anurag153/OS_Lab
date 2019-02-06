#include<iostream>
using namespace std;
int S,E,F,a[5],n=0;
void wait(int &s)
{
    --s;
}
void signal(int &s)
{
    ++s;
}
void produce()
{
	cout<<"Entering Production..\n";
	wait(E);
	wait(S);
	cout<<"E:"<<E<<"\nS:"<<S<<"\nF:"<<F;
	int take;
	cout<<"\nEnter the value to be entered:";
	cin>>take;
	a[n]=take;
	n++;
	signal(S);
	signal(F);	
	cout<<"\nExiting Production....\nE:"<<E<<"\nS:"<<S<<"\nF:"<<F;
}
void consume()
{
	cout<<"Entering Consumption..\n";
	wait(F);
	wait(S);
	cout<<"E:"<<E<<"\nS:"<<S<<"\nF:"<<F;
	n--;
	cout<<"\nThe value has been removed...\n";
	signal(S);
	signal(E);
	cout<<"Exiting Consumption...\nE:"<<E<<"\nS:"<<S<<"\nF:"<<F<<"\n";
	
}
void traverse()
{
	cout<<endl;
	for(int i=0;i<n;i++)
	  cout<<a[i]<<" ";
	cout<<endl;  
}
int main()
{
	S=1,E=5,F=0;
	int ch;
	while(1)
	{
		cout<<"\n1.Produce\n2.Consume\n3.Exit\nEnter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:if(S==1&&E!=0)produce();
			       else cout<<"\nBuffer is full\n";
			       break;
			case 2:if(S==1&&F!=0)consume();
			       else cout<<"\nBuffer is empty\n";       
			       break;
			default:exit(0);       
		}
		if(n==0)
		{
			E=5;
			F=0;
		}
		else
		{  
		   traverse();
	    }
	    cout<<"After Passing:";
	    cout<<"\nE:"<<E<<"\nS:"<<S<<"\nF:"<<F;
	}
}

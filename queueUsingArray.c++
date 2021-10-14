#include<iostream>
using namespace std;
int queue[8],qLeng = 8, qFront = -1, qRear = -1;

void enQueue()
{
	int item;
	if (qRear<qLeng -1)
	{
		cout<<"Enter element to Enqueue : " ;
		cin>>item;
		if (qFront<0)
			qFront = 0;

		cout<<"\n----------------\n";
		qRear++;
		queue[qRear] = item;
		cout<<"Enqueued element : "<<item<<endl;
		cout<<"----------------\n";



	}
	else{
		cout<<"\n----------------\n";
		cout<<"\nQueue Overflow!!! ";
		cout<<"\n----------------\n";
	}
}


void deQueue()
{
	if (qFront>=0 || qRear>qFront)
	{
		cout<<"\n----------------\n";
		cout<<"Dequeued Element is "<<queue[qFront];
		qFront++;
		cout<<"\n----------------\n";

	}
	else{
		cout<<"\n----------------\n";
	cout<<"\nQueue Underflow !!!";
	cout<<"\n----------------\n";
	}
}

void qDisplay()
{
	if(qFront>=0 && qRear>=qFront)
	{		cout<<"\n\nDisplaying queue\n\n";
		cout<<"\n----------------\n";

		for (int i = qFront; i <= qRear; i++)
		{
			cout<<queue[i];
		}
		cout<<endl;
	}
	else
	{
		cout<<"\n----------------\n";
		cout<<"Queue is Empty";
		cout<<"\n----------------\n";

	}

	cout<<"----------------\n";

}

int main()
{
	int userOption;
	do{
		cout<<"Queue Operations:\n";
		cout<<"1.EnQueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Queue Display\n";
		cout<<"4.Exit\n";
		cout<<"Enter Your Option\n";
		cin>>userOption;
		if(userOption==1)
			enQueue();
		else if (userOption==2)
			deQueue();
		else if (userOption==3)
			qDisplay();
		else
			cout<<"Invalid Input. Try Again :) ";		
	}
	while (userOption!=4);
}

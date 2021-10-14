// STACK=> FIRST IN LAST OUT

#include<iostream>
using namespace std;
int stack[9],length=9,top=-1;


// PUSH OPERATION
void push(int item)
{
    if (top<length - 1)
        {
            top++;
            stack[top] = item;
            cout<<"top : "<<top<<", Stack Length : "<<length<<endl;
        }
        else{
            cout<<"Stack overflow";
            cout<<" top : "<<top<<", Stack Length : "<<length<<endl;
        }

}
// POP OPERATION
void pop()
{
    if(top>=0)
    {
            cout<<"Element popped : "<<stack[top]<<endl;
            top --;
    }
    else{
        cout<<"Stack underflow!!!"<<endl;
    }
}
// FOR DISPLAY
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are :";
        for(int i=0;i<=top;i++)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Stack is empty.."<<endl;
    }
}
// MAIN CODE
int main()
{
    int userOption,userInput;
    // LOOOP FOR PUSH,POP

    do
    {
       cout<<"\n\nEnter Option :"<<endl;
       cout<<"1. Push Operation"<<endl;
       cout<<"2. POP Operation"<<endl;
       cout<<"3. Display Stack"<<endl;
       cout<<"4. Exit"<<endl;
       cin>>userOption;
       cout<<"\n\nUser option : "<<userOption<<"\n\n";
       if(userOption==1)
       {
           cout<<"Element to PUSH :";
           cin>>userInput;
           push(userInput);
       }

       else if(userOption==2)
       
           pop();
       
       else if(userOption==3)
       
           display();
       
       else if (userOption==4)
       
           cout<<"EXIT";
       
       else
       cout<<"INVALID OPTION";
    } while (userOption!=4);
    
}
#include<iostream>
using namespace std;
int main()
{
    int  LIST[25],max;
    int First,Last,Middle,i,item,LOC=1;
    cout<<"How many elements\n";
    cin>>max;
    cout<<"Enter binary elements in assenting order\n";
    for(i=0;i<max;i++)
    {
        cin>>LIST[i];
    }
    cout<<"enter the item to be searched\n";
    cin>>item;
    First=0;
    Last=max-1;
    while (First<=Last)
    {
Middle=First+Last/2; 
if(item=LIST[Middle])
{
    LOC=Middle;
    break;
}
if(item<LIST[Middle])
{
    Last=Middle-1;
}
else{

    First=Middle+1;
}

   }
   if (LOC!=-1)
   {
       cout<<"The item is fount in position "<<LOC+1<<"\n";
   }
   else{
       cout<<"The item is not fount in this array";
   }
   return 0;
   

    
}
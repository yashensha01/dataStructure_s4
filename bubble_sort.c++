#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,pass=0,lim,arr[50];
    // int a[10]={10,2,33,6,9,4,34,7,32,27};
    cout<<"Enter How many number to sort: ";
    cin>>lim;
    cout<<"Enter "<<lim<<" Numbers: \n";
    for (i = 0; i < lim; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"input list..\n";
    for ( i = 0; i < (lim-1); i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for ( i = 0; i < (lim-1); i++)
    {
        
        for ( j = 0; j < (lim-1); j++)
        {
            // 10
            if (arr[i]<arr[j])
            {
                // a2 2 < a1 10 true
                temp=arr[i];
                // temp<=a1
                arr[i]=arr[j];
                // a1 10 <= a2 2
                arr[j]=temp; 
                // a2<=temp 10
            }
            
        }
 pass++;       
    }


    cout<<"Sorted elements list...\n";
    for ( i = 0; i < lim; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n number of passes take to sort the list:"<<pass<<endl;
    return 0;
    
}
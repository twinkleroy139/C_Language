// SELECTION SORT

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter your total selection digit: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i]);
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    cout<<"New Selection list :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t\t\t";
    }

    cout<<endl<<endl;
}
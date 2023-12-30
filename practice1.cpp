#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your digit number 'L<R' :";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n-count; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        count++;
    }
    cout<<"your 'L<R' number :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t\t\t";
    }
    
    cout<<endl;


    return 0;
}

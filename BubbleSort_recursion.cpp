/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void bubbleSort(int arr[], int n)
{
    if(n == 0 || n == 1) 
    {
        return;
        
    }
    
    for(int i=0; i < n ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    bubbleSort(arr, n-1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    bubbleSort(a , n);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int high,int low,int s,int key)
{
   
    
    int mid = (low+high)/2;
    
    if(low>high)
    {
        return -1;
    }
    
    if(arr[mid] == key)
    {
        return mid;
    }
    
    else if(arr[mid] < key)
    {
        low = mid+1;
        return binarySearch(arr,high,low,s,key);
        
    }
    
    else
    {
        high = mid-1;
         return binarySearch(arr,high,low,s,key);
        
        
    }
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = 4;
    int s=5;
    int key = 4;
    
    int ans = binarySearch(arr,high,low,s,key);
    
    cout<<ans<<endl;
    
    
    
  
   
    
    return 0;
}

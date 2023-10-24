/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int *arr , int size)
{   
    int sum1;
    
    if(size == 0)
    {
        return 0;
    }
    
    sum1 = arr[0] + sum(arr+1,size-1);
    
    return sum1;
    
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    int s=5;
    
   cout<<sum(arr,s)<<endl;
   
    
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void digitWord(int n, string arr[])
{
    if(n==0) return;
    
    int digit = n % 10;
    n = n / 10;
    
    digitWord(n,arr);
    
    cout<<arr[digit]<<" ";
}
int main()
{
    int n;
    cin>>n;
     string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
     
     digitWord(n,arr);
    
    return 0;
}

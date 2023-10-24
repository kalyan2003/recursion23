/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverseStr(string& s , int i ,int j)
{
    // if(sizeof(s) == 0) return;
    if(i>j) return ;
    
    swap(s[i],s[j]);
    
    i++;
    j--;
    
   reverseStr(s,i,j);
    
    
}

int main()
{
    string name = "pavan";
    
    int i=0,j=name.length()-1;
    reverseStr(name,i,j);
 
   cout<<name<<endl;
    return 0;
}
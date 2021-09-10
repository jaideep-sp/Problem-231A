#include<iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
using namespace std;

// round int intValue = static_cast<int>(dblValue < 0 ? dblValue - 0.5 : dblValue + 0.5);
 
int main()
{
   
   int count=0,t=0;
   string s;
   cin>>t;
 while(t--){
     for(int i=0;i<=t;i++)
      {
          int a=0,b=0,c=0;
          cin>>a>>b>>c;
          int sum=0;
          sum=a+b+c;
          if(sum>=2){
              count++;
          }
      }

 }
    cout<<count;
    return 0;
}
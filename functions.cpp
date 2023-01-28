#include <iostream>
#include <cstdio>
using namespace std;

   int max_of_four(int a, int b, int c, int d){
      int max;
       if (a>b && a>c && a>d){
           max = a;
       }
       else if(b>a && b>c && b>d){
           max = b;
       } 
       else if(c>a && c>b && c>d){
           max = c;
           
       } 
       else if(d>a && d>c && d>b){
           max = d;
          
       } 
       return max;
    }
    int main(){
        int num1 , num2, num3, num4;
        cin>>num1;
        cin>>num2;
        cin>>num3;
        cin>>num4;
        cout<<max_of_four(num1, num2,num3,num4)<<endl;
    }
     




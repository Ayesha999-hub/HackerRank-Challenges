#include <iostream> 
#include <stdio.h>
using namespace std;
void update(int *a,int *b) {
    int c, d;
    int n = 0;
    c = *a + *b;
     cout<<c<<endl;
    d = *a - *b; 
   if (*a - *b > n ){
       cout<<d;
   }
   else if (*a - *b <n){
       cout<<-1* d;
   }
   else if (*a - *b == n){
       cout<<d;
   }

       
}

int main() {
    int a, b;
    cin>>a;
    cin>>b;
    int *pa = &a, *pb = &b;
    update( pa , pb);
    
    return 0;
}


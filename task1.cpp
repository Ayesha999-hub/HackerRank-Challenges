#include <iostream>
using namespace std;
int main() {
    
   //declaration of variable
    int no1 , no2 , no3 , largest;
    cout<<"enter number1";
    cin>>no1;
     cout<<"enter number2";
    cin>>no2;
    cout<<"enter number3";
    cin>>no3;
    
    
    largest = (no1 > no2) ?
          (no1 > no3 ? no1 : no3) :
          (no2 > no3 ? no2 : no3);
           
    
    cout << "Largest number among "
         << no1 << ", " << no2 << " and "
         << no3 << " is " << largest ;
          
    return 0;
}

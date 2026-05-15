#include <iostream>

using namespace std;

// Reverse the given number

int main(){
   
    int temp;
    int hold;
    int num;

    cout<<"Enter a number\n";

    cin>>num;

    while(num!=0){
     
       hold = num % 10;

       num = num/10;
       
       cout<<hold;

    }

    return 0;
}

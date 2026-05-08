// #include <iostream>

// using namespace std;

// int main(){

//     int count=4;
    
//     for (int i = 1; i <=count; i++)
//     {
//         cout<<i<<endl;

//     }
    

//     return 0;
// }

//Password matching program using do while loop

#include <iostream>

using namespace std;

int main(){

 int password;
 int pass = 12345;
 
    do {
       
        cout<<"Enter password\n";

        cin>>password;

        if (pass==password)
        {
            cout<<"Password match";
        }
        

    }while(pass != password);
    

   
    
    return 0;

}
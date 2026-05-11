#include <iostream>

#include<string>

using namespace std;

// class person {
//     public:
    
//     string name;

//     int age;

//     person(string name,int age){
//       this->name = name;
//       this->age = age;
//     }
// };

// class gopal : public person{
   
//     public:
    
//     int height;

//     gopal(string name,int age,int height):person(name,age){ // yaha child class se parent class ka constructor call kar rhe h 

//         this->name = name;
//         this->age = age;
//         this->height = height;

//     }

//     void getInfo(){
        
//         cout<<name<<endl;

//         cout<<age<<endl;

//         cout<<height<<endl;

//     }
// };

// int main(){

//    gopal g1("golu",25,170);

//    g1.getInfo();

//     return 0;
// }


// Multiple inheritance

class teacher {
 
    public:

    string name;
    string subject;

};

class student{
 
    public:

    string stuName;
    int rollno;

};

class TA : public teacher,public student{

  public:
    void getInfo(){
      cout<<name<<endl;

      cout<<stuName<<endl;
      
      cout<<subject<<endl;

      cout<<rollno<<endl;
    }

};



int main(){

    TA t1;

    t1.name="vishal";

    t1.subject="maths";

    t1.stuName="ballu";

    t1.rollno = 2654;

    t1.getInfo();

    return 0;

}

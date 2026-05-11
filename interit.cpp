#include<iostream>
#include<string>

using namespace std;

class human { // this is parent or base class
  
    public:

    string name;
    int age;

    human(){
        cout<<"I am parent class constructor"<<endl;// isme pehle parent class ka constructor call hota ha phir child class ka 
    }
 
    ~human(){

        cout<<"I am parent class destructor"<<endl;
  }
};

class indian : public human { // this is child class or derived class 
  
   public:
    
   string color;

  void getInfo(){

    cout<<name<<endl;
    
    cout<<age<<endl;
    
    cout<<color<<endl;

   }
 
   indian(){

    cout<<"I am child class construtors"<<endl;

   }

   ~indian(){
    
    cout<<"I am child class destructor"<<endl;

   }

};

int main(){
 
    indian in;
    
    in.name = "Dolu";
    in.age = 15;
    in.color = "whitish";

    in.getInfo();

    return 0;
}


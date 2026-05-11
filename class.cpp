#include <iostream>

#include<string>
using namespace std;


class teacher{

    private:
    double salary;

    public:

    string name;
    string department;
    string batch;
    

    void newDepartment(string newDeapart){

        department= newDeapart;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){

        return salary;
    }
 
};

// int main(){

//     teacher t1;
//     t1.name = "Ballu";
//     t1.department = "Maths";
//     t1.batch = "2018";
//     t1.salary = 250000;
//     cout<<t1.department<<endl;

//     t1.newDepartment("physics");

//     cout<<t1.department;

    
//     return 0;
// }

//Using private variable and getter and setter methods

int main(){
    teacher t1;
    t1.name = "Ballu";
    t1.department = "Maths";
    t1.batch = "2018";
    t1.setSalary(65000);
    
    cout<<t1.getSalary();
   
    
    return 0;
}

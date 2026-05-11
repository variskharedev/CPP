#include <iostream>
#include <string>

using namespace std;

class school {
  
    public:
    string studentName;
    string TeacherName;
    string stand;
    string subject;

    //Parameterized constructor

    school(string studentName,string TeacherName,string subject,string stand){
       
        //Here we are using this pointer
       
        this->studentName = studentName;
         
        this->TeacherName = TeacherName;
        
        this->stand = stand;

        this->subject = subject;


    }


    //Copy custom constructor 

    school(school &obj){
        
        cout<<"I am from copy constructor"<<endl;
        this->studentName = obj.studentName;
        this->TeacherName = obj.TeacherName;
        this->stand = obj.stand;
        this->subject = obj.subject;
    }

    void getInfo(){
        cout<<studentName<<endl;
        cout<<TeacherName<<endl;
        cout<<stand<<endl;
        cout<<subject<<endl;
    }

};

int main(){
   
    school s1("yush","Dipti","maths","10th");
    
    //s1.getInfo();
    school s2(s1);

    s2.getInfo();
    
    return 0;

}
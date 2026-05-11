#include<iostream>
#include<string>

using namespace std;

class fruits {

    public:

    string fruitName;
    string des;
    float price;

 
    fruits(string fruitName,float price){
    
        this->fruitName = fruitName;
        this->price = price;

 }
    

 //destructor 

~fruits(){

    cout<<"HIi i am destructor";

}

    void getFruitInfo(){
        
        cout<<fruitName<<endl;

        cout<<price<<endl;

    }

};

int main(){

    fruits f1("apple",25.98);

    f1.getFruitInfo();

    return 0;

}
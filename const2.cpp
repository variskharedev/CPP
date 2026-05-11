#include <iostream>
#include <string>

using namespace std;

class car {
 
    public:
           
    string carName;
    string modelName;
    double* price;
    

    car(string carName,string modelName,double val){

        this->carName = carName;
        this->modelName = modelName;
        price = new double;// Yaha pointer variable ko ek memory address se point karwaya
        *price = val;// yaha us pointer ko allocated memory mai value ko daal diya
        
         }

    car(car &obj){
      this->carName = obj.carName;
      this->modelName = obj.modelName ;
      price = new double;// Ye deep copy ka example h isme heap wali memory ko bhi copy karke point karwaya h pointer varibale se
      *price = *obj.price;

    }

    void getCarinfo(){
        
        cout<<carName<<endl;

        cout<<modelName<<endl;

        cout<<*price<<endl;

     }
};

int main(){
 
    car c1("Honda-city","HC56789",2500000.45);

    c1.getCarinfo();
    
    cout<<endl;

    car c2(c1);

    *(c2.price) = 5600000.87;
    c2.getCarinfo();


}
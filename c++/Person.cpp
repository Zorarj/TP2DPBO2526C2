#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        string address;
        int age;
    
    public:
        Person(){
        }
        Person(string name,string address,int age){
            this->name = name;
            this->address = address;
            this->age = age;
        }

        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setAddress(string address){
            this->address = address;
        }
        string getAddress(){
            return this->address;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return this->age;
        }

};
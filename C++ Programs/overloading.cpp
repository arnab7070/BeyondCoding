#include<iostream>
using namespace std;
//function overloading
// class bestArnab{ 
//     public:
//     void func(){
//         cout<<"It is a function with no argument"<<endl;
//     }
//     void func(int x){
//         cout<<"I am a function with integer argument "<<x<<endl;
//     }
//     void func(double y){
//         cout<<"I am a funtion with double argument "<<y<<endl;
//     }
// };
//function overloading

//runtime overloading
class base{
    public:
    virtual void print(){
        cout<<"Hello Guys this is base class's print function"<<endl;
    }
    void display(){
        cout<<"Hello Guys this is base class's display function"<<endl;
    }
};
class derived: public base{
    public:
    void print(){
        cout<<"Hello Guys this is derived class's print function"<<endl;
    }
    void display(){
        cout<<"Hello Guys this is derived class's display function"<<endl;
    }
};
//runtime overloading
int main(){
    //function overloading
    // bestArnab object;
    // object.func();
    // object.func(5);
    // object.func(8.93);
    // cout<<"So it's over now....."<<"\a"<<endl;
    //function overloading

    //runtime overloading
    base *baseptr;
    derived d;
    base = &d;
    baseptr -> print();
    baseptr -> display();
    //runtime overloading
    return 0;
}
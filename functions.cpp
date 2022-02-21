#include <iostream>
using namespace std;
/*void mY_func(){
    cout<<"This is a function\n";
}
int main(){
    mY_func();
    mY_func();
    return 0;
}*/
// function declaration and definition;////////////////////////////////////////////////////////
/*void fun();//declaration
int main(){
    fun();
    return 0;
}
void fun(){//definition
    cout<<"function can be declared like this also"<<endl;
}*/
//function parameters
/*void my_func(string fname){//a function can have more than one parameter;
    cout<<"the name is:"<<fname<<endl;
}
int main(){
    my_func("Tharun");
    my_func("Sai");
    my_func("Theerdha");
    return 0;
}*/
//default parameters;////////////////////////////////////////////////////////////////////////////////////
/*void my_func(string country="INDIA"){
    cout<<"My country is :"<<country<<endl;
}
int main(){
    my_func("USA");
    my_func();//here it uses default parameter;
    my_func("FRENCH");
    return 0;
}*
//MULTIPLE PARAMETERS;//////////////////////////////////////////////////////////////////////////////////
/*void my_func(string fname,int myage){
    cout<<"MY NAME IS and "<<fname <<" "<<"MY AGE IS "<<myage<<endl;
}
int main(){
    my_func("Tharun",19);
    my_func("PAVAN",20);
    my_func("SAI",21);
    return 0;} */
///////////////////////RETURN VALUES IN FUNCTIONS;//////////////////////////////////////////////////////////////////////////////
/*int my_func(int x){
    return 5 + x;
}
int main(){
    cout<<my_func(3);
    return 0;
}*/
//RETURNS VALUES WITH MULTIPLE PARAMETERS;///////////////////////////////////////////////////////////////
/*int my_func(int x,int y){
    return y + x;
}
int main(){
    cout<<my_func(3,5);
    return 0;
}*/
/*int my_func(int x,int y){
    return y + x;
}
int main(){
    int z= my_func(3,7);
    cout<<z;
    return 0;
}*/
/*void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum <<" "<< secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << " "<<secondNum << "\n";

  return 0;
}*/
//FUNCTION OVERLOADING//////////////////////////////////////////////////////////////////////////////////////////
/*int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}*/
//////////////////////////////// "CALL BY VALUE"////////////////////////////////////////////////////////
/*void my_func(int data);
int main(){
    int data=3;
    my_func(data);
    cout<<"the value of data is:"<<data<<endl;
    return 0;
}
void my_func(int data){
    data=5;

}*/
/*class MyBase{
    public:
    void show(){
        cout<<"This is a MyBase show function"<<endl;
    }
    virtual void print(){
        cout<<"This is a MyBase print funcion"<<endl;
    }
};
class MyDerived: public MyBase{
    public:
    void show(){
        cout<<"This is a MyDerived show function"<<endl;
    }
    void print(){
        cout<<"This is a MyDerived print funcion"<<endl;
    }
};
int main(){
    MyBase *ptr;
    MyDerived obj;
    ptr = &obj;
    ptr->print(); //derived class print
    ptr->show(); //base class show fn
    return 0;
}*/
class Animal{
    public:
    virtual void eat(){
        cout<<"iam eating generic food"<<endl;
    }
};
class Cat:public Animal{
    public:
    void eat(){
        cout<<"iam eating cat food"<<endl;
    }
};
class Dog:public Cat{
    public:
    void eat(){
        cout<<"iam eating dog food"<<endl;
    }
};
void function(Animal *xyz){
    xyz->eat();
}
int main(){
    Animal *ptr;
    Cat catobj;
    Dog dogobj;
    ptr = &catobj;
    function(ptr);
    ptr = &dogobj;
    function(ptr);
    return 0;
}


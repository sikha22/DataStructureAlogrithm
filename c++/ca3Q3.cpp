#include <iostream>
using namespace std;

//Base class
class Question3{
    protected:

    int x;
    public:
    //pure virtual method Task()
    virtual void Task()=0; 
};

//Derived Class
class Sub1:public Question3{
    public:
    
    void get_data1()
    {
        //take input for the value of x
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    //definition of pure virtual function
    void Task(){
      int remainder=0;
      int reversedNumber=0;
        while(x != 0) {
        remainder = x%10;
        reversedNumber = reversedNumber*10 + remainder;
        x /= 10;
    }
        //print the output
        cout<<endl<<"The reverse of the number is: "<<reversedNumber
          <<endl;
    }
};

//definition of the main function
int main()
{
    Question3 *ob1; //pointer to the baseclass
    Sub1 ob2;
    ob1=&ob2;
    //call the child class method
    static_cast<Sub1*>(ob1)->get_data1(); 
    ob1->Task();
    return 0;
}
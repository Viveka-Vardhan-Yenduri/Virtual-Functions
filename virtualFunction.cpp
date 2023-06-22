//Virtual Function

#include <iostream>  
using namespace std;  
class A  
{  
   int x=5;  
    public:  
    virtual void display() 	 //without virtual keyword it is going to print Value of x is : 5
    {  
        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};  
class B: public A  
{  
    int y = 10;  
    public:  
    void display()  
    {  
        std::cout << "Value of y is : " <<y<< std::endl;  
    }  
};  
int main()  
{  
    A *a; 	 	//pointer of base class    
    B b;  		//object of derived class   
    a = &b;  		//variable a is holding address of b
   a->display();   	//Late Binding occurs
    return 0;  
}  

//virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.
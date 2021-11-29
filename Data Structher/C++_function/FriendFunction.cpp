#include<iostream>
using namespace std;

class Complex {
    private: 
        int a , b;
    public:
    void set(int n1 , int n2)
    {
        a = n1;
        b = n2;
    }
    int get()
    {
        return a + b;
    }
    void Display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }

    //  We can access private Data with like (a , b) 
    //  with the help of friend function 

    friend Complex SumComplex(Complex c1 , Complex c2);

};

Complex SumComplex(Complex c1 , Complex c2){
    Complex sum;
 
    sum.set((c1.a + c2.a) , (c1.b + c2.b));
    return sum;
}

int main()
{
    Complex c1;
    Complex c2;

    c1.set(2 , 3);
    c1.Display();
    c2.set(3 , 5);
    c2.Display();

    Complex sum = SumComplex(c1 , c2);
    cout<<"Sum Of two Number is : ";
    sum.Display();
    return 1;
}
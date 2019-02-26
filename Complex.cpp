#include<iostream>
using namespace std;
class complex
{
    public:
    double real, imag;
    void in();
    void out();
    friend complex add(complex c1, complex c2);
    friend complex mult(complex c1, complex c2);
};
void complex::in()
{
    cout<<"\nEnter real part : ";
    cin>>real;
    cout<<"Enter imaginary part : ";
    cin>>imag;
}
void complex::out()
{
    if(imag>=0)
        cout<<endl<<real<<" + "<<imag<<"i\n";
    else
        cout<<endl<<real<<" - "<<(-1*imag)<<"i\n";
}
complex add(complex c1, complex c2)
{
    complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}
complex mult(complex c1, complex c2)
{
    complex c;
    c.real = c1.real*c2.real - c1.imag*c2.imag;
    c.imag = c1.real*c2.imag + c1.imag*c2.real;
    return c;
}
main()
{
    complex c1, c2, c3, c4;
    cout<<"\nEnter first number :";
    c1.in();
    cout<<"\nEnter second number :";
    c2.in();
    cout<<"\nFirst number :";
    c1.out();
    cout<<"\nSecond number :";
    c2.out();
    c3 = add(c1, c2);
    c4 = mult(c1, c2);
    cout<<"\nSum :";
    c3.out();
    cout<<"\nProduct :";
    c4.out();
    return 0;
}

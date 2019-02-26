#include<iostream>
       #include<conio.h>
       using namespace std;

       class BaseClass
       {

              public:
               void Display()
               {
                      cout<<"\n\tThis is Display() method of Base Class";
               }

               void Show()
               {
                      cout<<"\n\tThis is Show() method of Base Class";
               }

       };

       class DerivedClass : public BaseClass
       {

              public:
               void Display()
               {
                      cout<<"\n\tThis is Display() method of Derived Class";
               }

               void Show()
               {
                      cout<<"\n\tThis is Show() method of Derived Class";
               }

       };
       int main()
       {

              DerivedClass D;

              BaseClass *B;            //Creating Base Class Pointer
              B = new BaseClass;

              B->Display();            //This will invoke Display() method of Base Class
              B->Show();               //This will invoke Show() method of Base Class

              B=&D;

              B->Display();            //This will invoke Display() method of Derived Class
                                               //bcoz Display() method is virtual in Base Class

              B->Show();               //This will invoke Show() method of Base Class
                                               //bcoz Show() method is not virtual in Base Class

       }


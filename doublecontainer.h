#include <iostream>
using namespace std; 

class doubleContainer{
    friend ostream& operator << (ostream& out, const doubleContainer& d); 
    friend doubleContainer operator+ (const doubleContainer &c, const doubleContainer &c2);              //addition
    friend doubleContainer operator- (const doubleContainer &c, const doubleContainer &c2);              //subtraction
    friend doubleContainer operator- (const doubleContainer &d);                                           //negation
    friend doubleContainer operator* (const doubleContainer &c, double value);                            //product of array * value
    friend double operator* (const doubleContainer& c, const doubleContainer& c2);                        //product of 2 arrays

    private: 
        double * content; 
        int maxSize; 
        int currentSize; 


    public: 
        doubleContainer(); 
        ~doubleContainer(); 
        doubleContainer(double values[], int arraySize); 
        doubleContainer(const doubleContainer &c); 
        doubleContainer operator= (const doubleContainer& c); 
        void add(double value); 
        void clear(); 
        double remove(); 
        void grow(); 




}; 
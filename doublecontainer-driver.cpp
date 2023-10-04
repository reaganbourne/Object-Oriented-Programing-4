#include <iostream> 
#include "doublecontainer.h"

using namespace std; 

int main() {
    doubleContainer c1; 
    doubleContainer c2; 
    doubleContainer c3; 
    cout<< "ADD VALUES: "<<endl; 
    c1.add(2); 
    c2.add(3);
    c1.add(4);
    c2.add(5); 
    cout<< c1+c2<<endl; 
   
    doubleContainer c5; 
    cout<<"ADD VALUES TO LIST: "<<endl; 
    c5.add(1.7); 
    c5.add(2.8); 
    c5.add(3.1); 
    cout<< c5<<endl; 

    doubleContainer c7; 
    doubleContainer c8; 
    doubleContainer c9; 
    cout<< "SUBTRACT VALUES: "<<endl; 
    c7.add(9); 
    c8.add(6); 
    c7.add(4); 
    c8.add(2); 
    cout<<c7- c8<< endl; 

    doubleContainer c10; 
    doubleContainer c11; 
    cout<< "DOT PRODUCT: "<<endl; 
    c10.add(2); 
    c11.add(3); 
    c10.add(4);
    c11.add(5); 
    cout<< c10 * c11<<endl; 

    doubleContainer c12; 
    cout<< "MULTIPLICATION: "<<endl; 
    c12.add(4.2); 
    c12.add(3.2); 
    cout<< c12* 2<<endl; 

    cout<< "DEEP COPY CONSTRUCTOR: "<<endl; 
    doubleContainer c4(c5); 
    cout<<c4<<endl; 

    cout<< "DEEP COPY ASSIGNMENT OPERATOR OVERLOAD: "<<endl; 
    doubleContainer c6; 
    c6=c5; 
    cout<< c6<< endl; 

    doubleContainer c13; 
    cout<< "NEGATION"<<endl; 
    c13.add(3); 
    cout<<-c13<<endl; 

    cout<< "REMOVE"<<endl; 
    c5.remove(); 
    cout<< c5 << endl; 

    cout<< "CLEAR"<<endl; 
    c5.clear(); 
    cout<<c5<< endl; 
}
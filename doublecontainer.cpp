#include <iostream> 
#include "doublecontainer.h"

doubleContainer::doubleContainer() {
    content= new double[5]; 
    for (int i=0; i<5; i++)
        {
            content [i]=0; 
        }
    currentSize= 0; 
    maxSize=0; 

}

doubleContainer:: ~doubleContainer() {
    delete [] content; 
}

doubleContainer:: doubleContainer(double values[], int arraySize){ 
    maxSize= arraySize; 
    currentSize=arraySize; 
    content= new double[arraySize]; 

    for (int i=0; i< maxSize; i++) {
        content [i]= values [i]; 
    }

}

doubleContainer:: doubleContainer (const doubleContainer& c){
    content= new double [c.maxSize]; 
    maxSize= c.maxSize; 
    currentSize=c.currentSize; 

    for (int i=0; i<maxSize; i++) {
        content[i]=c.content[i]; 
    }
}

doubleContainer operator+ (const doubleContainer& c, const doubleContainer& c2) {
    doubleContainer sum; 
    if (c.currentSize == c2.currentSize) {
        for (int i=0; i<c.currentSize; i++){
            sum.add(c.content[i] + c2.content[i]); 
        }
        return sum;  
    }

    else{ 
        cout<< "cannot perform operatation" <<endl; 
        return sum; 
    }
}

doubleContainer operator-(const doubleContainer& c, const doubleContainer& c2) {
    doubleContainer sub; 
    if (c.currentSize == c2.currentSize) {
        for (int i=0; i<c.currentSize; i++){
            sub.add(c.content[i] - c2.content[i]); 
        }
        return sub;  
    }

    else{ 
        cout<< "cannot perform operation" <<endl; 
        return sub; 
    }

}

doubleContainer operator-(const doubleContainer& d){
doubleContainer num;  
    for(int i=0; i<d.currentSize; i++){
        if (d.content[i]>0)
            num.add(d.content[i] * -1); 
        else if(d.content[i]==0)
            num.add(d.content[i]); 
        else if(d.content[i]<0)
            num.add(-d.content[i]);
    }
    return num; 
}

double operator* (const doubleContainer& c, const doubleContainer& c2) {
    double mult=0;  
    if (c.currentSize == c2.currentSize) {
        for (int i=0; i<c.currentSize; i++){
           mult+=c.content[i]*c2.content[i]; 
        }
        return mult;  
    }
    else {
        cout<< "cannot perform operation"<<endl; 
    }

}

doubleContainer operator* (const doubleContainer& c, double value){
    doubleContainer mult; 

    for (int i=0; i<c.currentSize; i++) {
        mult.add(c.content[i]* value); 
    }
    return mult; 
}

void doubleContainer::add(double value) {
    if (currentSize== maxSize) {
        grow(); 
    }
    
    content[currentSize]= value + content[currentSize]; 
    currentSize++; 
}

void doubleContainer::grow(){
    int tempSize= maxSize+10; 
    double* array = new double [tempSize]; 

    for (int i=0; i<currentSize; i++) {
        array[i]= content [i]; 
    }

    delete [] content; 
    content= array; 
    maxSize= tempSize; 
}

void doubleContainer::clear() {
    currentSize=0; 
}

double doubleContainer:: remove(){ 
    currentSize--; 
    return content[currentSize+1]; 
}

doubleContainer doubleContainer::operator= (const doubleContainer& c){
    if(this != &c){
        delete [] content; 
        currentSize= c.currentSize; 
        maxSize= c.maxSize; 
        content= new double [maxSize]; 
        for(int i=0; i<currentSize; i++) {
            content[i]= c.content[i]; 
            //cout<<content[i]<<endl; 
        }
    }
    return *this; 
}

ostream& operator<<(ostream& out, const doubleContainer& c){
    out<< "<"; 
    for(int i=0; i<c.currentSize; i++){
        out<< c.content[i]<<","; 
    }
    out<< ">"; 
    return out; 
}
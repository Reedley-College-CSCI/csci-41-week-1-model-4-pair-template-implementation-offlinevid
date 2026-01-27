// Pair.h
//jared vasquez
#ifndef PAIR_H
#define PAIR_H

#include <iostream>
#include <string>
using namespace std;


template <typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T f, T s);// in reference to pair int; shows the pair that sotores two intergers. creating a version of the parent class. (constructor)
    T getFirst() const;// t is the return type(getter for 1st )
    T getSecond() const;//(getter for 2nd)
    void setFirst(T f);// t is the setter dunction for 1t
    void setSecond(T s);// setter function for 2nd
};







    Pair<int>p1(1,2);
        
    
template <typename T>  //constrctor
Pair <T>::Pair(T f, T s) {

    first = f;
    second = s;
}

   template <typename T>//getter 1st
    T Pair<T>::getFirst()const {

        return first;
    }

template <typename T> //gettter 2nd
    T Pair<T>::getSecond()const {
    
        return second;
    }


 


template <typename T>//setter 1st
    void Pair<T>::setFirst(T f) {

        first = f;
    }

    template <typename T>//setter 2nd
    void Pair<T>::setSecond( T s) {

        second = s;
    }


    
    

#endif
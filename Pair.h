// Pair.h
//jared vasquez
#ifndef PAIR_H
#define PAIR_H

template <typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T f, T s);// in reference to pair int; shows the pair that sotores two intergers. creating a version of the parent class 
    T getFirst() const;// t is the return type
    T getSecond() const;
    void setFirst(T f);// t is the setter dunction
    void setSecond(T s);
};





int main() {

    Pair<int>p1(3, 7);
        
    }
template <typename T>
Pair <T>::Pair(T f, T s) {

    First = f;
    Second = s;
}
template <typename T>
    T Pair<T>::getSecond()const {
    
        return 0;
    }
    template <typename T>
    T Pair<T>::getFirst()const {

        return 0;
    }
    template <typename T>
    void Pair<T>::setSecond()const {

        return 0;
    }
    template <typename T>
    void Pair<T>::setFirst()const {

        return 0;
    }

    }

#endif
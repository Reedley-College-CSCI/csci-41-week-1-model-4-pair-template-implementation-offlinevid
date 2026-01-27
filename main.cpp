// Jared Vasquez
#include "Pair.h"
#include <string>
#include <iostream>

using namespace std;



int main() {

    // Add test cases here
    Pair<int> p1(1,2);// int stores 1 and 2//(#6
    cout << "Pair<int> p1(1,2): " << p1.getFirst() << ", " << p1.getSecond() << endl;// auto filled by VSC, probably need help under standing this line*******


// apple and banan string
  Pair<string> p2("banana", "apple");// string stores banana and apples//(#6
    cout << "Pair<string> p2(apple, banana): " << p2.getFirst() << ", " << p2.getSecond() << endl;
return 0;
}
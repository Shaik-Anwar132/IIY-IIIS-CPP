#include <iostream> 
using namespace std; 
class Box { 
private: 
    double length; 
public: 
   
    Box(double l) { 
        length = l; 
    } 
  
    friend void printLength(Box b); 
}; 
void printLength(Box b) { 
   
    cout << "Length of the box: " << b.length << " units" << endl; 
} 
int main() { 
    Box b1(15.5); 
    // Call friend function 
    printLength(b1); 
    return 0; 
} 

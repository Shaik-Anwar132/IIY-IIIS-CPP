#include <iostream> 
using namespace std; 
class Student { 
private: 
    int rollNumber;  
public: 
    string name; 
    // Public function to set private data 
    void setRollNumber(int r) { 
        rollNumber = r; 
    } 
   
   int getRollNumber() { 
        return rollNumber; 
    } 
}; 
int main() { 
    Student s1; 
   
    s1.name = "Aditya"; 
    cout << "Name: " << s1.name << endl; 
    
    s1.setRollNumber(101); 
    cout << "Roll Number: " << s1.getRollNumber() << endl; 
    return 0;
}

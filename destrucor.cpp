#include <iostream>
#include <string>
using namespace std;

class Student {
private:
string name;
int rollNo;

public:
// Constructor
Student(string n, int r) {
name = n;
rollNo = r;
cout << "Constructor called: Object created with name = " << name << " and rollNo = " << rollNo << endl;
}

// Destructor
~Student() {
cout << "Destructor called: Object with name = " << name << " and rollNo = " << rollNo << " is being destroyed" << endl;
}
// Display function
void displayDetails() {
cout << "Name: " << name << ", Roll Number: " << rollNo << endl;
}
};

int main() {
cout << "Creating object s1..." << endl;
Student s1("John Doe", 101);
s1.displayDetails();

cout << "Creating object s2..." << endl;
Student s2("Jane Smith", 102);
s2.displayDetails();

cout << "End of main function. Objects will now be destroyed automatically." << endl;
return 0;
}


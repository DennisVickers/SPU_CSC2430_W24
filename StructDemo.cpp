#include <iostream>
#include <string>
using namespace std;

// Define the Student struct
struct Student {
   string name;
   int id;
   double gpa;
};

// Function to display a student's information
void displayStudentInfo(const Student& student) {
   cout << "Student Information:\n"
        << "Name: " << student.name << "\n"
        << "ID: " << student.id << "\n"
        << "GPA: " << student.gpa << "\n";
}

int main() {
   // Create student records
   Student student1 {"Alice Johnson", 1001, 3.8};
   Student student2 {"Brisa Lopez", 1002, 4.0};

   // Display the student's information
   displayStudentInfo(student1);
   displayStudentInfo(student2);

   return 0;
}

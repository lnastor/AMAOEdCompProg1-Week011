// QUESTION #2

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "_pause.h"
#include "student.h"

using namespace std;

int main() {

    Person Person ("Loreto P. Nastor Jr.", "138 San Vicente East, San Manuel, Pangasinan", "Male", 21, "Businessman");
    Student student;
        string academicprogram;
        string year;
        string university;

    cout << "Academic Program: ";
    getline (cin, academicprogram);
    student.setAcademicProgram(academicprogram);

    cout << "Year: ";
    getline (cin, year);
    student.setYear(year);

    cout << "University: ";
    getline (cin, university);
    student.setUniversity(university);

    cout << "\n";
    cout << Person.getPerson() <<endl;
    cout << "His course is " << student.getAcademicProgram() << "." << endl;
    cout << "He is currently a " << student.getYear() << " year student in " << student.getUniversity() << "." << endl;
  

    cout << "\n\n";
    system ("pause");
    return EXIT_SUCCESS;

}
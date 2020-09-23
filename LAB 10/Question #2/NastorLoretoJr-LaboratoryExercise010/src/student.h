#include <string>
#include <sstream>
#include "person.h"

using namespace std;

class Student : public Person {
    private:
        string academicprogram;
        string year;
        string university;

    public:
        Student() : Person ("Loreto P. Nastor Jr.", "138 San Vicente East, San Manuel Pangasinan", "Male", 21, "Businessman") {}
        string getPerson() {
            return Person::getPerson();
        }
        string getAcademicProgram() {
            return academicprogram;
        }
        void setAcademicProgram(string a) {
            academicprogram = a;
        }
        string getYear() {
            return year;
        }
        void setYear(string b) {
            year = b;
        }
        string getUniversity() {
            return university;
        }
        void setUniversity(string c) {
            university = c;
        }
};
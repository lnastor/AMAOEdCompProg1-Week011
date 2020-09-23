// Person.h
#include <string>
#include <sstream>


using namespace std;

class Person {
    private:
        string mName, mAddress, mGender, mOccupation;
        int mAge;
    public:
        Person (string name, string address, string gender, int age, string occupation) {
            mName = name;
            mAddress = address;
            mGender = gender;
            mAge = age;
            mOccupation = occupation;
        }
    string getPerson() {
        ostringstream s;
        s << mName << " lives at " << mAddress << "." << endl;
        s << "He is a " << mGender << ", " << mAge << " years old and working as a " << mOccupation << ".";
        return s.str();
    }
};

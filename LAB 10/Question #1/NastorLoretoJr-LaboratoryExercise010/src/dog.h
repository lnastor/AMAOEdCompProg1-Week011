#include <string>
#include <sstream>
#include "leggedmammal.h"

using namespace std;

class Dog: public LeggedMammal {
    private:
        string breed, size, status;

    public:
        Dog(): LeggedMammal (4, "smooth", "tail") {}
        string getLeggedMammal() {
            return LeggedMammal:: getLeggedMammal();
        }
        string getBreed() {
            return breed;
        }
        void setBreed(string b) {
            breed = b;
        }
        string getSize() {
            return size;
        }
        void setSize(string s) {
            size = s;
        }
        string getStatus() {
            return status;
        }
        void setStatus(string c) {
            status = c;
        }
};
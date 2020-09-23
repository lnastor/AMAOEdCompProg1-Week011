#include <string>
#include <sstream>

using namespace std;

class LeggedMammal {
    private:
        int mLegs;
        string mFur, mTail;

    public:
        LeggedMammal(int legs, string fur, string tail) {
            mLegs = legs;
            mFur = fur;
            mTail = tail;
        }

        string getLeggedMammal() {
            ostringstream s;
            s << "It has " << mLegs << " legs, " << mFur << " fur & " << mTail << ".\n";
            return s.str();
        }
};
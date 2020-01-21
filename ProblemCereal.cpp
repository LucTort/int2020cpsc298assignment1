#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    double OZ_IN_TON = 3527.92; //A metric ton is 35,273.92 ounces.


    double ozCerealBox = 0; //Will take input from user


    cout << "Please enter the weight of a cereal box in ounces: ";

    //Where user inputs data
    cin >> ozCerealBox;


    //Calculations performed after this point
    cout << endl << "That box of cereal weighs " << (ozCerealBox / OZ_IN_TON) << " ton(s)!" << endl;

    cout << "It would take " << OZ_IN_TON / ozCerealBox<< " box(es) of cereal of this weight to make one ton." << endl;
    

    return 0;
}
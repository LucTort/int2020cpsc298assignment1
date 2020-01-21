#include <iostream>

using namespace std;

int main()
{

    int fireCapacity = 0;
    int numAttendees = 0;

    //Enter fire law capacity
    cout << "Please enter the maximum capacity for your meeting room: ";
    cin >> fireCapacity;
    cout << "Thanks" << endl << endl;

    //Enter number of attendees
    cout << "Now please list the number of people who you invited to the meeting: ";
    cin >> numAttendees;
    cout << endl;

    //Makes sure everything is legal
    if (numAttendees <= fireCapacity)
    {
        cout << "Looks good. " << numAttendees << " is indeed less than or equal to " 
        << numAttendees << ", so you're all set!" << endl << "Have a great meeting!" << endl;
    } else
    {
        cout << "Wait, that's illegal! There are too many people in that meeting to meet fire regulations. "
        << "Please tell " << (numAttendees - fireCapacity) << " people that the meeting was canceled or something so"
        << " you can still host the meeting in that room and meet fire regulations." << endl;
    }
    

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    const int NUM_LOCKERS = 100;  // Constant for the number of lockers and students
    bool lockers[NUM_LOCKERS] = { false };  // All lockers are initially closed (false)

    // Each student toggles lockers according to their number
    // Student 1 toggles every locker, student 2 toggles every 2nd locker, and so on.
    for (int student = 1; student <= NUM_LOCKERS; student++) {
        for (int locker = student; locker <= NUM_LOCKERS; locker += student) {
            lockers[locker - 1] = !lockers[locker - 1];  // Toggle locker status (open/close)
        }
    }

    // Output which lockers are open after all students have passed
    cout << "Open lockers are:\n";
    int count = 0;  // Counter to format the output with 5 open lockers per line
    for (int i = 0; i < NUM_LOCKERS; i++) {
        if (lockers[i]) {  // If the locker is open (true), print its number
            cout << i + 1 << " ";  // Locker numbers start from 1, hence i + 1
            count++;
            if (count % 5 == 0) {  // Print 5 locker numbers per line for readability
                cout << endl;
            }
        }
    }

    return 0;  // End of program
}

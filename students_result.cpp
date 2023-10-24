#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[10];
    char results[10];

    cout << "Enter the results for 10 students:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << " name: ";
        cin >> names[i];
        cout << "Result (P for Pass, F for Fail): ";
        cin >> results[i];
    }

    cout << "Result Summary:" << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student: " << names[i] << " - Result: ";
        if (results[i] == 'P' || results[i] == 'p') {
            cout << "Pass" << endl;
        } else if (results[i] == 'F' || results[i] == 'f') {
            cout << "Fail" << endl;
        } else {
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}

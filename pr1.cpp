#include <iostream>

using namespace std;

int main() {
    int n;

    // Input the number of students
    cout << "Enter the number of students: ";
    cin >> n;

    // Create an array of students
    int rollNo[n];
    string name[n];
    float sgpa[n];

 // Input details for each student
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll No, Name, SGPA for student " << (i + 1) << ":" << endl;
        cout << "Roll No: ";
        cin >> rollNo[i];
        cin.ignore();                                           // To ignore the newline character after entering roll number
        cout << "Name: ";
        getline(cin, name[i]);
        cout << "SGPA: ";
        cin >> sgpa[i];
    }

    // Bubble Sort to sort students by Roll No
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (rollNo[j] > rollNo[j + 1]) {
                // Swap the students' details if the roll numbers are in the wrong order
                swap(rollNo[j], rollNo[j + 1]);
                swap(name[j], name[j + 1]);
                swap(sgpa[j], sgpa[j + 1]);
            }
        }
    }

    // Output the sorted list of students
    cout << "\nSorted List of Students (by Roll No):\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << rollNo[i] << ", Name: " << name[i] << ", SGPA: " << sgpa[i] << endl;
    }

    return 0;
}

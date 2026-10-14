#include <iostream>
using namespace std;

int main() {
    string name[4];
    int marks[4];
    double percentage[4];

    cout << "Enter name and marks of Student 1: ";
    cin >> name[0] >> marks[0];

    cout << "Enter name and marks of Student 2: ";
    cin >> name[1] >> marks[1];

    cout << "Enter name and marks of Student 3: ";
    cin >> name[2] >> marks[2];

    cout << "Enter name and marks of Student 4: ";
    cin >> name[3] >> marks[3];

    percentage[0] = marks[0];

    percentage[1] = marks[1];

    percentage[2] = marks[2];

    percentage[3] = marks[3];

    cout << "\nStudent Results\n";

    if (marks[0] >= 50 && marks[0] <= 100)
        cout << name[0] << " : PASS (" << percentage[0] << "%)\n";
    else
        cout << name[0] << " : FAIL\n";

    if (marks[1] >= 50 && marks[1] <= 100)
        cout << name[1] << " : PASS (" << percentage[1] << "%)\n";
    else
        cout << name[1] << " : FAIL\n";

    if (marks[2] >= 50 && marks[2] <= 100)
        cout << name[2] << " : PASS (" << percentage[2] << "%)\n";
    else
        cout << name[2] << " : FAIL\n";

    if (marks[3] >= 50 && marks[3] <= 100)
        cout << name[3] << " : PASS (" << percentage[3] << "%)\n";
    else
        cout << name[3] << " : FAIL\n";

    return 0;
}

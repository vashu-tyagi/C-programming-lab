#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of courses." << endl;
        return 0;
    }

    double totalCredits = 0, totalPoints = 0;
    for (int i = 1; i <= n; i++) {
        string course;
        double credits, gradePoint;

        cout << "\nCourse " << i << " name (one word): ";
        cin >> course;
        cout << "Credits: ";
        cin >> credits;
        cout << "Grade point (0-10): ";
        cin >> gradePoint;

        if (credits <= 0 || gradePoint < 0 || gradePoint > 10) {
            cout << "Invalid credits or grade point." << endl;
            return 0;
        }

        totalCredits += credits;
        totalPoints += credits * gradePoint;
        cout << course << " grade points = " << credits * gradePoint << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal credits = " << totalCredits << endl;
    cout << "Total grade points = " << totalPoints << endl;
    cout << "GPA/CGPA = " << totalPoints / totalCredits << endl;
    return 0;
}
// Use your college's official grade-point and credit rules.

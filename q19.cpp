 #include <iostream>
using namespace std;

void calculateGrade(int marks) {
    char grade;
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "Student's Grade: " << grade << endl;
}

int main() {
    int marks;
    cout << "Enter student's marks: ";
    cin >> marks;
    calculateGrade(marks);
    return 0;
}


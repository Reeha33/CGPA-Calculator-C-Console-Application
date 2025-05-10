#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to hold course information
struct Subject
{
    string subjectName;
    float gradePoint;
    int credits;
};

// Function to convert letter grades to GPA points
float letterGradeToGPA(string letterGrade) {
    if (letterGrade == "A")
        return 4.0;
   else if (letterGrade == "A-")
    return 3.7;
    else if (letterGrade == "B+")
    return 3.3;
   else  if (letterGrade == "B")
    return 3.0;
    else if (letterGrade == "B-")
    return 2.7;
   else if (letterGrade == "C+")
    return 2.3;
   else if (letterGrade == "C")
    return 2.0;
   else if (letterGrade == "C-")
    return 1.7;
   else if (letterGrade == "D+")
     return 1.3;
     else if (letterGrade == "D")
    return 1.0;
   else if (letterGrade == "F")
    return 0.0;
    else
    return 0.0;  // Default for invalid input
}

// Function to take input for all subjects
void getSubjectInfo(vector<Subject>& subjectList, int totalSubjects)
{
    cout << "Enter information about all subjects: " << endl;
    for (int i = 0; i < totalSubjects; i++)
    {
        Subject newSubject;
        cout << "Enter the name of subject No. " << i + 1 << ": ";
        cin >> newSubject.subjectName;

        string letterGrade;
        cout << "Enter the letter grade (e.g., A, B+, C-) for " << newSubject.subjectName << ": ";
        cin >> letterGrade;
        newSubject.gradePoint = letterGradeToGPA(letterGrade);

        cout << "Enter the credit hours of " << newSubject.subjectName << ": ";
        cin >> newSubject.credits;

        subjectList.push_back(newSubject);
    }
}

// Function to calculate GPA for the current semester
float calculateSemesterGPA(vector<Subject>& subjectList, int totalSubjects)
{
    float totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < totalSubjects; i++)
    {
        totalGradePoints += subjectList[i].gradePoint * subjectList[i].credits;
        totalCredits += subjectList[i].credits;
    }

    return totalGradePoints / totalCredits;
}

// Function to display grades for all subjects
void showSubjectGrades(vector<Subject>& subjectList, int totalSubjects)
{
    cout << "Your Grades in Each Subject:" << endl;
    for (int i = 0; i < totalSubjects; i++)
    {
        cout << subjectList[i].subjectName << " = " << subjectList[i].gradePoint << " GPA" << endl;
    }
}

int main()
{
    string studentName;
    int semesterNumber, totalSubjects;

    cout << "Welcome to the CGPA Calculator!" << endl;

    cout << "Enter your name: ";
    cin >> studentName;

    cout << "Enter your semester: ";
    cin >> semesterNumber;

    cout << "Enter the number of subjects: ";
    cin >> totalSubjects;

    vector<Subject> subjectList;
    getSubjectInfo(subjectList, totalSubjects);

    int userChoice;
    do
    {
        cout << "Select an option:" << endl;
        cout << "1. View grades for each subject" << endl;
        cout << "2. Calculate semester GPA" << endl;
        cout << "3. Calculate CGPA" << endl;
        cout << "4. Exit" << endl;
        cin >> userChoice;

        if (userChoice == 1)
            showSubjectGrades(subjectList, totalSubjects);
        else if (userChoice == 2)
        {
            float semesterGPA = calculateSemesterGPA(subjectList, totalSubjects);
            cout << "Your GPA for this semester is: " << semesterGPA << endl;
        }
        else if (userChoice == 3)
        {
            float CGPA = calculateSemesterGPA(subjectList, totalSubjects);  // Simplified CGPA calculation
            cout << "Your CGPA is: " << CGPA << endl;
        }
        else if (userChoice == 4)
            break;
        else
        {
            cout << "Invalid input! Please try again." << endl;
        }
    } while (userChoice != 4);

    return 0;
}

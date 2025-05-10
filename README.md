# CGPA-Calculator-C-Console-Application
Project Overview

The CGPA Calculator is a console-based application developed in C++ to assist students in calculating their Semester GPA and Cumulative GPA (CGPA). It provides a simple, menu-driven interface where users can input their academic information and receive accurate GPA calculations based on letter grades and credit hours.

Key Features
Input of subject names, letter grades, and credit hours

Conversion of letter grades to GPA points (4.0 scale)

Semester GPA calculation

CGPA calculation (simplified as same as semester GPA)

Option to view GPA for individual subjects

Easy-to-navigate menu interface

How It Works
Upon starting the program, the user is prompted to enter their name, semester number, and the number of subjects they are enrolled in. For each subject, the user provides the subject name, letter grade (such as A, B+, C-), and the number of credit hours. The application uses a conversion function to transform the letter grade into GPA points using the standard 4.0 GPA scale.

These GPA points are multiplied by the respective credit hours to calculate total grade points. The program then calculates the semester GPA by dividing the total grade points by the total number of credits. The CGPA is displayed using the same value in this simplified version.

Grade Conversion Logic
The program includes a dedicated function that converts letter grades to numeric GPA points:

A = 4.0

A− = 3.7

B+ = 3.3

B = 3.0

B− = 2.7

C+ = 2.3

C = 2.0

C− = 1.7

D+ = 1.3

D = 1.0

F = 0.0

Program Structure
Struct Subject: Holds subject name, GPA points, and credit hours

Vector subjectList: Stores all entered subjects

Functions:

letterGradeToGPA() – Converts letter grades to GPA points

getSubjectInfo() – Collects subject data from user input

calculateSemesterGPA() – Computes weighted average GPA

showSubjectGrades() – Displays GPA for each subject

User Menu Options
View grades for each subject – Displays the GPA points for each course

Calculate semester GPA – Calculates and shows the GPA for current semester

Calculate CGPA – Displays cumulative GPA (same as semester GPA in this version)

Exit – Ends the program

Technology Used
Language: C++

Concepts: Structures, Vectors, Functions, Conditional Logic, Loops

Future Enhancements (Suggestions)
Store previous semester data to calculate accurate CGPA

Export GPA report to a file

Add support for real-time GPA tracking across multiple semesters

GUI-based version using Qt or other frameworks


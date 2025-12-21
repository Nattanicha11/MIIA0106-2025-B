#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to display formatted student data
void displayStudentInfo(string name, string id, double score, char grade) {
    cout << "\n---------------------------" << endl;
    cout << "Student Name : " << name << "\n";
    cout << "Student ID   : " << id << "\n";
    cout << "Score        : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade        : " << grade << "\n";
    cout << "---------------------------" << endl;
}

// Function to determine grade based on score (Pass-by-reference)
void calculateGrade(double score, char& grade) {
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}


    int main()
    {
        const int N = 3; // students
        const int M = 4; // subjects

        string name[N], id[N];
        double score[N][M];
        double total[N];
        char grade[N];

     // TODO: วนรับ name/id
    for (int i = 0; i < N; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, name[i]);
        cout << "Enter ID of student " << (i + 1) << ": ";
        getline(cin, id[i]);
        total[i] = 0; // Initialize total score for each student
        // รับคะแนน M วิชา
        for (int j = 0; j < M; j++) {
            cout << "Enter score for subject " << (j + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j]; // รวมคะแนน
        }
        cin.ignore(); // Clear newline character from input buffer
        // คำนวณเกรด
        calculateGrade(total[i] / M, grade[i]); // Average score for grade calculation
	}   
    // TODO: nested loop รับคะแนน M วิชา + รวม total[i]
    // TODO: calculateGrade(total[i], grade[i]);

    // TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);
    cout << "\n\n--- DISPLAYING ALL RECORDS ---" << endl;
    for (int i = 0; i < N; i++) {
		displayStudentInfo(name[i], id[i], total[i] / M, grade[i]); // Average score for display
    }

    return 0;
}
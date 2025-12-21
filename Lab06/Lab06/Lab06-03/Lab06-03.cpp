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
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline
    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];
    // TODO: วนรับข้อมูล size คน
    // TODO: calculateGrade(score[i], grade[i]);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin, name[i]);
        cout << "Enter student " << i + 1 << " ID: ";
        cin >> id[i];
        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];
        cin.ignore(); // เคลียร์ newline ก่อน getline ครั้งถัดไป
        cout << "\n";
        calculateGrade(score[i], grade[i]);
    }
    // TODO: วนแสดงผล size คน ด้วย displayStudentInfo
    for (int i = 0; i < size; i++)
    {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
        cout << "\n";
    }

    // TODO: delete[] ให้ครบทุกตัวแปร
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;
    return 0;
}

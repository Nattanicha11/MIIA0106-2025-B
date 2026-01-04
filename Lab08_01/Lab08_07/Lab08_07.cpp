
#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;

};
struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {

	string id;
	string nickname;
	string lineid;
	Phone myContact;
	Parent myParent;

};



int main() {
	Student student;
	cout << "=== Input Student information ===\n";

	cout << "Enter ID: ";
	cin >> student.id;
	cout << "Enter Nickname: ";
	cin >> student.nickname;
	cout << "Enter Line ID: ";
	cin >> student.lineid;
	cout << "Enter Mobile Phone: ";
	cin >> student.myContact.mobile;
	cout << "Enter Home Phone: ";
	cin >> student.myContact.home;
	cout << "Enter Parent Name: ";
	cin >> student.myParent.name;
	cout << "Enter Parent Relationship: ";
	cin >> student.myParent.relationship;
	cout << "Enter Parent Mobile Phone: ";
	cin >> student.myParent.contact.mobile;
	cout << "Enter Parent Home Phone: ";
	cin >> student.myParent.contact.home;


	cout << "\n=== Output Student information ===\n";

	cout << "ID: " << student.id << endl;
	cout << "Nickname: " << student.nickname << endl;
	cout << "Line ID: " << student.lineid << endl;
	cout << "Mobile Phone: " << student.myContact.mobile << endl;
	cout << "Home Phone: " << student.myContact.home << endl;
	cout << "Parent Name: " << student.myParent.name << endl;
	cout << "Parent Relationship: " << student.myParent.relationship << endl;
	cout << "Parent Mobile Phone: " << student.myParent.contact.mobile << endl;
	cout << "Parent Home Phone: " << student.myParent.contact.home << endl;


	return 0;
}
#include <iostream>
using namespace std;
class Student
{
public:
    int roll_number;
    long long telePhoneNumber, DrivingLicenseNumber;
    string name, std, division, DateOfBirth, BloodGroup, CtAddress;
    friend class Faculty;
    Student()
    {
        this->roll_number = 0;
        this->DrivingLicenseNumber = 0;
        this->telePhoneNumber = 0;
        this->name = "Student";
        this->std = "not filled";
        this->division = "not filled";
        this->DateOfBirth = "not filled";
        this->BloodGroup = "not filled";
        this->CtAddress = "not filled";
    }

    Student(int roll_number, long long number, long long DrivingLicenseNumber, string name, string std, string division, string DateOfBirth, string BloodGroup, string CtAddress)
    {
        this->roll_number = roll_number;
        this->telePhoneNumber = number;
        this->name = name;
        this->std = std;
        this->division = division;
        this->DateOfBirth = DateOfBirth;
        this->BloodGroup = BloodGroup;
        this->CtAddress = CtAddress;
        this->DrivingLicenseNumber = DrivingLicenseNumber;
    }
    ~Student() { cout << "\nDestructor executed of class student"; }
    void addStudent()
    {
        cout << "Enter the roll number   of the student  to add  to the  list of students" << endl;
        cin >> this->roll_number;
        cout << "Enter the name of the student to add to the list of students " << endl;
        cin.ignore();
        getline(cin, this->name);
        cout << "Enter the year of studying the student " << endl;
        cin >> this->std;
        cout << "enter the division of the student " << endl;
        cin >> this->division;
        cout << "enter the date of the birth if the student " << endl;
        cin >> this->DateOfBirth;
        cout << "Enter the blood group of the student " << endl;
        cin >> this->BloodGroup;
        cout << "enter the telephone number of the student " << endl;
        cin >> this->telePhoneNumber;
        cout << "enter the address of the student " << endl;
        cin.ignore();
        getline(cin, this->CtAddress);
        cout << "enter the driving license number of student" << endl;
        cin >> this->DrivingLicenseNumber;
    }
    void displayData()
    {
        cout << "------------------------------------------------------------------------" << endl;
        cout << "----------------------------STUDENT INFORMATION--------------------------" << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "| ROLL NUMBER        : " << this->roll_number << endl;
        cout << "| NAME               : " << this->name << endl;
        cout << "| YEAR OF STUDY      : " << this->std << endl;
        cout << "| DIVISION           : " << this->division << endl;
        cout << "| DATE OF BIRTH      : " << this->DateOfBirth << endl;
        cout << "| BLOOD GROUP        : " << this->BloodGroup << endl;
        cout << "| TELEPHONE NUMBER   : " << this->telePhoneNumber << endl;
        cout << "| ADDRESS            : " << this->CtAddress << endl;
        cout << "| DRIVING LICENSE NO.: " << this->DrivingLicenseNumber << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "----------------------------STUDENT INFORMATION--------------------------" << endl;
        cout << "------------------------------------------------------------------------" << endl;
    }
};

class Faculty
{
public:
    void showDataFacWise(string divChoise, Student &student)
    {
        if (student.division == divChoise)
        {
            student.displayData();
        }
    }
};
int main()
{
    int counter = 0;
    Student student[10];
    int choise;

    while (1)
    {
        cout << "----------------------------------------------------------------" << endl;
        cout << "--------              -ENTER YOUR CHOICE               --------" << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << "1) ADD STUDENT\n2) DISPLAY STUDENT LIST\n 3)DISPLAY FACULTY WISE LIST\n4) EXIT";
        cout << "----------------------------------------------------------------" << endl;
        cout << "--------             WELCOME TO STUDENT DATABASE       --------" << endl;
        cout << "----------------------------------------------------------------" << endl;
        cin >> choise;
        string divChoise;
        switch (choise)
        {
        case 1:
            cout << "you have selected option 1" << endl;
            student[counter].addStudent();
            counter++;
            break;
        case 2:
            cout << "you have selected option 2" << endl;
            for (int i = 0; i < counter; i++)
            {
                student[i].displayData();
            }
            break;
        case 3:
            // string divChoise;
            cout << "you have selected option 3" << endl;
            Faculty f;
            cout << "As you are accessing data as an faculty which division data you want to access" << endl;
            cin >> divChoise;
            for (int i = 0; i < counter; i++)
            {
                f.showDataFacWise(divChoise, student[i]);
            }
            break;

        case 4:
            cout << "you have selected to exit Student database system" << endl;
            cout << "exiting........ " << endl;
            break;
        }
        if (choise == 4)
        {
            break;
        }
    }

    return 0;
}
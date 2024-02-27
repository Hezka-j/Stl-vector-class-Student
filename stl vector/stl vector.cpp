#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

/// <summary>
/// Represents a date with day, month, and year.
/// </summary>
class Date {
    unsigned short day; ///< <summary>Day of the date.</summary>
    unsigned short month; ///< <summary>Month of the date.</summary>
    long long year; ///< <summary>Year of the date.</summary>
public:
    /// <summary>
    /// Default constructor, sets the date to December 23, 2023.
    /// </summary>
    Date() : Date(23, 12, 2023) {}

    /// <summary>
    /// Parameterized constructor with day, month, and year.
    /// </summary>
    /// <param name="day">The day of the date.</param>
    /// <param name="month">The month of the date.</param>
    /// <param name="year">The year of the date.</param>
    Date(unsigned short day, unsigned short month, long long year);

    /// <summary>
    /// Parameterized constructor with day and month, sets the year to 2005.
    /// </summary>
    /// <param name="day">The day of the date.</param>
    /// <param name="month">The month of the date.</param>
    Date(unsigned short day, unsigned short month) : Date(day, month, 2005) {}

    /// <summary>
    /// Prints the date in the format "day.month.year".
    /// </summary>
    void PrintDate() const;

    /// <summary>
    /// Sets the day of the date.
    /// </summary>
    /// <param name="day">The day to set.</param>
    void SetDay(unsigned short day);

    /// <summary>
    /// Gets the day of the date.
    /// </summary>
    /// <returns>The day of the date.</returns>
    unsigned short GetDay() const;

    /// <summary>
    /// Sets the month of the date.
    /// </summary>
    /// <param name="month">The month to set.</param>
    void SetMonth(unsigned short month);

    /// <summary>
    /// Gets the month of the date.
    /// </summary>
    /// <returns>The month of the date.</returns>
    unsigned short GetMonth() const;

    /// <summary>
    /// Sets the year of the date.
    /// </summary>
    /// <param name="year">The year to set.</param>
    void SetYear(long long year);

    /// <summary>
    /// Gets the year of the date.
    /// </summary>
    /// <returns>The year of the date.</returns>
    long long GetYear() const;
};

/// <summary>
/// Represents a student with personal information and grades.
/// </summary>
class Student {
private:
    string surname; ///< <summary>Surname of the student.</summary>
    string name; ///< <summary>Name of the student.</summary>
    string middlename; ///< <summary>Middle name of the student.</summary>
    string adress; ///< <summary>Address of the student.</summary>
    string phonenumber; ///< <summary>Phone number of the student.</summary>
    // unsigned int countpractic = 0; ///< <summary>Count of practical grades.</summary>
    /*unsigned int counthomework = 0; ///< <summary>Count of homework grades.</summary>
    unsigned int countexam = 0; /*///< <summary>Count of exam grades.</summary>
    vector<int> grade_of_practic; ///< <summary>Array of practical grades.</summary>
    vector<int> grade_of_homework; ///< <summary>Array of homework grades.</summary>
    vector<int> grade_of_exam; ///< <summary>Array of exam grades.</summary>

public:
    /// <summary>
    /// Copy constructor, creates a deep copy of the original student.
    /// </summary>
    /// <param name="original">The original student to copy.</param>
    Student(const Student& original);

    /// <summary>
    /// Default constructor with default values for personal information.
    /// </summary>
    Student();

    /// <summary>
    /// Parameterized constructor with personal information.
    /// </summary>
    /// <param name="surname">The surname of the student.</param>
    /// <param name="name">The name of the student.</param>
    /// <param name="middlname">The middle name of the student.</param>
    /// <param name="adress">The address of the student.</param>
    /// <param name="phonenumber">The phone number of the student.</param>
    Student(string surname, string name, string middlname, string adress, string phonenumber);

    /// <summary>
    /// Parameterized constructor with personal information, sets the default phone number.
    /// </summary>
    /// <param name="surname">The surname of the student.</param>
    /// <param name="name">The name of the student.</param>
    /// <param name="middlname">The middle name of the student.</param>
    /// <param name="adress">The address of the student.</param>
    Student(string surname, string name, string middlname, string adress);

    /// <summary>
    /// Destructor, frees allocated memory for grades arrays.
    /// </summary>
    ~Student();

    /// <summary>
    /// Prints the personal information of the student.
    /// </summary>
    void PrintStudent() const;

    /// <summary>
    /// Adds a practical grade to the student.
    /// </summary>
    /// <param name="newcountry">The new practical grade to add.</param>
    void AddPractic(int newcountry);

    /// <summary>
    /// Prints all practical grades of the student.
    /// </summary>
    void PrintPractic() const;

    /// <summary>
    /// Gets the practical grade at the specified index.
    /// </summary>
    /// <param name="index">The index of the practical grade to get.</param>
    /// <returns>The practical grade at the specified index.</returns>
    int GePracticRatesCount(unsigned int index) const;

    /// <summary>
    /// Adds a homework grade to the student.
    /// </summary>
    /// <param name="newcountry">The new homework grade to add.</param>
    void AddHomeWork(int newcountry);

    /// <summary>
    /// Prints all homework grades of the student.
    /// </summary>
    void PrintHomeWork() const;

    /// <summary>
    /// Gets the homework grade at the specified index.
    /// </summary>
    /// <param name="index">The index of the homework grade to get.</param>
    /// <returns>The homework grade at the specified index.</returns>
    int GetHomeWorkRatesCount(unsigned int index) const;

    /// <summary>
    /// Adds an exam grade to the student.
    /// </summary>
    /// <param name="newcountry">The new exam grade to add.</param>
    void AddExam(int newcountry);

    /// <summary>
    /// Prints all exam grades of the student.
    /// </summary>
    void PrintExam() const;

    /// <summary>
    /// Gets the exam grade at the specified index.
    /// </summary>
    /// <param name="index">The index of the exam grade to get.</param>
    /// <returns>The exam grade at the specified index.</returns>
    int GetExamRatesCount(unsigned int index) const;

    /// <summary>
    /// Sets the surname of the student.
    /// </summary>
    /// <param name="surname">The new surname to set.</param>
    void SetSurname(string surname);

    /// <summary>
    /// Gets the surname of the student.
    /// </summary>
    /// <returns>The surname of the student.</returns>
    string GetSurname() const;

    /// <summary>
    /// Sets the name of the student.
    /// </summary>
    /// <param name="name">The new name to set.</param>
    void SetName(string name);

    /// <summary>
    /// Gets the name of the student.
    /// </summary>
    /// <returns>The name of the student.</returns>
    string GetName() const;

    /// <summary>
    /// Sets the middle name of the student.
    /// </summary>
    /// <param name="middlname">The new middle name to set.</param>
    void SetMiddlName(string middlname);

    /// <summary>
    /// Gets the middle name of the student.
    /// </summary>
    /// <returns>The middle name of the student.</returns>
    string GetMiddlName() const;

    /// <summary>
    /// Sets the address of the student.
    /// </summary>
    /// <param name="adress">The new address to set.</param>
    void SetAdress(string adress);

    /// <summary>
    /// Gets the address of the student.
    /// </summary>
    /// <returns>The address of the student.</returns>
    string GetAdress() const;

    /// <summary>
    /// Sets the phone number of the student.
    /// </summary>
    /// <param name="phonenumber">The new phone number to set.</param>
    void SetPhone(string phonenumber);

    /// <summary>
    /// Gets the phone number of the student.
    /// </summary>
    /// <returns>The phone number of the student.</returns>
    string GetPhone() const;
};

Date::Date(unsigned short day, unsigned short month, long long year) {
    SetDay(day);
    SetMonth(month);
    SetYear(year);
}

void Date::PrintDate() const {
    cout << day << "." << month << "." << year << "\n";
}

void Date::SetDay(unsigned short day) {
    if (day == 0 || day > 31) throw "ERROR!!! The day must be from 0 to 31 !!!";
    this->day = day;
}

unsigned short Date::GetDay() const {
    return day;
}

void Date::SetMonth(unsigned short month) {
    if (month == 0 || month > 12) throw "ERROR!!! The day must be from 1 to 12 !!!";
    this->month = month;
}

unsigned short Date::GetMonth() const {
    return month;
}

void Date::SetYear(long long year) {
    this->year = year;
}

long long Date::GetYear() const {
    return year;
}

Student::Student(const Student& original) {
    this->surname = original.surname;
    this->name = original.name;
    this->middlename = original.middlename;
    this->adress = original.adress;
    this->phonenumber = original.phonenumber;
    // this->countpractic = original.countpractic;
    grade_of_homework = original.grade_of_homework;
    grade_of_exam = original.grade_of_exam;
    grade_of_practic = original.grade_of_practic;

    /*this->grade_of_practic = new int[original.countpractic];
    for (int i = 0; i < countpractic; i++) {
        this->grade_of_practic[i] = original.grade_of_practic[i];
    }*/

   /* this->grade_of_homework = new int[original.counthomework];
    for (int i = 0; i < counthomework; i++) {
        this->grade_of_homework[i] = original.grade_of_homework[i];
    }

    this->grade_of_exam = new int[original.countexam];
    for (int i = 0; i < countexam; i++) {
        this->grade_of_exam[i] = original.grade_of_exam[i];
    }*/
}

Student::Student() : Student("Studenchenko", "Student", "Studentovich", "Studencheskaya 38", "0630300033") {}

Student::Student(string surname, string name, string middlname, string adress) :Student(surname, name, middlename, adress, "0687680685") {}

Student::Student(string surname, string name, string middlname, string adress, string phonenumber)
{
    cout << "MAIN C-TOR\n";
    SetSurname(surname);
    SetName(name);
    SetMiddlName(middlname);
    SetAdress(adress);
    SetPhone(phonenumber);
}

Student::~Student() {
    //if (grade_of_practic != nullptr)
    //    delete[] grade_of_practic;
   /* if (grade_of_homework != nullptr)
        delete[] grade_of_homework;
    if (grade_of_exam != nullptr)
        delete[] grade_of_exam;*/
}

void Student::PrintStudent() const {
    cout << "Surname: " << surname << "\n";
    cout << "Name: " << name << "\n";
    cout << "Midlname: " << middlename << "\n";
    cout << "Adress: " << adress << "\n";
    cout << "Phonnumber: " << phonenumber << "\n";
}

void Student::AddPractic(int new_practic_rate) {

    grade_of_practic.push_back(new_practic_rate);

    /* int* temp = new int[countpractic + 1];
     for (int i = 0; i < countpractic; i++) {
         temp[i] = grade_of_practic[i];
     }

     temp[countpractic] = newcountry;
     countpractic++;
     delete[]grade_of_practic;
     grade_of_practic = temp;*/
}

void Student::PrintPractic() const {
    for (int i = 0; i < grade_of_practic.size(); i++) {
        cout << grade_of_practic[i] << ", ";
    }
}

int Student::GePracticRatesCount(unsigned int index) const {
    return grade_of_practic.at(index); // более безопасный вариант доступа к элементу массива на чтение (если индекс некорректный, то возникнет исключение - КОТОРОЕ КЛИЕНТ СМОЖЕТ ПЕРЕХВАТИТЬ на своей стороне с помощью try catch
    // return grade_of_practic[index]; // здесь также возникает исключение, но оно стандартное, и его обычными средствами С++ нельзя перехватить
}

void Student::AddHomeWork(int newcountry) {
    /*int* temp = new int[counthomework + 1];
    for (int i = 0; i < counthomework; i++) {
        temp[i] = grade_of_homework[i];
    }
    temp[counthomework] = newcountry;
    counthomework++;
    delete[]grade_of_homework;
    grade_of_homework = temp;*/
    grade_of_homework.push_back(newcountry);
}

void Student::PrintHomeWork() const {
    int size = grade_of_homework.size();
    for (int i = 0; i < size; i++) {
        cout << grade_of_homework[i] << ", ";
    }
}

int Student::GetHomeWorkRatesCount(unsigned int index) const {
    if (index < grade_of_homework.size()) {
        return grade_of_homework[index];
    }
}

void Student::AddExam(int newcountry) {
    /*int* temp = new int[countexam + 1];
    for (int i = 0; i < countexam; i++) {
        temp[i] = grade_of_exam[i];
    }
    temp[countexam] = newcountry;
    countexam++;
    delete[]grade_of_exam;
    grade_of_exam = temp;*/
    grade_of_exam.push_back(newcountry);
}

void Student::PrintExam() const {
    int size = grade_of_exam.size();
    for (int i = 0; i < size; i++) {
        cout << grade_of_exam[i] << ", ";
    }
}

int Student::GetExamRatesCount(unsigned int index) const {

    if (index < grade_of_exam.size()) {
        return grade_of_exam[index];
    }
}

void Student::SetSurname(string surname) {
    this->surname = surname;
}

string Student::GetSurname() const {
    return surname;
}

void Student::SetName(string name) {
    this->name = name;
}

string Student::GetName() const {
    return name;
}

void Student::SetMiddlName(string middlname) {
    this->middlename = middlname;
}

string Student::GetMiddlName() const {
    return middlename;
}

void Student::SetAdress(string adress) {
    this->adress = adress;
}

string Student::GetAdress() const {
    return adress;
}

void Student::SetPhone(string phonenumber) {
    this->phonenumber = phonenumber;
}

string Student::GetPhone() const {
    return phonenumber;
}

int main() {

    Student original;

    original.AddHomeWork(5);

    original.PrintStudent();
    original.PrintPractic();
    original.PrintHomeWork();
}
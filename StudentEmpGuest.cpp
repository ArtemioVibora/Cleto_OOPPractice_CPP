#include <iostream>

using namespace std;

class Person
{

private:

    string name;
    int age;
    string nationality;
    string language;

public:

    Person() : name(""), age(0), nationality(""), language("") {}
    Person(string name, int age, string nationality, string language) : name(name), age(age), nationality(nationality), language(language) {}

    void setName(const string& newName)
    {
        name = newName;
    }

    void setAge(const int& newAge)
    {
        age = newAge;
    }
    
    void setNationality(const string& newNationality)
    {
        nationality = newNationality;
    }

    void setLanguage(const string& newLanguage)
    {
        language = newLanguage;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    string getNationality() const
    {
        return nationality;
    }

    string getLanguage() const
    {
        return language;
    }

    void display() const
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Nationality: " << getNationality() << endl;
        cout << "Language: " << getLanguage() << endl;
    }

};

class Student : public Person
{

private:
    int studentNumber;
    string schoolName;
    double gwa;

public:
    Student() : Person(), studentNumber(0), schoolName(""), gwa(0) {}
    Student(string name, int age, string nationality, string language, int studentNumber, string schoolName, double gwa) :
    Person(name, age, nationality, language), studentNumber(studentNumber), schoolName(schoolName), gwa(gwa) {}

    void setStudentNumber(const int& newStudentNumber)
    {
        studentNumber = newStudentNumber;
    }

    void setSchoolName(const string& newSchoolName)
    {
        schoolName = newSchoolName;
    }

    void setGWA(const double& newGWA)
    {
        gwa = newGWA;
    }

    int getStudentNumber() const
    {
        return studentNumber;
    }

    string getSchoolName() const
    {
        return schoolName;
    }

    double getGWA() const
    {
        return gwa;
    }

    void display() const
    {
        Person::display();
        cout << "Student Number: " << getStudentNumber() << endl;
        cout << "School: " << getSchoolName() << endl;
        cout << "GWA: " << getGWA() << endl;
    }

};

class Employee : Person
{

private:

    int empID;
    string job;
    double salary;

public:

    Employee() : Person(), empID(0), job(""), salary(0) {}
    Employee(string name, int age, string nationality, string language, int empID, string job, double salary) : Person(name, age, nationality, language),
    empID(empID), job(job), salary(salary) {} 

    void setEmpID(const int& newEmpID)
    {
        empID = newEmpID;
    }

    void setJob(const string& newJob)
    {
        job = newJob;
    }

    void setSalary(const double& newSalary)
    {
        salary = newSalary;
    }

    int getEmpID() const
    {
        return empID;
    }

    string getJob() const
    {
        return job;
    }

    double getSalary() const
    {
        return salary;
    }

    void display() const
    {
        Person::display();
        cout << "Employee ID: " << getEmpID() << endl;
        cout << "Job: " << getJob() << endl;
        cout << "Salary: " << getSalary() << endl;
    }


};

class Guest : Person
{

private:
    string purposeOfVisit;

public:
    Guest() : Person(), purposeOfVisit("") {}
    Guest(string name, int age, string nationality, string language, string purposeOfVisit) : Person(name, age, nationality, language),
    purposeOfVisit(purposeOfVisit) {}

    void setPurposeOfVisit(const string& newPurposeOfVisit)
    {
        purposeOfVisit = newPurposeOfVisit;
    }

    string getPurposeOfVisit() const
    {
        return purposeOfVisit;
    }

    void display() const
    {
        Person::display();
        cout << "Purpose Of Visit: " << getPurposeOfVisit() << endl;
    }


};

int main()
{
    Student student("Amado", 19, "Filipino", "Filipino", 1912, "Iacademy", 2.00);
    student.display();
    cout << endl;
    Employee emp("Bob", 19, "American", "English", 19223, "Tutor", 19000);
    emp.display();
    cout << endl;
    Guest guest("Michael", 99, "Fil-Am", "Carabao-English", "Visiting Idk");
    guest.display();

    return 0;
}

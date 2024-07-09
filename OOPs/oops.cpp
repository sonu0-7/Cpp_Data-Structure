#include <iostream>
using namespace std;

class Teacher
{
private:
    int salary;

public:
    string name;
    string subject;

    Teacher(string name, string subject, int salary)
    { // constructor
        this->name = name;
        this->subject = subject;
        this->salary = salary;
    }

    ~Teacher()
    { // Destructor
    }

    void setInfo(string name, string subject, int salary)
    {
        this->name = name;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo()
    {
        cout << "name: " << name << " subject: " << subject << " salary: " << salary << endl;
    }
};

int main()
{

    Teacher t1("sonu", "maths", 35000);
    // t1.setInfo("sonu", "maths", 35000);
    t1.getInfo();

    return 0;
}
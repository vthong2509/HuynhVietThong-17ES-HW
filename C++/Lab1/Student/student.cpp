#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
private:
    string name;
    long id;
    double mathMark, englishMark, physicsMark, chemistryMark;
public:
    Student(string name, long id)
    {
        this->name= name;
        this->id= id;
    }
    void setMathMark(double value)
    {
        if(value>0 && value<=100)
            mathMark= value;
    }
    void setEnglishMark (double value)
    {
        if(value> 0 && value<= 100)
            englishMark= value;
    }
    void setPhysicsMark (double value)
    {
        if(value> 0 && value<= 100)
            physicsMark= value;
    }
    void setChemistryMark (double value)
    {
        if(value> 0 && value<= 100)
            chemistryMark= value;
    }
    double getAverage()
    {
        double result;
        result = (mathMark + englishMark + physicsMark + chemistryMark)/4;
        return result;
    }
    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Average:" << getAverage() << endl;
    }
};


int main()
{
    Student std("Haim",123123);
    std.setChemistryMark(98);
    std.setEnglishMark(88);
    std.setPhysicsMark(78);
    std.setMathMark(100);
    std.displayDetails();
}

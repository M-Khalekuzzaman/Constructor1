#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    int id;
    double cgpa;
    void display()
    {
        cout<<  id << "   "<< cgpa <<endl;
    }
    Student(int x, double y)
    {
        id = x;
        cgpa = y;
    }

};
int main()
{
    Student kaochar(101,3.92);
    kaochar.display();

    Student shakib(102,3.52);
    shakib.display();

    getch();
}


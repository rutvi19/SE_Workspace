#include <iostream>
using namespace std;

class person
{
	public:
    string name;
    int age;
};
class teacher : public person
{
    public:
    string add;
    int sal;

    int display()
    {
        cout << "enter name : ";
        cin >> name;
        cout << "enter age : ";
        cin >> age;
        cout << "enter address : ";
        cin >> add;
        cout << "enter salery : ";
        cin >> sal;
    }
};

class student : public person
{
    public:
    string name1;
    int rollno;

    int display()
    {
        
        cout << "enter name of student : ";
        cin >> name1;
        cout << "enter name : ";
        cin >> rollno;
    }
};

int main()
{
    teacher t = teacher();
    student s = student();

    t.display();
    s.display();
}

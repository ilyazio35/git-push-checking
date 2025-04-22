#include <iostream>
using namespace std;
class student {
private:
    string name;
    string section;
    double enrollment;
    double marks;
public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter section: ";
        cin >> section;
        cout << "Enter enrollment number: ";
        cin >> enrollment;
        cout << "Enter marks: ";
        cin >> marks;
    }
    student(): name(),section(),enrollment(),marks() {}
    string calculategrade() {
        if (marks>=90)
        return "A";
        else if(marks>=80)
            return "B";
        else if (marks>=70)
            return "C";
        else if(marks>=60)
            return "D";
        else if(marks>=50)
            return "D+";
        else
            return "F";

    }
    void display() {
        cout<<endl;
        cout<<"Student name :"<<name<<endl;
        cout<<"student section :"<<section<<endl;
        cout<<"student enrollment :"<<enrollment<<endl;
        cout<<"student marks :"<<marks<<endl;
        cout<<"Grade :"<<calculategrade()<<endl;
    }


};
int main() {
    student s1;
    s1.input();
    s1.display();

}
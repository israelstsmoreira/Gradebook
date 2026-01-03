#include<iostream>
#include<string>


using namespace std;

class Gradebook
{
    public:
        Gradebook (string name){
            setCourseName(name);
        }
        void setCourseName(string name){
            courseName = name;
        }
        string getCourseName(){
            return courseName;
        }
        void displayMessage(){
            cout << "Welcome to the grade book for\n" << getCourseName()<<"!" << endl;
        }
    private:
        string courseName;
};
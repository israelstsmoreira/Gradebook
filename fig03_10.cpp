#include<iostream>
#include"Gradebook.h"

using namespace std;


int main(){
    Gradebook gradeBook1("Engenharia de sistemas");
    Gradebook gradeBook2("Analise e desenvolvimento de sistemas");


    cout << " gradebook1 created for course: " << gradeBook1.getCourseName() << endl;
    cout << "gradebook2 created for course: " << gradeBook2.getCourseName() << endl;


    return 0;
}
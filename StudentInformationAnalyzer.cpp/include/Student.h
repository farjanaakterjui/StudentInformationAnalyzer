#ifndef STUDENT_H
#define STUDENT_H
#include<bits/stdc++.h>
#include<string>
#include<sstream>

using namespace std;

class Student
{
    public:

    Student(string studentInformation);
    string get_firstname();
    string get_lastname();
    string get_name();
    int get_id();
    double get_mark();

        //virtual ~Student();

    //protected:

    private:
        string firstname;
        string lastname;
        int id;
        double mark;
};

#endif // STUDENT_H

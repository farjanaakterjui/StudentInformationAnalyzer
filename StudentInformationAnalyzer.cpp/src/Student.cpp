#include "Student.h"

Student::Student(string studentInformation)
{
    //ctor
    stringstream studentstream(studentInformation);
    studentstream>>firstname;
    studentstream>>lastname;
    studentstream>>id;
    studentstream>>mark;
}
string Student:: get_firstname()
{
    return firstname;
}
string Student:: get_lastname()
{
    return lastname;
}
string Student:: get_name()
{
    return firstname+" "+lastname;
}

int Student::get_id()
{
    return id;
}
double  Student::get_mark()
{
    return mark;
}
/*Student::~Student()
{
    //dtor
}
*/

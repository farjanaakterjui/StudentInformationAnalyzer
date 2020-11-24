#include <iostream>

#include"conf.h"
#include"Student.h"
using namespace std;

int main()
{
   //Student student("Sayeda Jaman 3457 88.9");
    string s;
    getline(cin,s);
   Student student(s);
conf(s);

  /* cout<<"Name: "<<student.get_name()<<endl;
    cout<<"Id: "<<student.get_id()<<endl;
     cout<<"Mark: "<<student.get_mark()<<endl;*/
   return 0;
}

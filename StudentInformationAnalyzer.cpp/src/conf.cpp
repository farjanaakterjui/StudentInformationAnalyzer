#include "conf.h"

conf::conf(string a)
{
    //ctor
    ifstream fin("students.txt");
    string line;
    int f=0;
    while(getline(fin,line))
    {
        //string line = "MRX 10 cse";
        stringstream sin(line);

        string firstname,lastname;
        int id ;
        double mark;
        sin>> firstname>>lastname>>id>>mark;
        if(a== firstname||a==lastname)
            f=1;

    }
    if(f)
    {
        cout<<"Name: "<<student.get_name()<<endl;
        cout<<"Id: "<<student.get_id()<<endl;
        cout<<"Mark: "<<student.get_mark()<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

}


/*conf::~conf()
{
    //dtor
}*/

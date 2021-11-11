#ifndef _shoe
#define _shoe

#include<string>

using namespace std;

class shoe
{
private:
    string gender;//men or vomen
    string model;
    string mark;
    string color;
public:
    shoe(string = "NULL", string = "NULL", string = "NULL", string = "NULL");
    //~shoe();
    void set_gender(string);
    string get_gender() const;

    void set_model(string);
    string get_model() const;

    //void set_mark(string);
    //string get_mark() const;felan lazem nist

    void set_color(string);
    string get_color() const;
};

#endif



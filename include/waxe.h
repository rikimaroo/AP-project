#ifndef _waxe
#define _waxe

#include<string>
using namespace std;

class waxe
{
private:
    string model;
    string mark;
    //string color;
public:
    waxe(string = "NULL", string = "NULL");
    ~waxe();
    
    void set_model(string type);
    string get_model() const;

    void set_mark(string);
    string get_mark() const;

    //void set_color(string);
    //string get_color() const;felan lazem nist 
};

#endif

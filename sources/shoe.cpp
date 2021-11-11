#include<iostream>
#include<bits/stdc++.h>
#include"shoe.h"

using namespace std;

shoe::shoe(string gen, string type, string brand, string name)
{
    set_gender(gen);
    set_model(type);
    //set_mark(brand);
    set_color(name);
}

void shoe::set_gender(string gen = "NULL")
{
    if (gen == "NULL")
    {
        cout << "noe kafsh ro entekhab konid" << endl
            << "1-men \n 2-feminien" << endl;
        
        cin >> gen;
    }
    
    transform(gen.begin(), gen.end(), gen.begin(), ::tolower);

    if (gen != "men" && gen != "feminien")
    {
        throw invalid_argument("invalid gender");
    }
    
    gender = gen;
}

string shoe::get_gender() const
{
    return gender;
}

void shoe::set_model(string type = "NULL")
{
    if (type == "NULL")
    {
        cout << "model kafsh ra entekhab konid..." << endl; 
        
        if (gender == "men")
        {
            cout << "1-oxford \n " << "2-kalej \n" << "3-sport" << endl;
        }
        else if (gender == "feminien")
        {
            cout << "1-pump \n " << "2-platform \n" << "3-sport" << endl;
        }

        cin >> type;
        transform(type.begin(), type.end(), type.begin(), ::tolower);
    }
    
    model = type;
}

string shoe::get_model() const
{
    return model;
}

/*void shoe::set_mark(string brand)
{
    mark = brand;
}

string shoe::get_mark() const
{
    return mark;
}*/

void shoe::set_color(string name = "NULL")
{
    if (name == "NULL")
    {
        cout << "rang kafsh ra entekhab konid..." << endl
             << "1-black \n" << "2-brown \n" << "3-white" << endl;
        cin >> name;
    }
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    if (name != "black" && name != "brown" && name != "white")
    {
        throw invalid_argument("invalid color shoe");
    }
    
    color = name;
}

string shoe::get_color() const
{
    return color;
}
//ilana suied
//324523141
//sadna c++
//this program receives 2 words and makes modifications to them
#pragma once
class MyString
{
private:
    int len;
    char* str;
public:
    MyString() : str(NULL), len(0) {} //explicit empty constructor
    MyString(const char* s); //constructor
    MyString(const MyString& ms); //copy constructor
    char* getString() const;
    void setString(const char* s);
    int getLen()const;
    void print() const;
    MyString insert(int index, const char* str);

    //assignment operator
    MyString& operator=(const MyString& ms); 
    bool operator==(const MyString& ms) const;
    char& operator[](int index);
    bool operator >( char* str);
    //bool operator>(const MyString&);  // This is right!!!
    bool operator <( char* str);
    bool operator <=( char* str);
    bool operator >=( char* str);
};

#include <iostream>
#include <cstring>
using namespace std;
class Negative_number 
{
public:
char str_what[80];
int what;
Negative_number(char *s, int e)
{
strcpy(str_what, s);
what = e;
}
};
class Divide_by_zero 
{
public:
char str_what[80];
int what;
Divide_by_zero(char *s, int e)
{
strcpy(str_what, s);
what = e;
}
};
int main()
{
int i,nr,dr;
try
{
cout << "Enter a positive number: ";
cin >> i;
if(i<0)
throw Negative_number("Not Positive", i);
}
catch (Negative_number e) 
{ // catch an error
cout << e.str_what << ": ";
cout << e.what << "\n";
}
try
{
cout << "Enter the value of numerator: ";
cin >> nr;
cout << "Enter the value of denominator: ";

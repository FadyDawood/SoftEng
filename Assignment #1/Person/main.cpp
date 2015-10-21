#include <iostream>
#include "Person.cpp"
using namespace std;

int main()
{
    Person a;
    Person b("Fady","Dawood");
    Person c("Dawood");
    b.Show();
    b.FormalShow();
    c.Show();
    c.FormalShow();
    return 0;
}

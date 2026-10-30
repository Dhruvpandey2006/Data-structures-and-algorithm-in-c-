// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not return anything
// return
// parameterised
// non parameterised

// Take two numbers and print their sum

#include <iostream>
using namespace std;

void printname(string name)
{
    cout << "Hey" << " " << name << endl;
}
int main()
{
    string name;
    cout<<"Enter the name 1:"<<" "<<endl;
    cin >> name;
    printname(name);

    string name2;
    cout<<"Enter the name 2:"<<" "<<endl;
    cin>>name;
    printname(name);

    return 0;
}
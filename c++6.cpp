
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age:"<<endl;
    cin >> age;
    if (age>=18)
    {
        cout << "You are an adult!" << endl;
    }
    else if(age<8)
    {
        cout << "You are not an adult!" << endl;
    }

    return 0;
}
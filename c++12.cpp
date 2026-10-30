#include <iostream>
using namespace std;
int main()
{
    string s = "striver";
    //cout<< s[2]<<endl;
    int len  = s.size();
    s[len - 1] = 'z';
    cout<<s[len -1]<<endl;

    return 0;
}
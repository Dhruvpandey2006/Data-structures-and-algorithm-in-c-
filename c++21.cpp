#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter the num1"<<endl;
    cin>>num1;
    cout<<"Enter the num2"<<endl;
    cin>>num2;
    int minimum = max(num1, num2);
    cout<<minimum;

return 0;

}
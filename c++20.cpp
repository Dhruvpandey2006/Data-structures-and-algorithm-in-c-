#include<iostream>
using namespace std;

void sum(int num1 , int num2){
    int num3 = num1 + num2;
    cout<<num3;
}
int main(){
    int num1, num2;
    cout<<"Enter num1"<<endl;
    cin>>num1;
    cout<<"Enter num2"<<endl; 
    cin>>num2;
    sum(num1, num2);

    return 0;
}
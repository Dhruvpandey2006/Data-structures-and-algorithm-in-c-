#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    arr[1][2] = 33;
    arr [2][2] = 34;
    cout<<arr[1][2]<<endl;
    cout<<arr[2][2]<<endl;

    return 0;
}
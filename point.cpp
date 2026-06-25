#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *b=&a;
    cout<<"address of a is"<<b<<endl;
    cout<<"address of a is"<<&a<<endl;
    cout<<"value of a is"<<*b<<endl;
    cout<<"value of a is"<<a<<endl;

    int **c=&b;
    cout<<"address of b is "<<c<<endl; 
    cout<<"address of b is "<<&b<<endl; 
    cout<<"value of b is "<<*c<<endl; 
    cout<<"value of b is "<<**c<<endl; 
    return 0;
}
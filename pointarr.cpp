#include<iostream>
using namespace std;

int main(){
    double marks[10]={3,9,6,8,1};
    double *p=marks;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(p +(i))<<endl;
    }
    

    return 0;
}
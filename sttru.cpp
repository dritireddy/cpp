#include<iostream>
using namespace std;
union student
{
    /* data */
    int rno;
    char name;
};


int main(){
    union student driti;
    driti.rno=123;
     driti.name='d';
    cout<<driti.rno<<endl<<driti.name;
    cout<<sizeof(string);
    return 0;
}
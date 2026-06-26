#include<iostream>
using namespace std;

void swap1(int a, int b){
 int temp=a;
 a=b;
 b=temp;
}
void swap2(int &a, int &b){
 int temp=a;
 a=b;
 b=temp;
}
void swap3(int *a, int *b){
 int temp=*a;
 *a=*b;
 *b=temp;
}
int main(){
    int a=4, b=5;
    cout<<"before swapping a="<<a<<" b="<<b<<endl;
    swap1(a,b);
    cout<<"after swapping a="<<a<<" b="<<b<<endl;
    // swap2(a,b);
    // cout<<"after swapping a="<<a<<" b="<<b<<endl;
    swap3(&a,&b);
    cout<<"after swapping a="<<a<<" b="<<b<<endl;
    return 0;
}
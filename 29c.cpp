#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
        complex(){
            a=7;
            b=4;
        }
        void print(){
            cout<<a<<"+i"<<b<<endl;
        }

};
int main(){
    complex c,v,f;
c.print();
v.print();
f.print();
    return 0;
}
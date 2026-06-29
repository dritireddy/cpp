#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setno(int x, int y){
        a=x;
        b=y;
    }
    friend complex sumc(complex x, complex y);
    void prnt(){
        cout<<a<<"+i"<<b<<endl;
    }
    // complex sumc(complex x, complex y){
    //       complex c4;
    //       c4.setno(x.a+y.a, x.b+y.b);
    //       return c4;
    // }
};
complex sumc(complex x, complex y){
          complex c4;
          c4.setno(x.a+y.a, x.b+y.b);
          return c4;
    }
int main(){
    complex c1,c2,c3;
    c1.setno(1,2);
    c2.setno(2,4);
    c1.prnt();
    c2.prnt();
    // c3=c3.sumc(c1,c2);
    c3=sumc(c1,c2);
        c3.prnt();

    return 0;
}
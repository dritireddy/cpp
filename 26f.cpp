#include<iostream>
using namespace std;
class y;
class x{
    int a;
    public:
    void setdata(int s){
            a=s;
    }
    friend void add(x,y);
};
class y{
    int b;
    public:
    void setdata(int s){
            b=s;
    }
    friend void add(x,y);
};
void add(x n,y m){
    cout<< n.a +m.b << endl;
}
int main(){
    x a;
    y b;
    a.setdata(5);
    b.setdata(20);
    add(a,b);
    return 0;
}
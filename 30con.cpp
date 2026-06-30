#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
        complex(int x, int y){
            a=x;
            b=y;
        }
        void print(){
            cout<<a<<"+i"<<b<<endl;
        }

};  
int main(){
    complex c1(4,3), c3(5,9),c2(2,5);
  c1.print();
  c2.print();
  c3.print();
    return 0;
}
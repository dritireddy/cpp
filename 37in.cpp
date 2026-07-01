#include<iostream>
using namespace std;
class emp
{
private:
    
public:
float salary;
  int id;
  emp(){}
    emp(int x){
        id=x;
         cout<<"enter salary"<<endl;
         cin>>salary;
    }
    void display(){
        cout<<"salary of "<<id<<"is :"<<salary<<endl;
    }

};
class prog: public emp{
    public:
    prog(int idno){
        id=idno;
        cout<<"enter salary"<<endl;
         cin>>salary;
     }
    void display(){
        cout<<"salary of "<<id<<"is :"<<salary<<endl;
    }

};
int main(){
    emp hi(12),ru(2);
    hi.display();
    ru.display();
    prog hu(15);
    hu.display();
    return 0;
}
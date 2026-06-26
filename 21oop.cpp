#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    int rno;
    string name;
public:
    int cl;
     void setdata(int r,string n);
    void getdata(){
        cout<<rno<<endl;
        cout<<cl<<endl;
        cout<<name;
    }
 
};
void student::setdata(int r , string n){
    name=n;
    rno=r;
}

int main(){
    student s1;
    s1.cl=42;
    s1.setdata(123, "bihari");
    s1.getdata();
    return 0;
}
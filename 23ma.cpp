#include<iostream>
using namespace std;
class shop{
    int item;
    int id[100];
    int cost[100];
    public:
    void setzero(){
            item=0;
    }
    void setprice(){
        cout<<"enter id"<<endl;
        cin>>id[item];
        cout<<"enter price"<<endl;
        cin>>cost[item];
        item++;
    }
    void display(){
        for (int i = 0; i < item ; i++)
        {
            cout<<"item id"<<id[i]<<"price is"<<cost[i]<<endl;
        }
        
    }
};
int main(){
    shop s;
    s.setzero();
    s.setprice();
    s.setprice();
    s.setprice();
    s.display();
    return 0;
}
#include<iostream>
using namespace std;
float total(float money, float per=1.04){
    return money*per;
}
int main(){
   float money=10000;
   cout<<"normal ppl"<<total(money)<<endl;
   cout<<"vip ppl"<<total(money,1.1)<<endl;

    return 0;
}
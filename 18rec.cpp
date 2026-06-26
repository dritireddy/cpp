#include<iostream>
using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     else return n*fact(n-1);
// }
int fib(int n){
    if (n==1||n==2)
    return 1;
    else {
        return fib(n-2)+fib(n-1);
    }
}
    int main(){
    int n;
    cin>>n;
   // cout<<fact(n);
   cout<<fib(n);
    return 0;
}
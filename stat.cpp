#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x";
    cin>>x;
    switch (x)
    {
    case 18:
        cout<<"you are allowed";
        break;
    
    default:
    cout<<"not allowed";
        break;
    }
    return 0;

}
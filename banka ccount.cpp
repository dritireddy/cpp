#include<iostream>
using namespace std;

class bankaccount{
	private:
		int balance;
	public:
		bankaccount(int b){balance=b;
		}
	friend class accountmanager;
};
class accountmanager{
	public:
		void display(bankaccount obj)
		{
			cout<<"balance="<<obj.balance;
		}
	    void add(bankaccount obj,int amount)
	    {
	    	obj.balance=obj.balance+amount;
	    	cout<<"balance="<<obj.balance<<endl;
		}
	    void deduct(bankaccount obj,int amount)
	    {
	    	obj.balance=obj.balance-amount;
	    	cout<<"balance="<<obj.balance<<endl;
		}
};

int main()
{
	bankaccount b(1000);
    accountmanager am;
    am.display(b);
    am.add(b,200); 
    am.deduct(b,100);
}

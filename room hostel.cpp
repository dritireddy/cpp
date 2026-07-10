#include<iostream>
using namespace std;

class hostelroom{
	private:
		int roomnumber;
		string name;
		bool isoccupied;
	public:
		hostelroom(int r){roomnumber=r;
		}
		void allocate(string n)
		{
			
			if (isoccupied==false)f
			
			{
			    name=n;
				isoccupied=true;
				cout<<"is occupied\n";
			}
			else cout<<"not occupied\n";
		}
	    void display(hostelroom obj)
		{
			cout<<"room number="<<obj.roomnumber;
			cout<<"student name="<<obj.name;
		}
};
int main()
{
	hostelroom r1(101), r2(102);
	r1.allocate("hans");
	r1.display(r1);
	r2.display(r2);
}

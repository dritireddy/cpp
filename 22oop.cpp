#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void setb();
    void checkb();
};
void binary::setb()
{
    cout << "enter a no" << endl;
    cin >> s;
}
void binary::checkb()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='0' && s[i]!='1')
        {
            cout << "not" << endl;
            return;
        }

    }
    cout << "binary" << endl;
}
int main()
{
    binary b ;
    b.setb();
    b.checkb();
    return 0;
}
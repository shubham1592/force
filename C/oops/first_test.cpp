#include <iostream>
using namespace std;

class student
{
public:
    string name;
    void display()
    {
        cout<<"hey, I'm "<<name<<"! Nice to meet you."<<endl;
    }
};
int main()
{
    student kid;
    cout<<"Enter my name: ";
    cin>>kid.name;
    kid.display();
}

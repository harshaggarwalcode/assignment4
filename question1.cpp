#include<iostream>
using namespace std;
class pets
{
public:
void a()
{
cout<<"hello you are in class pet"<<endl;
}
};
class dogs:public pets
{
public:
void b()
{
cout<<"you are in dog class"<<endl;
}
};
int main()
{
dogs e;
e.b();
e.a();
}


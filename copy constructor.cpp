#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		int y;
		A(int a,int b)
		{
			x=a;
			y=b;
		}
		A(A &i, A&j)
		{
			x=i.x;
			y=i.y;
		}
};
int main()
{
	A a1(10,70);
	A a2(a1);
	cout<<"Sum: "<<a2.x+a2.y;
}

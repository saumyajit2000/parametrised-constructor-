#include<iostream>
using namespace std;
class point
{
	public:
		int sum;
	point()
	{
		sum=0;
	}
	point(int x,int y)
	{
		sum=x+y;
	}
	int display()
	{
		cout<<"Sum: "<<sum;
	}
};
int main()
{
	point o;
	point o1(5,50);
	o.display();
	cout<<endl;
	o1.display();
}

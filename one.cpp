#include<iostream>
#include<algorithm>
using namespace std;

struct container
{
	int x;
};

void swap(struct container *c1,struct container *c2)
{
	struct container *temp;
	temp = c2;
	c2 = c1;
	c1 = temp;
}
int main()
{
	struct container a;
	a.x=34;
	struct container b;
	b.x=75;
cout << b.x << "" << a.x ;
	swap(&a,&b);
	cout << b.x << "" << a.x ;
}

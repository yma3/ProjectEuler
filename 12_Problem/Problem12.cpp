#include <iostream>
#include <cmath>

using namespace std;

int div(int x)
{
	int limit = x;
	int factorNum=0;
	float root = 1;
	for(int i=1; i<limit; ++i)
	{
		//cout << i << endl;
		if(x%i==0)
		{
			limit = x/i;
			factorNum++;
			//cout << factorNum << " " << limit << endl;
		}
	}
	root = sqrt(x);
	if ( root == floor(root) )
	{	
		//cout << "div = " << (factorNum*2) - 1 << "triangle = " << x << endl;
		return (factorNum * 2) - 1;
	}
	else
	{
		//cout << "div = " << factorNum*2 << "triangle = " << x << endl;
		return factorNum * 2;
	}
}




int main()
{
	int triangle = 0;
	for(int naturalCount = 1; div(triangle) <= 500; naturalCount++)
	{
		//cout << "div(" << triangle << ")" << endl;
		triangle = triangle + naturalCount;	
	}
	cout << triangle << endl;
	return 0;




}

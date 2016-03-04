#include <iostream>

#define LIMIT 1000000

using namespace std;

long long int Collatz (long long int x, long long int &chainLen)
{
	if ( x==1 )
	{
		chainLen++;
		//cout << x << endl;
		return chainLen;
	}
	else
	{
	if(x%2 == 0)
	{
		chainLen++;
		//cout << x << endl;
		Collatz(x/2, chainLen);
	}
	else
	{
		chainLen++;
		//cout << x << endl;
		Collatz( (3*x) + 1, chainLen);
	}
	}
	return chainLen;
}




int main()
{
	long long int chainLen = 0;
	long long int maxChain = 0;
	int maxnum = 0;
	for (int num = 1; num < LIMIT; num++)
	{
		Collatz(num, chainLen);	
		if(chainLen > maxChain)
		{
			maxChain = chainLen;
			maxnum = num;
		}
	//	cout << num << endl;
		chainLen = 0;
	}
	cout << maxChain << endl << maxnum << endl;
	return 0;	


}

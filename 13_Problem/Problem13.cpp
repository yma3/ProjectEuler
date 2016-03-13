#include <iostream>

using namespace std;

int main()
{
	Initialize int vector (1D)
	Initialize int vector of vectors (2D)
	Initialize int vector (summation)
	Read into 2Dvector from standard input
		Loop next for "enter"
		Convert string characters into numerical values
		Input into 1Dvector
	Result: 2Dvector of vector of 50-digit numbers
	
	
	SUMMATION ALGORITHM -> sum(2Dvector, vectorSum)
	Initialize bool carry = false
	Loop digit from end of first 50vector
		Add digits (0-9)
		if carry == true
			digitSum++
			carry = false
		if digitSum > 9
			digitSum = digitSum - 10
			carry = true;
		vectorSum[digit] = digitSum
		if digit = end && carry == true
			insert "1" into vectorSum[end+1]


	SIMPLER WAY, COMBINE SUMMATION WITH READING INPUT




}

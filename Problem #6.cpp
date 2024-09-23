//#include <iostream>
//
//using namespace std;
//
//int ReadPositiveNumber(string message )
//{
//	int number = 0;
//	do 
//	{
//		cout << message <<"\n";
//		cin >> number;
//
//	} while (number < 0);
//	
//	return number;
//}
//
//int SumOfDigit(int number) 
//{
//	int sum = 0;
//
//	while (number > 0) 
//	{
//		sum += number % 10;
//		number /= 10;
//	}
//	return sum;
//}
//
//void PrintResult(int number)
//{
//	cout << "Sum Of Digits Number is : " << SumOfDigit(number) << endl;
//}
//
//int main() 
//{
//	PrintResult(ReadPositiveNumber("Please Enter Number : "));
//	return 0;
//}
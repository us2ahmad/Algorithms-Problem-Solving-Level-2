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
//int ReverseNumber(int number)
//{
//	int reversedNumber = 0;
//	while (number>0)
//	{
//		reversedNumber += number % 10;
//		number /= 10;
//		
//		if (number > 0)
//			reversedNumber *= 10;
//
//	}
//	return reversedNumber;
//}
//
//void PrintResulte(int number) 
//{
//	cout<<"The Number Of Reversed is :  " << ReverseNumber(number) << endl;
//}
//
//int main() 
//{
//	PrintResulte(ReadPositiveNumber("Please Enter Number"));
//	return 0;
//}
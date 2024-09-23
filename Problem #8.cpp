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
//int GetCountRepeatNumber(int number, int digit) 
//{
//	int counter = 0 , remainder = 0; 
//
//	while (number > 0)
//	{
//		remainder = number % 10;
//		
//		number /= 10;
//		
//		if (remainder == digit)
//			counter++;
//	}
//	return counter;
//}
//
//int main()
//{
//	int number = ReadPositiveNumber("Please Enter A Positive Number : ");
//	int digit = ReadPositiveNumber("Please Enter Digit : ");
//
//	cout << "Digit " << digit << " Frequency is " << GetCountRepeatNumber(number, digit) << " Time(s) . \n";
//
//
//}
//#include <iostream>
//
//using namespace std;
//
//int ReadPositiveNumber(string message)
//{
//	int number = 0;
//	do
//	{
//		cout << message << "\n";
//		cin >> number;
//
//	} while (number < 0);
//
//	return number;
//}
//
//int GetCountRepeatNumber(int number, int digit)
//{
//	int counter = 0;
//
//	while (number > 0)
//	{		
//		if (number % 10 == digit)
//			counter++;
//
//		number /= 10;
//	}
//	return counter;
//}
//
//void PrintResultes(int number)
//{
//	for (short i = 0; i < 10; i++)
//	{
//		short countDigit = GetCountRepeatNumber(number, i);
//		if (countDigit > 0)
//			cout << "Digit " << i << " Frequency is " << countDigit << " Time(s) . \n";
//	}
//}
//
//int main()
//{
//	PrintResultes(ReadPositiveNumber("Please Enter A Positive Number : "));
//	return 0;
//
//}

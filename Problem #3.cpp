//#include <iostream> 
//
//using namespace std;
//
//enum enStatusNumber{ Perfect,NotPerfect };
//
//short ReadPositiveNumber(string message)
//{
//	short number = 0;
//	do
//	{
//		cout << message << "\n";
//		cin >> number;
//
//	} while (number <= 0);
//
//	return number;
//}
//
//enStatusNumber CheckNumberIsPerfect(short number)
//{
//	short sum = 0;
//	for (short i = 1; i <= number / 2 ; i++)
//	{
//		if( number % i == 0)
//			sum += i;
//	}
//
//	return sum == number ? enStatusNumber::Perfect : enStatusNumber::NotPerfect;
//
//}
//
//void PrintPerfectNumber(short number) 
//{
//	if (CheckNumberIsPerfect(number) == enStatusNumber::Perfect)
//		cout << "The number " << number << " is a Perfect number.\n";
//	else
//		cout << "The number " << number << " is Not a Perfect number.\n";
//}
//int main3() 
//{
//	PrintPerfectNumber(ReadPositiveNumber(" Peales Entert Positive Number : "));
//
//}
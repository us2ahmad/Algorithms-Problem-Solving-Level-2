//#include <iostream>
//
//using namespace std;
//
//enum enStatusNumber{Prime,NotPrime};
//
//short ReadPositiveNumber(string message ) 
//{
//	short number = 0; 
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
//enStatusNumber CheckNumberIsPrime(short number)
//{
//	short M = sqrt(number);
//
//	for (short counter = 2 ; counter <= M; counter++)
//	{
//		if (number % counter == 0)
//			return enStatusNumber::NotPrime;
//	}
//	return enStatusNumber::Prime;
//
//}
//
//void PrintPrimeNumber1ToN(short inputNumber)
//{
//	cout << "Prime Numbers from "<< 1 <<" To " << inputNumber << " are \n";
//	for (short i = 2; i <= inputNumber; i++)
//	{
//		if (CheckNumberIsPrime(i) == enStatusNumber::Prime)
//		{
//			cout << i << "\n" ;
//		}
//	}
//}
//
//int main2() 
//{
//	PrintPrimeNumber1ToN(ReadPositiveNumber(" Please Enter Positive Number :"));
//	return 0 ;
//}
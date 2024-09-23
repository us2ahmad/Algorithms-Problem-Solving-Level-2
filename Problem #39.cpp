//#include <iostream> 
//
//using namespace std;
//
//enum enStatusNumber{Prime,NotPrime};
//
//enStatusNumber IsPrimeNumber(const short number) 
//{
//	short M = sqrt(number);
//	for (short counter = 2 ; counter <= M; counter++)
//	{
//		if (number % counter == 0)
//			return enStatusNumber::NotPrime;
//
//	}
//	return enStatusNumber::Prime;
//}
//
//short ReadPositiveNumber(const string& message)
//{
//	short number = 0;
//
//	do
//	{
//		cout << message << endl;
//		cin >> number;
//	} while (number <= 0);
//
//	return number;
//}
//
//short RandomNumber(short from, short to)
//{
//	return rand() % (to - from + 1) + from;
//}
//
//void FillArray(short array[], short length)
//{
//	for (short i = 0; i < length; i++)
//	{
//		array[i] = RandomNumber(1, 100);
//	}
//}
//
//void PrintArray(short array[], short length, const string& message)
//{
//	cout << "\n" << message << endl;
//	for (short i = 0; i < length; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << "\n";
//
//}
//
//void AddArrayElemente(short array[], short& length, short number)
//{
//	array[length++] = number;
//}
//
//void AddPrimeNumbersInArray(short newArray[], short oldArray[], short length1, short& length2)
//{
//	for (short i = 0; i < length1; i++)
//	{
//		if(IsPrimeNumber(oldArray[i]) == enStatusNumber::Prime)
//		AddArrayElemente(newArray, length2, oldArray[i]);
//	}
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	short length = ReadPositiveNumber("Please Enter A Positive Number : ");
//	short lengthArray2 = 0;
//	short array1[100], array2[100];
//
//	FillArray(array1, length);
//
//	AddPrimeNumbersInArray(array2, array1, length, lengthArray2);
//	     
//	PrintArray(array1, length, "Array 1 Elements : ");
//
//	PrintArray(array2, lengthArray2, "Array 2 Primes Numbers : ");
//
//	return 0;
//}

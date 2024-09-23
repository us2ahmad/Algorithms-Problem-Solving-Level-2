//#include <iostream> 
//
//using namespace std;
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
//void PrintArray(short array[], short length)
//{
//	cout << "Array Elements : ";
//	for (short i = 0; i < length; i++)
//	{
//		cout << array[i] << " ";
//	}
//}
//
//short FindNumberPositionInArray(short array[], short length, short number)
//{
//	for (short i = 0; i < length; i++)
//	{
//		if (array[i] == number)
//			return i;
//	}
//	return 	 -1;
//}
//
//bool CehckNumberIsFoundInArray(short array[], short length, short number)
//{
//	return  FindNumberPositionInArray(array, length, number) >= 0 ;
//}
//
//void PrintResult(short array[], short length, short number) 
//{
//	cout << "Number you Are Looking for is : " << number << endl;
//	
//	if (CehckNumberIsFoundInArray(array, length, number))
//		cout << "The Number is  Found :-)" << endl;
//	else 
//		cout << "The Number is Not Found :-(" << endl;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	short length = ReadPositiveNumber("Please Enter A Positive Number : ");
//	short array[100];
//	FillArray(array, length);
//	PrintArray(array, length);
//	PrintResult(array, length, ReadPositiveNumber("\nPlease Enter a Number to search for ? "));
//
//	return 0;
//}

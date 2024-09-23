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
//short GetSumNumbersInArray(short array[], short length)
//{
//	short sumNumber = 0;
//	for (short i = 0; i < length; i++)
//	{
//		sumNumber += array[i];
//	}
//	return sumNumber;
//}
//
//float GetAverageInArray(short array[], short length)
//{
//	return (float) GetSumNumbersInArray(array, length) / length;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	
//	short length = ReadPositiveNumber("Please Enter A Positive Number : ");
//	
//	short array[100];
//	
//	FillArray(array, length);
//	
//	PrintArray(array, length);
//
//	cout << "\n Average of all Number is : " << GetAverageInArray(array, length);
//
//	return 0;
//}

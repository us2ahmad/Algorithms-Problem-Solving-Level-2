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
//void PrintArray(short array[], short length,const string& message)
//{
//	cout << "\n" << message << endl;
//	for (short i = 0; i < length; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << "\n" ;
//
//}
//
//void SumArray1AndArray2(short arr1[],short arr2[],short arr3[],short length)
//{
//	for (short i = 0; i < length; i++)
//	{
//		arr3[i] = arr1[i] + arr2[i];
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	short arr1[100], arr2[100], arr3[100], length;
//
//	length = ReadPositiveNumber("Please Enter A Positive Number : ");
//
//	FillArray(arr1,length);
//	FillArray(arr2,length);
//	SumArray1AndArray2(arr1, arr2, arr3, length);
//
//	PrintArray(arr1,length,"Array 1 Elements : ");
//	PrintArray(arr2,length,"Array 2 Elements : ");
//	PrintArray(arr3,length,"Sum of array1 and array2 elements : ");
//
//}
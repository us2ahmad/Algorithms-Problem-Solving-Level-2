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
//void Swap(short& A, short& B) 
//{
//	short temp = A;
//	A = B;
//	B = temp;
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
//		array[i] = i + 1;
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
//void ShuffleArray(short array[], short length)
//{
//	for (short i = 0; i < length; i++)
//	{
//		Swap( array[RandomNumber(1, length)-1], array[RandomNumber(1, length) - 1]);
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	short arr[100], length = ReadPositiveNumber("Please Enter Array Size : ");
//	FillArray(arr,length);
//	PrintArray(arr,length,"Array Elements before Shuffle : ");
//	ShuffleArray(arr,length);
//	PrintArray(arr,length,"Array Elements after Shuffle : ");
//	return 0;
//}
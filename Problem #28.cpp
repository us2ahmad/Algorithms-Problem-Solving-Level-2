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
//void CopyArray(short newArray[],short oldArray[],short length)
//{
//	for (short i = 0; i < length; i++)
//	{
//		newArray[i] = oldArray[i];
//	}
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	
//	short length = ReadPositiveNumber("Please Enter A Positive Number : ");
//	
//	short array1[100], array2[100];
//	
//	FillArray(array1, length);
//	
//	CopyArray(array2, array1, length);
//
//	PrintArray(array1, length,"Array 1 Elements : ");
//
// 	PrintArray(array1, length,"Array 2 Elements after copy : ");
//
//	return 0;
//}

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
//void AddArrayElemente(short array[], short& length, short number)
//{
//	array[length++] = number;
//}
//
//void CopyArrayUsingAddArrayElemente(short newArray[],short oldArray[],short length, short& length2)
//{
//	for (short i = 0; i < length; i++)
//	{
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
//	CopyArrayUsingAddArrayElemente(array2, array1, length, lengthArray2);
//
//	PrintArray(array1, length,"Array 1 Elements : ");
//
// 	PrintArray(array2, lengthArray2,"Array 2 Elements after copy : ");
//
//	return 0;
//}

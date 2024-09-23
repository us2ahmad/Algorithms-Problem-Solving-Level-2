//#include <iostream> 
//
//using namespace std;
//
//void FillArray(short array[], short& length)
//{
//	array[length++] = 10;
//	array[length++] = 10;
//	array[length++] = 10;
//	array[length++] = 50;
//	array[length++] = 50;
//	array[length++] = 70;
//	array[length++] = 70;
//	array[length++] = 70;
//	array[length++] = 70;
//	array[length++] = 90;
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
//void AddArrayElemente(short array2[], short& length, short number)
//{
//	array2[length++] = number;
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
//bool IsNumberInaArray(short arr2[], short length2,short number)
//{
//
//	return FindNumberPositionInArray(arr2,length2,number) != - 1;
//}
//
//void AddDistinctNumbersInArray(short newarray[], short oldarray[], short length1, short& length2)
//{
//	for (short i = 0; i < length1; i++)
//	{
//		if (!IsNumberInaArray(newarray, length2, oldarray[i]))
//			AddArrayElemente(newarray, length2, oldarray[i]);
//	}
//}
//
//int main()
//{
//
//	short length =0,lengtharray2 = 0;
//	short array1[100], array2[100];
//	FillArray(array1, length);
//
//	AddDistinctNumbersInArray(array2, array1, length, lengtharray2);
//	     
//	PrintArray(array1, length, "array 1 elements : ");
//
//	PrintArray(array2, lengtharray2, "array 2 primes numbers : ");
//
//	return 0;
//}

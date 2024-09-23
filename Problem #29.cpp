// #include<iostream>
//using namespace std;
//
//enum enStatusNumber{Prime,NotPrime};
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
//void CopyOnlyPrimeNumberFromArray(short newArray[],short oldArray[],short lengthOldArray,short& lengthNewArray)
//{
//	short counter = 0;
//	for (short i = 0; i < lengthOldArray; i++)
//	{
//		if (CheckNumberIsPrime(oldArray[i]) == enStatusNumber::Prime)
//		{
//			newArray[counter++] = oldArray[i];
//		}
//	}
//	lengthNewArray = counter;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	
//	short lengthArray2, lengthArray1 = ReadPositiveNumber("Please Enter A Positive Number : ");
//	
//	short array1[100], array2[100];
//	
//	FillArray(array1, lengthArray1);
//	
//	PrintArray(array1, lengthArray1,"Array 1 Elements : ");
//
//	CopyOnlyPrimeNumberFromArray(array2,array1,lengthArray1,lengthArray2);
// 	PrintArray(array2, lengthArray2," Prime Numbers in Array2 : ");
//
//	return 0;
//}

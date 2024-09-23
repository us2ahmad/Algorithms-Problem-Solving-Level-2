//#include <iostream> 
//
//using namespace std;
//
//enum enStatusNumber{Odd=0,Even=1};
//
//enStatusNumber GetStatusNumber(const short number) 
//{
//	if (number % 2 != 0)
//		return enStatusNumber::Odd;
//	else
//		return enStatusNumber::Even;
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
//void FillArray(short arr[], short length)
//{
//	for (short i = 0; i < length; i++)
//	{
//		arr[i] = RandomNumber(1, 100);
//	}
//}
//
//void PrintArray(short arr[], short length, const string& message)
//{
//	cout << "\n" << message << endl;
//	for (short i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n";
//
//}
//
//short GetCountOddNumbersInArray( short arr[], short length)
//{
//	short counter = 0;
//	for (short i = 0; i < length; i++)
//	{
//		if (GetStatusNumber(arr[i]) == enStatusNumber::Odd)
//			counter++;
//	}
//	return counter;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	short length = ReadPositiveNumber("Please Enter A Positive Number : ");
//	short array1[100];
//
//	FillArray(array1, length);
//
//	PrintArray(array1, length, "Array 1 Elements : ");
//
//	cout<<"Odd Numbers Count is : " << GetCountOddNumbersInArray(array1,length);
//
//	return 0;
//}

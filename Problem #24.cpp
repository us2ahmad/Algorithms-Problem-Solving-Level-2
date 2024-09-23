//#include <iostream> 
//
//using namespace std;
//
//short ReadPositiveNumber(const string& message) 
//{
//	short number = 0 ;
//	
//	do
//	{
//		cout << message << endl;
//		cin >> number;
//	} 
//	while (number <= 0);
//
//	return number;
//}
//
//short RandomNumber(short from,short to) 
//{
//	return rand() % (to - from + 1) + from;
//}
//
//void FillArray(short array[],short length) 
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
//short GetMaxNumberInArray(short array[], short length)
//{
//	short maxNumber = array[0];
//	for (short i = 0; i < length; i++)
//	{
//		if (maxNumber < array[i])
//			maxNumber = array[i];
//	}
//	return maxNumber;
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//	short length = ReadPositiveNumber("Please Enter A Positive Number : ");
//	short array[100];
//	FillArray(array, length);
//	PrintArray(array, length);
//	cout << "\nMax Number is : " << GetMinNumberInArray(array,length);
//	
//	return 0;
//}

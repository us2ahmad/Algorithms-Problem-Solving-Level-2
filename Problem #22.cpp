//#include <iostream>
//
//using namespace std;
//
//short ReadPositiveNumber(string message )
//{
//	short number = 0;
//	do 
//	{
//		cout << message <<"\n";
//		cin >> number;
//
//	} while (number < 0);
//	
//	return number;
//}
//
//void ReadArray(int array[],short& lengthArray)
//{
//	lengthArray = ReadPositiveNumber("Please Enter Array Length : ");
//
//	cout << "Enter Array Element : \n";
//
//	for (short i = 0; i < lengthArray; i++)
//	{
//		cout << "Element[" << i + 1 << "] : ";
//		cin >> array[i];
//		cout << endl;
//	}
//
//}
//
//void PrintArray(const int array[],short lengthArray)
//{
//	for (short i = 0; i < lengthArray; i++)
//		cout << array[i] << " ";
//
//	cout << endl;
//}
//
//short GetElementRepeated(const int array[], short lengthArray,short element)
//{
//	short counter = 0;
//	for (short i = 0; i < lengthArray; i++)
//	{
//		if (array[i] == element)
//		{
//			counter++;
//		}
//
//	}
//	return counter;
//}
//
//int main() 
//{
//	short lengthArray,elment;
//	int array[100];
//
//	ReadArray(array, lengthArray);
//	
//	elment = ReadPositiveNumber("Please Enter The Number You Want To Check : ");
//
//	cout << "Original Array : ";
//	PrintArray(array,lengthArray);
//
//	cout << elment << " is Repeated  " << GetElementRepeated(array, lengthArray, elment) << " time(s)\n";
//	
//	return 0;
//
//}
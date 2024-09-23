//#include <iostream> 
//
//using namespace std;
//
//void FillArray(short array[], short& length)
//{
//	array[length++] = 10;
//	array[length++] = 20;
//	array[length++] = 30;
//	array[length++] = 30;
//	array[length++] = 20;
//	array[length++] = 10;
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
//void ReverseArray(short arr1[],short arr2[],short length, short& lengtharray2)
//{
//	for (short i = (length - 1) ; i >= 0; i--)
//	{
//		AddArrayElemente(arr2, lengtharray2, arr1[i]);
//	}
//}
//
//bool ArrayIsPalindrome(short arr1[], short arr2[], short length)
//{
//	for (short i = 0; i < length; i++)
//	{
//		if (arr1[i] != arr2[i])
//			return false;
//	}
//	return true;
//
//}
//
//bool IsPlaindromeArray(short arr1[], short length)
//{
//		/* : Íá ÂÎÑ
//		ÚæÖÇ Úä Úãá ãÕÝæÝÉ ÌÏíÏÉ íßääí	
//		Úãá ãÞÇÑäÉ áÚäÇÕÑ ÇáãÕÝæÝÉ ÇáãæÌæÏÉ ÓÈÞÇ	
//		*/
//	for (short i = 0; i < length; i++)
//	{
//		if (arr1[i] != arr1[length - i - 1])
//			return false;
//	}
//	return true;
//}
//int main()
//{
//
//	short length =0,lengtharray2 = 0;
//	short array1[100], array2[100];
//	FillArray(array1, length);
//	
//	PrintArray(array1, length, "array 1 elements : ");
//
//	//ReverseArray(array1, array2, length, lengtharray2);
//
//	if (IsPlaindromeArray(array1, length))
//		cout << "\nyes Array Is Palindrome";
//	else
//		cout << "\nno Array Is Not Palindrome";
//	return 0;
//}
//
//
//
//

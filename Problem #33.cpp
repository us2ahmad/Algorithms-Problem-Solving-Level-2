//#include<iostream>
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
//int GenerateRandomNumber(short from,short to) 
//{
//	return rand() % (to - from + 1) + from;
//}
//
//string GenereteWord(short lengthWord) 
//{
//	string word = "";
//	for (short i = 1; i <= lengthWord; i++)
//	{
//
//		word += char(GenerateRandomNumber('A', 'Z'));
//	}
//	return word;
//}
//
//string GenereteKey()
//{
//	string key = "";
//	for (short i = 1 ; i <= 7; i++)
//	{
//		if (i == 2 || i == 4 || i == 6) 
//		{
//			key += "-";
//			continue;
//		}
//
//		key += GenereteWord(4);
//	
//	}
//	return key;
//}
//
//void  FillArrayWithKeys(string array[], short keyCount)
//{
//	for (short i = 0; i < keyCount; i++)
//		array[i] = GenereteKey();
//}
//
//void  PrintKeys(string array[], short keyCount)
//{
//	for (short i = 0; i < keyCount; i++)
//		cout<< "Array[" << i << "] : "  << array[i]<<endl;
//	
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	short keyCount = ReadPositiveNumber("Please enter the number of keys you want to generate: ");
//	string ArrayKey[100];
//	FillArrayWithKeys(ArrayKey, keyCount);
//	PrintKeys(ArrayKey, keyCount);
//	return 0;
//}

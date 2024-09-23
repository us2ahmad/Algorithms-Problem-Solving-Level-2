//#include <iostream>
//
//using namespace std;
//
//int ReadPositiveNumber(string message )
//{
//	int number = 0;
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
//int ReverseNumber(int number) 
//{
//	int remainder = 0;
//
//	while (number > 0) 
//	{
//		remainder += number % 10;
//
//		number /= 10;
//
//		if (number > 0)
//			remainder *= 10;
//	}
//	return remainder;
//}
//
//bool CheckNumberIsPalindrome(int number) 
//{
//	return number == ReverseNumber(number);
//}
//
//void PrintResult(int number) 
//{
//	if(CheckNumberIsPalindrome(number))
//		cout << "yes , it's a palindrome number";
//	else
//		cout << "no , it's not a palindrome number";
//}
//
//int main() 
//{
//	//ÇáÑŞã ÇáãËÇáí ÇáĞí íŞÑÇ ãä ÇáØÑİíä ÈäİÓ ÇáŞíãÉ
//	//12321 : ãËÇá
//	PrintResult(ReadPositiveNumber("Please Enter A Positive Number : "));
//	return 0;
//
//}

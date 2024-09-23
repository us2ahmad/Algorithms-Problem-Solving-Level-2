//#include<iostream>
//#include <cstdlib>
//
//using namespace std;
//
//enum enCharType
//{
//	SmallLetter = 1,
//	CaptialLetter = 2,
//	SpecialCharacter = 3,
//	Digit = 4
//};
//
//int GenerateRandomNumber(short from,short to) 
//{
//	return rand() % (to - from + 1) + from;
//}
//
//char GetRandomCharacter(enCharType charType)
//{
//	switch (charType)
//	{
//	case SmallLetter:
//		return char(GenerateRandomNumber(79,122));
//
//	case CaptialLetter:
//		return char(GenerateRandomNumber(65, 90));
//
//	case SpecialCharacter:
//		return char(GenerateRandomNumber(33, 47));
//
//	case Digit:
//		return char(GenerateRandomNumber(48,57));
//
//	default:
//		break;
//	}
//
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//	cout << GetRandomCharacter(enCharType::SmallLetter) <<endl;
//	cout << GetRandomCharacter(enCharType::CaptialLetter) << endl;
//	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
//	cout << GetRandomCharacter(enCharType::Digit) << endl;
//
//	return 0;
//}
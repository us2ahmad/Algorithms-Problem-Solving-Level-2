//#include <iostream>
//
//using namespace std;
//
//float ReadNumber() 
//{
//	float number;
//	cout << "Please Enter Number :\n";
//	cin >> number;
//	return number;
//}
//
//float GetFractionsPart(float number)
//{	
//	return number - short(number);
//
//}
//short MyRound(float number) 
//{
//	short intPart = number;
//	float FractionsPart = GetFractionsPart(number);
//	if(abs(FractionsPart) >= 0.5)
//	{	if(number>0)
//			return ++intPart;
//		else
//			return --intPart;
//	}
//	else
//		return intPart;
//}
//
//int main() 
//{
//	float number = ReadNumber();
//	cout << "My  Round Result : " << MyRound(number) << endl;
//	cout << "C++ Round Result : "<<round(number);
//	return 0;
//}
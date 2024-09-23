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
//float GetFraction(float number)
//{
//	return number - short(number);
//}
//
//short MyCeil(float number)
//{
//	if (abs(GetFraction(number)) > 0 && number > 0)
//		return ++number;
//	else 
//		return number;
//}
//
//int main() 
//{
//	float number = ReadNumber();
//	cout << "My  Ceil Result : " << MyCeil(number) << endl;
//	cout << "C++ Ceil Result : "<<ceil(number);
//	return 0;
//}
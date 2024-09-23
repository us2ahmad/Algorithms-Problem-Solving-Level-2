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
//
//}
//
//short MyFloor(float number) 
//{
//	if (number > 0)
//		return number;
//	else
//		if(abs(GetFraction(number)) > 0)
//			return --number;
//		else 
//			return number;
//	
//}
//
//int main() 
//{
//	float number = ReadNumber();
//	cout << "My  Floor Result : " << MyFloor(number) << endl;
//	cout << "C++ Floor Result : "<<floor(number);
//	return 0;
//}
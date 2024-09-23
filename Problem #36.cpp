//#include <iostream> 
//
//using namespace std;
//
//enum enStatus {No=0,Yes=1};
//
//enStatus AskReadNumber()
//{
//	short number = 0;
//	cout << "\nDo You Want to Add more numbers ? [0]:No,[1]:Yes ";
//	cin >> number;
//	return (enStatus)number;
//}
//
//short ReadNumber() 
//{
//	short number = 0;
//	cout << "Please Enter a Number ? ";
//	cin >> number;
//	return number;
//}
//
//void AddElementeToArray(short array[], short& length, short number)
//{
//	array[length++] = number;
//	
//}
//
//void InputUserNumberInArray(short array[], short& length)
//{
//	do
//	{
//		AddElementeToArray(array, length, ReadNumber());
//
//	} while (AskReadNumber() == enStatus::Yes);
// }
//
//void PrintResult(short array[], short length)
//{
//	cout << "\nArray Length " << length << endl;
//	cout << "\nArray Elements ";
//	for (short i = 0; i < length; i++)
//	{
//		cout << array[i] << " ";
//	}
//}
//
//int main() 
//{
//	short length = 0,array[100];
//
//	InputUserNumberInArray(array, length);
//	
//	PrintResult(array, length);
//
//	return 0;
//}

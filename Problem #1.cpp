//#include <iostream> 
//
//using namespace std;
//
//void PrintHeader() 
//{
//
//	cout << "\n\n\t\t\tMultiplication Table From 1 To 10 \n\n";
//
//	for (short i = 1; i <= 10; i++) 
//	{
//		cout << "\t" << i ;
//	}
//	cout << "\n____________________________________________________________________________________\n";
//}
//
//void PrintFooter()
//{
//	cout << "\n____________________________________________________________________________________\n";
//	cout << "\n\t\t\t       Powered by Ahmed 2024 ";
//}
//
//string ColumSperator(short i)
//{
//	if (i < 10)
//		return "   |";
//	else 
//		return "  |";
//}
//
//void PrintMultiplicationTable()
//{
//	PrintHeader();
//	for (short i = 1; i <= 10; i++)
//	{
//		cout << " " << i << ColumSperator(i) <<"\t";
//
//		for (short j = 1; j <= 10; j++) 
//		{
//			cout << j * i << " \t";
//		}
//		cout << "\n";
//	}
//	PrintFooter();
//}
//
//int main1() 
//{
//	PrintMultiplicationTable();
//	return 0;
//}
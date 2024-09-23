//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//string ReadPassword(string message)
//{
//	string password = "";
//	cout << message << endl;
//	cin >> password;
//	return password;
//}
//
//bool FindPassword(const string& password) 
//{
//	string word = "";
//	int count = 0;
//	for (short i = 'A'; i <= 'Z'; i++)
//	{
//		for (short j = 'A'; j <= 'Z'; j++)
//		{
//			count++;
//			word += char(i);
//			word += char(j);
//
//			cout << "Trial [" << count << "] : " <<word<<"\n";
//			
//			if (word == password) 
//			{
//				cout << "\nPassword Is " << word<<"\n";
//				cout << "Found after "<<count<<" Trial(s) ";
//				return true;
//			}
//			word = "";
//		}
//		cout << flush;
//	}
//	return false;
//}
//
//int main() 
//{
//	if (!FindPassword(ReadPassword("Please Enter Your Password 2-Letter (all capital): ")))
//		cout << "\n\n Password is Not Found ";
//
//	return 0;
//}
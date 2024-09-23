//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string ReadText(const string& message) 
//{
//	string text;
//	cout << message<<endl;
//	getline(cin,text) ;
//	return text;
//}
//
//string EncryptText(string& text,short key) 
//{
//	for (short i = 0; i < text.size(); i++)
//	{
//		text[i] += key;
//	}
//	return text;
//}
//
//string DecryptText(string& text, short key)
//{
//	for (short i = 0; i < text.size(); i++)
//	{
//		text[i] -= key;
//	}
//	return text;
//}
//
//int main() 
//{
//	string text = ReadText("Please Enter Text : ");
//
//	cout << "Text Before Encryption : " << text << endl;
//
//	cout << "Text After Encryption : " << EncryptText(text,2) << endl;
//	cout << "Text After Decryption : " << DecryptText(text,2) << endl;
//	
//	return 0;
//}

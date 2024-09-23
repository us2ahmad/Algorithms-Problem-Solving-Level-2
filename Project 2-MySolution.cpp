//#include <iostream>
//
//using namespace std;
//
//enum enQuestionLevel
//{
//	Easy = 1 ,
//	Med = 2  ,
//	Hard = 3 ,
//	MixLevel = 4
//};
//
//enum enQuestionType 
//{
//	Add = 1 ,
//	Sub = 2 ,
//	Mul = 3 ,
//	Div = 4 ,
//	MixType = 5
//};
//
//string GetQuestionLevelName(enQuestionLevel questionLevel)
//{
//	string arr[4]{"Easy","Med","Hard","Mix"};
//	return arr[questionLevel - 1];
//}
//
//string GetQuestionTypeName(enQuestionType questionType)
//{
//	string arr[5]{ "Add","Sub","Mul","Div","Mix"};
//	return arr[questionType - 1];
//}
//
//struct stQuestion 
//{
//	int FirstValue;
//	char Operation;
//	int SecondValue;
//	int CorrectAnswer;
//	int UserAnswer;
//};
//
//struct stQuiz 
//{
//	stQuestion Question [100] ;
//	int QuestionCount;
//	enQuestionLevel QuestionsLevel;
//	enQuestionType QuestionsType;
//	int CountRightAnswer = 0;
//	int CountWrongAnswer = 0;
//	bool IsPass = false;
//};
//
//int ReadHowManyQuestions() 
//{
//	int number;
//
//	cout << "How Many Questions Do You Want To Answer ? ";
//	cin >> number;
//
//	return number;
//}
//
//enQuestionLevel ReadLevelQuestions()
//{
//	int number;
//
//	cout << "Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
//	cin >> number;
//
//	return (enQuestionLevel)number;
//}
//
//enQuestionType ReadQuestionType()
//{
//	int number;
//	cout << "Enter Question Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
//	cin >> number;
//	return (enQuestionType)number;
//}
//
//int ReadAnswer() 
//{
//	int answer;
//	cin >> answer;
//	return answer;
//}
//
//int RandomNumber(int from,int to) 
//{
//	return rand() % (to - from + 1) + from;
//}
//
//int ChoiceNumberRandomly(enQuestionLevel questionLevel) 
//{
//	if (questionLevel == enQuestionLevel::MixLevel)
//		questionLevel = (enQuestionLevel)RandomNumber(1, 3);
//
//	switch (questionLevel)
//	{		
//	case enQuestionLevel::Easy:
//		return RandomNumber(1,10);
//
//	case enQuestionLevel::Med:
//		return RandomNumber(10,50);
//
//	case enQuestionLevel::Hard:
//		return RandomNumber(50,100);
//
//	default:
//		break;
//	}
//}
//
//char ChoiceOperationRandomly(enQuestionType questionType)
//{ 
//	if (questionType == enQuestionType::MixType)
//		questionType = (enQuestionType) RandomNumber(1, 4);
//
//	switch (questionType)
//	{
//	case enQuestionType::Add:
//		return '+';
//	case enQuestionType::Sub:
//		return '-';
//	case enQuestionType::Mul:
//		return '*';
//	case enQuestionType::Div:
//		return '/';
//	default:
//		break;
//	}
//}
// 
//void PrintQuestionInScreen(stQuestion& question)
//{
//	cout << question.FirstValue << endl;
//	cout << question.Operation << endl;
//	cout << question.SecondValue << endl;
//	cout << "______\n";
//}
//
//void FillQuizInfoFromUser(stQuiz& quiz) 
//{
//	quiz.QuestionCount = ReadHowManyQuestions();
//	quiz.QuestionsLevel = ReadLevelQuestions();
//	quiz.QuestionsType = ReadQuestionType();
//}
//
//int GetCorrectAnswer(stQuestion question) 
//{
//	switch (question.Operation)
//	{
//	case '+':
//		return question.FirstValue + question.SecondValue;
//	case '-':
//		return question.FirstValue - question.SecondValue;
//	case '*':
//		return question.FirstValue * question.SecondValue;
//	case '/':
//		return question.FirstValue / question.SecondValue;
//	default:
//		break;
//	}
//}
//
//bool CheckAnswerUser(stQuestion question)
//{
//	if (question.CorrectAnswer != question.UserAnswer)
//		return false;
//	
//	return true;
//
//}
//
//void PrintAnswer(stQuestion question)
//{
//	if (CheckAnswerUser(question))
//	{
//		system("color 2");
//		cout << "Right Answer :-)\n\n"; 
//
//	}
//	else 
//	{
//		system("color 4");
//		cout << "Wrong Answer :-(\n\a";
//		cout << "The Right Answer is : " << question.CorrectAnswer << "\n\n";
//	}
//}
//
//void GenereteQuestion(stQuiz& quiz,short indexQuestion) 
//{
//	quiz.Question[indexQuestion].FirstValue = ChoiceNumberRandomly(quiz.QuestionsLevel);
//	quiz.Question[indexQuestion].Operation = ChoiceOperationRandomly(quiz.QuestionsType);
//	quiz.Question[indexQuestion].SecondValue = ChoiceNumberRandomly(quiz.QuestionsLevel);
//	quiz.Question[indexQuestion].CorrectAnswer = GetCorrectAnswer(quiz.Question[indexQuestion]);
//}
//
//void GenerteQuizQuestions(stQuiz& quiz)
//{
//	for (short i = 0; i < quiz.QuestionCount; i++)
//	{
//		GenereteQuestion(quiz, i);
//	}
//}
//
//stQuiz FillQuiz(stQuiz& quiz)
//{
//	for (int i = 0; i < quiz.QuestionCount; i++)
//	{
//		cout << "Question [ " << i+1 << "/" << quiz.QuestionCount << " ]\n";
//		PrintQuestionInScreen(quiz.Question[i]);
//		quiz.Question[i].UserAnswer = ReadAnswer();
//		PrintAnswer(quiz.Question[i]);
//		CheckAnswerUser(quiz.Question[i]) ? quiz.CountRightAnswer++ : quiz.CountWrongAnswer++ ;
//	}
//	quiz.IsPass = quiz.CountRightAnswer >= quiz.CountWrongAnswer ;
//	
//	return quiz;
//}
//
//void PrintSeparateLine() 
//{
//	cout << "\n__________________________\n";
//}
//
//void ChangeScreenColor(bool isPass) 
//{
//	if (isPass)
//		system("color 2");
//	else 
//		system("color 4");
//	
//}
//
//void PrintFinalReslut(bool isPass) 
//{
//	ChangeScreenColor(isPass);
//	PrintSeparateLine();
//	string result = !isPass ? "Fail :-(" : "Pass :-)";
//	cout << "Final Results Is " << result;
//	PrintSeparateLine();
//}
//
//void PrintQuizResult(stQuiz quiz)
//{
//	PrintFinalReslut(quiz.IsPass);
//	cout << "Number Of Questions : " << quiz.QuestionCount << endl;
//	cout << "Questions Level : " << GetQuestionLevelName(quiz.QuestionsLevel) << endl;
//	cout << "Questions Type	: " << GetQuestionTypeName(quiz.QuestionsType) << endl;
//	cout << "Number Of Right Answer : "  << quiz.CountRightAnswer << endl;
//	cout << "Number Of Wrong Answer : "  << quiz.CountWrongAnswer << endl;
//	PrintSeparateLine();
//}
//
//void ResetScreen() 
//{
//	system("cls");
//	system("color 07");
//}
//
//void StartQuiz() 
//{
//	stQuiz quiz;
//	FillQuizInfoFromUser(quiz);
//
//	GenerteQuizQuestions(quiz);
//
//	FillQuiz(quiz);
//
//	PrintQuizResult(quiz);
//}
//
//void Start() 
//{
//	char Requiz = 'N';
//	do
//	{
//		ResetScreen();
//		StartQuiz();
//		cout << "Do you want to Quiz Again ? Y/N ?";
//		cin >> Requiz;
//
//	} while (Requiz == 'Y'|| Requiz == 'y');
//
//}
//
//int main() 
//{
//	srand((unsigned)time(NULL));
//	Start();
//
//	return 0;
//}
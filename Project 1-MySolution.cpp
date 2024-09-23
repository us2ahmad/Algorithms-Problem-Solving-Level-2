//#include <iostream>
//using namespace std;
//
//struct stGames 
//{
//	short UserWinCount = 0;
//	short ComputerWinCount = 0;
//	short NumberOfDraws = 0;
//};
//
//struct PlayersChoices 
//{
//	short UserChoice;
//	short ComputreChoice;
//};
//
//enum  enChoice 
//{
//	Stone = 1 ,
//	Paper = 2 ,
//	Scissors = 3
//};
//
//enum enPlayer
//{
//	User = 1,
//	Computre = 2
//};
//
//short ReadHowManyRound()
//{
//	short number = 0;
//	do
//	{
//		cout << "How Many Rounds 1 to 10 ? \n";
//		cin >> number;
//	} while (number < 1 || number > 10);
//
//	return number;
//}
//
//short RandomNumber(short from,short to)
//{
//	return rand() % ( to - from + 1) + from;
//}
//
//enChoice ReadChoiceFromUser(short roundNumber) 
//{
//	cout << "Round ["<< roundNumber <<"] Begins : \n";
//	short choice = 0;
//
//	do
//	{
//    cout << "Your Choice :  [1]:Stone , [2]:Paper , [3]:Scissors ?";
//	  cin >> choice;
//	} while (choice <= 0 || choice > 3);
//	
//	return enChoice(choice);
//}
//
//enChoice GetChoiceComputre() 
//{
//	return enChoice(RandomNumber(1, 3));
//}
//
//string ChoiceName(short choice) 
//{
//	switch (choice)
//	{
//	case enChoice::Stone:
//		return "Stone";
//	case enChoice::Paper:
//		return "Paper";
//	case enChoice::Scissors:
//		return "Scissors";
//	default:
//		break;
//	}
//}
//
//string PlayerName(short player)
//{
//	switch (player)
//	{
//	case enPlayer::User:
//		return "User";	
//	
//	case enPlayer::Computre:
//		return "Computre";
//	
//	default:
//		return "No Winner";
//	}
//}
//
//enPlayer CalculateResult(PlayersChoices playerChoice, stGames& game)
//{
//	//////////////////////////////·Õ”«» «· ⁄«œ·  //////////////////////////////
//	if (playerChoice.UserChoice == playerChoice.ComputreChoice)
//	{
//			system("Color 6");
//			game.NumberOfDraws++;
//			return enPlayer(0);
//	}
//
//	//////////////////////////////·Õ”«» ›Ê“ «·„” Œœ„ //////////////////////////////
//	else if ((playerChoice.UserChoice == enChoice::Stone && playerChoice.ComputreChoice == enChoice::Scissors)
//		|| (playerChoice.UserChoice == enChoice::Scissors && playerChoice.ComputreChoice == enChoice::Paper)
//		|| (playerChoice.UserChoice == enChoice::Paper && playerChoice.ComputreChoice == enChoice::Stone))
//	{
//		system("Color 2");
//		game.UserWinCount++;
//		return enPlayer::User;
//	}
//
//	//////////////////////////////·Õ”«» ›Ê“ «·ﬂ„»ÌÊ —////////////////////////////// 
//	else
//	{
//		system("Color 4");
//		cout << "\a";
//		game.ComputerWinCount++;
//		return enPlayer::Computre;
//	}
//
//}
//
//void PrintResultRound(short roundNumber, PlayersChoices playerChoice, stGames& game)
//{
//	cout << "\n_____________________________Round[" << roundNumber << "]_____________________________\n";
//	cout << "User Choice : " << ChoiceName(playerChoice.UserChoice) << endl;
//	cout << "Computre Choice : " << ChoiceName(playerChoice.ComputreChoice) << endl;
//	cout << "Round Winner : [" << PlayerName(CalculateResult(playerChoice, game)) << "] " << endl;
//	cout << "__________________________________________________________________\n";
//}
//
//enPlayer CheckWinFinal(stGames game)
//{
//	if (game.ComputerWinCount < game.UserWinCount)
//		return enPlayer::User;
//	else if (game.ComputerWinCount > game.UserWinCount)
//		return enPlayer::Computre;
//	else
//		return enPlayer(-1);
//}
//
//string Tabs(short NumberOfTabs)
//{
//	string t = "";
//	for (int i = 1; i < NumberOfTabs; i++)
//		t += "\t";
//
//	return t;
//}
//
//void ShowGameOverScreen() 
//{
//	cout << Tabs(2) << "__________________________________________________________\n\n";
//	cout << Tabs(2) << "                 +++ G a m e  O v e r +++\n";
//	cout << Tabs(2) << "__________________________________________________________\n\n";
//}
//
//void PrintFinishGame(stGames gameResults,short roundCount)
//{
//
//	cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
//	cout << Tabs(2) << "Game Rounds        : " << roundCount << endl;
//	cout << Tabs(2) << "Player1 won times  : " << gameResults.UserWinCount << endl;
//	cout << Tabs(2) << "Computer won times : " << gameResults.ComputerWinCount << endl;
//	cout << Tabs(2) << "Draw times         : " << gameResults.NumberOfDraws << endl;
//	cout << Tabs(2) << "Final Winner       : " << PlayerName(CheckWinFinal(gameResults)) << endl;
//	cout << Tabs(2) << "___________________________________________________________\n";
//}
//
//void PlayGame()
//{
//	stGames game;
//	PlayersChoices playerChoice;
//	short roundCount = ReadHowManyRound();
//	for (short i = 1; i <= roundCount; i++)
//	{
//		playerChoice.UserChoice = ReadChoiceFromUser(i);
//		playerChoice.ComputreChoice = GetChoiceComputre();
//		PrintResultRound(i, playerChoice, game);
//	}
//	PrintFinishGame(game, roundCount);
//}
//
//void ResetSecren()
//{
//	system("color 07");
//	system("cls");
//}
//
//void StartGame() 
//{
//	char playAgain;
//	do
//	{
//		ResetSecren();
//		PlayGame();
//		cout << "Do you Want to play Again ? Y/N ?";
//		cin >> playAgain;
//	} while (playAgain == 'y' || playAgain == 'Y');
//}
//
//
//int main() 
//{
//	srand((unsigned)time(NULL));
//	
//	StartGame();
//
//	return 0;
//}
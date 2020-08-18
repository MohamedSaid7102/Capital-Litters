
#include <iostream>
#include<string>

//utitlity function
std::string ToCpitalString(std::string& UserInput)//MOHAMED SAID
{
	for (size_t i = 0; i < UserInput.size() ; i++)
	{
		 if (UserInput[i] >= 97 && UserInput[i] <= 122)
		{
				UserInput[i] -= 32;
		}
		else 
		{
			continue;
		}
	}
	return UserInput;
}
//utitlity function
std::string ToCamel(std::string& UserInput)//Mohamed Said
{
	for (size_t i = 0; i < UserInput.size(); i++)
	{
		if ( ( i == 0 && ( 32 != UserInput[i] ) )  && (UserInput[i] >= 97 && UserInput[i] <= 122)) // The begining of the phrase
		{
			UserInput[i] -= 32;
		}
		else if (((32 == UserInput[i])) && (UserInput[i+1] >= 97 && UserInput[i+1] <= 122) ) // after a Space
		{
			UserInput[i+1] -= 32;
		}
		else if ((('\"' == UserInput[i]) || ('\.' == UserInput[i]) || ('\("' == UserInput[i]) || ('\[' == UserInput[i]) || ('\{' == UserInput[i]) || ('\'' == UserInput[i]))
			&& (UserInput[i + 1] >= 97 && UserInput[i + 1] <= 122)) // after a Special Character
		{
			UserInput[i + 1] -= 32;
		}
		else 
		{
			continue;
		}
	}
	return UserInput;
}
//utitlity function
std::string ToPascal(std::string& UserInput)
{
	for (size_t i = 0; i < UserInput.size(); i++) //mohamed said
	{
		if ((i == 0 && (32 != UserInput[i])) && (UserInput[i] >= 97 && UserInput[i] <= 122))
		{
			UserInput[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return UserInput;
}
/////////////////////////////////////////////////
//fuction main to convert
void ToCpitalStringFunction()
{
	std::string Input{};
	int determine{};

	do
	{

		system("cls");

		std::cout << "entr your phrase : ";
		std::cin.ignore();  getline(std::cin, Input);

		std::cout << ToCpitalString(Input) << std::endl;

		std::cout << "Enter \' 1 \' to re Enter or  \' 0 \'  To exit  : ";
		std::cin >> determine;
	} while (determine);
}
//fuction main to convert
void ToCamelCaseFunction() {
	std::string Input{};
	int determine{};

	do
	{

		system("cls");

		std::cout << "entr your phrase : ";
		std::cin.ignore();  getline(std::cin, Input);

		std::cout << ToCamel(Input) << std::endl;

		std::cout << "Enter \' 1 \' to re Enter or  \' 0 \'  To exit  : ";
		std::cin >> determine;
	} while (determine);
}
//fuction main to convert
void ToPascalCaseFunction() {
	std::string Input{};
	int determine{};

	do
	{

		system("cls");

		std::cout << "entr your phrase : ";
		std::cin.ignore();  getline(std::cin, Input);

		std::cout << ToPascal(Input) << std::endl;

		std::cout << "Enter \' 1 \' to re Enter or  \' 0 \'  To exit  : ";
		std::cin >> determine;
	} while (determine);
}

int main()
{
	int determineMain{};
	int choice{}; 

	do {
		system("cls");

		std::cout << std::endl<< std::endl<< std::endl;
		std::cout << "\t\t To Captilyze all your String Press : 1 " << std::endl;
		std::cout << "\t\t To Captilyze the first letter of Every wordPress : 2 \t \'  Camel Case \' " << std::endl;
		std::cout << "\t\t To Captilyze the first letter of  the all string Press : 1 \t \'  Pascal case \' " << std::endl;

		std::cin >> choice;

		switch (choice)
		{
		case 1:
			ToCpitalStringFunction();
			break;
		case 2:
			ToCamelCaseFunction();
			break;
		case 3:
			ToPascalCaseFunction();
			break;
		default:
			system("cls");
			std::cout << std::endl << std::endl;
			std::cout << "\t\t\t\t Inncorrect!  \n \t\t\t\t Please choose again :- ";
			std::cout<<std::endl<< std::endl<< std::endl;
			break;
		}
			std::cin.ignore();
			std::cout << std::endl << std::endl;
			std::cout << "Enter \' 1 \'    to Main Menue or \"0\"  To exit The Program  : ";
			std::cin >> determineMain;

	} while (determineMain);

	std::cin.get();
}
/**
* Date        Author     Description
* 27/03/2024  MRG        Main File where execution starts.
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/

#include<iostream>

void OPEN_MESSAGE()
{
	std::cout << "Welcome to Stock ChatBot - The following Stock Exchanges are available:" << std::endl;
	std::cout << std::endl;
}

void INVALID_MESSAGE()
{
	std::cout << std::endl;
	std::cout << "Wrong Input, please select a Stock Exchange from above";
}

void DISPLAY_MARKET(std::vector<SExchange> exchangeMarket)
{
	for (auto stockExchange : exchangeMarket)
	{
		std::cout << "    " << stockExchange.getStockExchangeName() << " - " << stockExchange.getStockExchangeCode() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Please Input a Stock Exchange, for example LSE for London Stock Exchange or Type: quit to exit program" << std::endl;
}

void DISPLAY_STOCK()
{


}

void VALIDATE_INPUT(std::vector<SExchange> exchangeMarket,const std::string userInput,bool& validateInput)
{
	for (auto stockExchange : exchangeMarket)
	{
		if (stockExchange.getStockExchangeCode() == userInput)
		{
			std::cout << std::endl;
			for (auto stock : stockExchange.getStockExchangeStocks())
			{
				stock.displayStock();
				validateInput = true;
			}
			std::cout << std::endl;
		}
	}
}

void GET_USER_INPUT(std::string &userInput,bool &isRunning)
{
	std::cout << "Stock Exchange: ";
	std::getline(std::cin, userInput);
	if (userInput == "quit")
	{
		isRunning = false;
	}
}


void LOOP(bool isRunning, bool isStartup,std::vector<SExchange> exchangeMarket) //can be improved. Instead of Looping we can create Event Signal based to be triggered.
{
	std::string userInput;
	while (isRunning)
	{
		std::cout << std::endl;

		if (isStartup)
		{
			DISPLAY_MARKET(exchangeMarket);			
			isStartup = false;
		}
		GET_USER_INPUT(userInput, isRunning);
		if (!isRunning)
		{
			break;
		}

		bool validatedInput = false;
		VALIDATE_INPUT(exchangeMarket,userInput, validatedInput);

		if (!validatedInput && !isStartup)
		{
			INVALID_MESSAGE();
		}

	}
}
void GENERATE_FRONT(Market market)
{

	bool isRunning = true; //Hold if the system is running
	bool isStartup = true; //Hold if the system is at Startup.

	OPEN_MESSAGE(); //Welcome Message.
	LOOP(isRunning, isStartup, market.exchangeMarket); //Loop to simulate GUI.

	//Time's up

	
}
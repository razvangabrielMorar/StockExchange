/**
* Date        Author     Description
* 27/03/2024  MRG        Market Class, that holds the Market with all the stock Exchanges
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/



#include "Market.h"
#include "JsonReaderHelper.h"
#include "SExchange.h"

Market::Market(const std::string marketFileData)
{
	JSON_ERROR createMarketFromJson = JsonReaderHelper::readJsonForSExchange(marketFileData, this->exchangeMarket);
	if (createMarketFromJson != JSON_NO_ERROR )
	{
		printf("Market cannot be created, reason %d \n", (int)createMarketFromJson);
	}
}

Market::~Market()
{

}

void Market::displayMarket()
{
	if (this->exchangeMarket.empty())
	{
		printf("Market empty \n");
	}
	else
	{
		for (std::vector<SExchange>::iterator it = this->exchangeMarket.begin(); it < this->exchangeMarket.end(); it++)
		{
			it->displayStockExchange();
		}
	}
}

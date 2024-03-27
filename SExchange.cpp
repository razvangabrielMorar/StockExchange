/**
* Date        Author     Description
* 27/03/2024  MRG        Stock Exchange Class used to store Stock Exchange Information and perform operations
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/

#include "SExchange.h"

SExchange::SExchange(std::string sExchangeCode, std::string sExchangeName, std::vector<Stock> sExchangeStocks) : stockExchangeCode(sExchangeCode), stockExchangeName(sExchangeName)
{
	this->stockExchangeStocks = sExchangeStocks;
}

void SExchange::displayStockExchange()
{
	printf("Code: %s, Name: %s, Stocks: -> \n", this->stockExchangeCode.c_str() , this->stockExchangeName.c_str());
	for (std::vector<Stock>::iterator it = stockExchangeStocks.begin(); it < stockExchangeStocks.end(); it++)
	{
		it->displayStock();
	}
	printf("----------------------------- \n");
}

std::string SExchange::getStockExchangeCode()
{
	return this->stockExchangeCode;
}

std::string SExchange::getStockExchangeName()
{
	return this->stockExchangeName;
}

std::vector<Stock> SExchange::getStockExchangeStocks()
{
	return this->stockExchangeStocks;
}

SExchange::~SExchange()
{

}

STOCK_ECHANGE_ERROR SExchange::IS_STOCK_EXCHANGE_VALID(std::string sExchangeCode, std::string sExchangeName)
{
	// Can be extended to sho
	STOCK_ECHANGE_ERROR retVal = STOCK_EXCHANGE_ERROR_NO;
	
	if (sExchangeCode.empty())
	{
		retVal = STOCK_EXCHANGE_EMPTY_CODE;
	}
	else if (sExchangeName.empty())
	{
		retVal = STOCK_EXCHANGE_ERROR_EMPTY_NAME;
	}

	return retVal;
}



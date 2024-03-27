/**
* Date        Author     Description
* 27/03/2024  MRG        Stock Class used to store Stock information
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/


#include "Stock.h"

Stock::Stock(std::string stockCode, std::string stockName, double stockPrice) : code(stockCode), price(stockPrice)
{
	this->stockName = stockName;
}

std::string Stock::getCode()
{
	return this->code;
}

std::string Stock::getStockName()
{
	return this->stockName;
}

double Stock::getPrice()
{
	return this->price;
}

void Stock::displayStock()
{
	printf("Code: %s, Stock Name: %s, Stock Price: %.2f \n", this->code.c_str(), this->stockName.c_str(), this->price);
}

Stock::~Stock()
{

}

STOCK_ERROR Stock::IS_STOCK_VALID(std::string stockCode, std::string stockName, double stockPrice)
{
	STOCK_ERROR retVal = STOCK_ERROR_NO;

	if (stockCode.empty())
	{
		retVal = STOCK_ERROR_EMPTY_CODE;
	}
	else if (stockName.empty())
	{
		retVal = STOCK_ERROR_EMPTY_NAME;
	}
	else if (stockPrice < 0)
	{
		retVal = STOCK_ERROR_NEGATIVE_PRICE;
	}
	else if (stockPrice == 0)
	{
		retVal = STOCK_ERROR_EMPTY_PRICE;
	}

	return retVal;
}
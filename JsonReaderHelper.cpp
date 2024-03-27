/**
* Date        Author     Description
* 27/03/2024  MRG        Json Helper Class to read .json file and filter data.
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/


#include "JsonReaderHelper.h"
#include "Defines.h";
#include "nlohmann/json.hpp"
#include <fstream>


JSON_ERROR JsonReaderHelper::readJsonForSExchange(const std::string& fileName, std::vector<SExchange>& stockExchange)
{
	JSON_ERROR retVal= JSON_NO_ERROR;

	std::ifstream jsonFile(fileName);
	
	if (!jsonFile.is_open())
	{
		retVal = JSON_FILE_NOT_OPEN;
	}
	
	nlohmann::json jsonData;

	jsonFile >> jsonData;
	

	for (const auto& stockExchangeDataPackage : jsonData)
	{
		std::string code = stockExchangeDataPackage[STOCK_EXCHANGE_CODE];
		std::string name = stockExchangeDataPackage[STOCK_EXCHANGE_NAME];

		std::vector<Stock> stocks;

		for (const auto& stockDataPackage : stockExchangeDataPackage[STOCK_EXCHANGE_STOCKS])
		{
			STOCK_ERROR retValStock = Stock::IS_STOCK_VALID(stockDataPackage[STOCK_CODE], stockDataPackage[STOCK_NAME], stockDataPackage[STOCK_PRICE]);

			if (retValStock != STOCK_ERROR_NO)
			{
				//Req does not specify How to Handle. 
				printf("Stock not valid, reason: %d", static_cast<int>(retValStock));
		
				
			}
			else
			{
				Stock addedStock(stockDataPackage[STOCK_CODE], stockDataPackage[STOCK_NAME], stockDataPackage[STOCK_PRICE]);
				stocks.emplace_back(addedStock);
			}
		}
		STOCK_ECHANGE_ERROR retValStockExchange = SExchange::IS_STOCK_EXCHANGE_VALID(stockExchangeDataPackage[STOCK_EXCHANGE_CODE], stockExchangeDataPackage[STOCK_EXCHANGE_NAME]);

		if (retValStockExchange != STOCK_EXCHANGE_ERROR_NO)
		{
			//Req does not specify How to Handle. 
			printf("Stock Exchange not valid, reason %d", static_cast<int>(retValStockExchange));
		}
		else
		{
			SExchange addedStockExchange = SExchange(stockExchangeDataPackage[STOCK_EXCHANGE_CODE], stockExchangeDataPackage[STOCK_EXCHANGE_NAME], stocks);
			stockExchange.emplace_back(addedStockExchange);
		}

	}

	jsonFile.close();

	return retVal;
}
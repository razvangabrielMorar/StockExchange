/**
* Date        Author     Description
* 27/03/2024  MRG        Market Class, that holds the Market with all the stock Exchanges
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/


#ifndef MARKET_CLASS
#define MARKET_CLASS


#include <vector>
#include "SExchange.h"

class Market
{
public:

	/*  @brief: Construct Market Exchange
	*   @param: Name of File from which Market is created
	*/
	Market(std::string marketFileData);

	/*  @brief: Destruct Market Exchange
     *  @param:
    */
	~Market();

	/*  @brief: Display Market
    *   @param:
    */
	void displayMarket();

	std::vector<SExchange> exchangeMarket;
};


#endif

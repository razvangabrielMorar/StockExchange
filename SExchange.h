/**
* Date        Author     Description
* 27/03/2024  MRG        Stock Exchange Class used to store Stock Exchange Information and perform operations
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/


#ifndef SEXCHANGE_CLASS
#define SEXCHANGE_CLASS

#include "Stock.h"
#include <string>
#include <vector>

enum STOCK_ECHANGE_ERROR
{
	STOCK_EXCHANGE_ERROR_NO = 0,
	STOCK_EXCHANGE_ERROR_EMPTY_NAME = -1,
	STOCK_EXCHANGE_EMPTY_CODE = -4
};

class SExchange
{
public:

	/*  @brief: Construct Stock Exchange Market Obj
     *  @param: Stock Exchange Market Code, Name, Stocks 
     */
	SExchange(std::string sExchangeCode,  std::string sExchangeName, std::vector<Stock> sExchangeStocks);

	/*  @brief: Display Stock Exchange Market
	*   @param: 
	*/
	void displayStockExchange();

	/*  @brief: Destruct Stock Exchange Market Obj
	 *  @param: 
	 */
	~SExchange();
	
	/*  @brief: Get Code of Stock Exchange Market
	*   @param: 
	*/
	std::string getStockExchangeCode();

	/*  @brief: Get Name of Stock Exchange Market
    *   @param
    */
	std::string getStockExchangeName();

	/*  @brief: Get Stocks from Stock Exchange Market
    *   @param
    */
	std::vector<Stock> getStockExchangeStocks();


	/*  @brief: Valid if the Stock Exchange has valid Data
    *   @param  Stock Exchange Code, Stock Exchange Name;
    */
	static STOCK_ECHANGE_ERROR IS_STOCK_EXCHANGE_VALID(std::string sExchangeCode, std::string sExchangeName);


private:

	std::string stockExchangeCode;
	std::string stockExchangeName;
	std::vector<Stock> stockExchangeStocks;


};

#endif

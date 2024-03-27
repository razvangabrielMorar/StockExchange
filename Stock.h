/**
* Date        Author     Description
* 27/03/2024  MRG        Stock Class used to store Stock information
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/


#ifndef STOCK_CLASS
#define STOCK_CLASS

#include<string>
#include<vector>

enum STOCK_ERROR {
	STOCK_ERROR_NO = 0,
	STOCK_ERROR_EMPTY_NAME = -1,
	STOCK_ERROR_EMPTY_PRICE = 2,
	STOCK_ERROR_NEGATIVE_PRICE = -3,
	STOCK_ERROR_EMPTY_CODE = -4,
};

class Stock
{
  public:

	/*  @brief: Consttruct Stock Object
	*   @param: Code, Name & Price for each Stock
	*/
	Stock( std::string stockCode, std::string stockName, double stockPrice );

	/*  @brief: Print stock data
	*  @param
	*/
	void displayStock();

	/*  @brief Destruct Struct Obj
	*   @param
	*/
	~Stock();

	/*  @brief checks if a stock ca be created
     *   @param Code, Name & Price for each Stock
    */
	static STOCK_ERROR IS_STOCK_VALID(std::string stockCode, std::string stockName, double stockPrice);

  protected:
	/*  @brief: Return Stock Code
	*   @param
	*/
	std::string getCode();

	/*  @brief: Return Stock Name
	*   @param
	*/
	std::string getStockName();

	/*  @brief: Return Stock Price
	*   @param
	*/
	double getPrice();

  private:

	std::string code;
	std::string stockName;
	double price;
};

#endif

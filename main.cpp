/**
* Date        Author     Description
* 27/03/2024  MRG        Main File where execution starts.
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/

#include "Defines.h"
#include "Market.h"
#include "WINDOW.h"


Market generateMarket(const std::string marketData)
{
	return Market(marketData);
}
int main()
{
   
    std::string marketData = std::string(MARKET_PLACE_DATA_SET);
    Market stockMarket = generateMarket(marketData); 

    GENERATE_FRONT(stockMarket);


}

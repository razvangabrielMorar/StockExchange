/**
* Date        Author     Description
* 27/03/2024  MRG        Json Helper Class to read .json file and filter data.
*
*
* Copyright (c) 2024 Morar Razvan - Gabriel , Bucharest Romania
*/


#ifndef JSONREADERHELPER_CLASS
#define JSONREADERHELPER_CLASS

#include<string>
#include<vector>

#include "SExchange.h"

enum JSON_ERROR
{
	JSON_NO_ERROR = 0,
	JSON_EMPTY_FILE = -1,
	JSON_FILE_NOT_OPEN = -2,
	JSON_OTHER_ERROR = -3
};

class SExchange; 
class JsonReaderHelper
{
public:

	/*  @brief: read data from JSON File for Stock Exchange
	*   @param: FileName
	*/
	static JSON_ERROR readJsonForSExchange(const std::string& fileName, std::vector<SExchange>& stockExchange);

private:

};




#endif

#include "ParserSax.h"

void htmlcxx::HTML::ParserSax::parse(const std::string &html)
{
//	std::cerr << "Parsing string" << std::endl;
	parse(html.c_str(), html.c_str() + html.length());
}

void htmlcxx::HTML::ParserSax::parse(const char* html, int htmlLen)
{
	//	std::cerr << "Parsing string" << std::endl;
	parse(html, html + htmlLen);
}

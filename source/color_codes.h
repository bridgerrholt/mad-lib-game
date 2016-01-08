// Color codes for unix-based operating systems.

#ifndef COLOR_CODES_H
#define COLOR_CODES_H

#include <string>

class ColorCodes
{
public:
	ColorCodes() {}

	std::string reset =    "\033[0m";

	std::string black =   "\033[30m";
	std::string red =     "\033[31m";
	std::string green =   "\033[32m";
	std::string yellow =  "\033[33m";
	std::string blue =    "\033[34m";
	std::string magneta = "\033[35m";
	std::string cyan =    "\033[36m";
	std::string white =   "\033[37m";

	std::string boldBlack =   "\033[1m\033[30m";
	std::string boldRed =     "\033[1m\033[31m";
	std::string boldGreen =   "\033[1m\033[32m";
	std::string boldYellow =  "\033[1m\033[33m";
	std::string boldBlue =    "\033[1m\033[34m";
	std::string boldMagenta = "\033[1m\033[35m";
	std::string boldCyan =    "\033[1m\033[36m";
	std::string boldWhite =   "\033[1m\033[37m";
};

const ColorCodes G_COLOR_CODES;

#endif
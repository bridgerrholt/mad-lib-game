// Terminal color codes for unix-based operating systems.

#ifndef COLOR_CODES_H
#define COLOR_CODES_H

#include <string>

class ColorCodes
{
public:
	ColorCodes();

	std::string reset;

	std::string black;
	std::string red;
	std::string green;
	std::string yellow;
	std::string blue;
	std::string magneta;
	std::string cyan;
	std::string white;

	std::string boldBlack;
	std::string boldRed;
	std::string boldGreen;
	std::string boldYellow;
	std::string boldBlue;
	std::string boldMagenta;
	std::string boldCyan;
	std::string boldWhite;
};

#endif
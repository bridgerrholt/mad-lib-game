#include "color_codes.h"

#include <string>

ColorCodes::ColorCodes()
{
	reset   = "\033[0m";

	black   = "\033[30m";
	red     = "\033[31m";
	green   = "\033[32m";
	yellow  = "\033[33m";
	blue    = "\033[34m";
	magneta = "\033[35m";
	cyan    = "\033[36m";
	white   = "\033[37m";

	boldBlack   = "\033[1m\033[30m";
	boldRed     = "\033[1m\033[31m";
	boldGreen   = "\033[1m\033[32m";
	boldYellow  = "\033[1m\033[33m";
	boldBlue    = "\033[1m\033[34m";
	boldMagenta = "\033[1m\033[35m";
	boldCyan    = "\033[1m\033[36m";
	boldWhite   = "\033[1m\033[37m";
}
#include "color_codes.h"

#include <string>

ColorCodes::ColorCodes()
{
	/*reset   = "\033[0m";

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
	boldWhite   = "\033[1m\033[37m";*/

	reset = "\e[0m";
	bold  = "\e[1m";

	regularSet = {
		"\e[0;30m",
		"\e[0;31m",
		"\e[0;32m",
		"\e[0;33m",
		"\e[0;34m",
		"\e[0;35m",
		"\e[0;36m",
		"\e[0;37m"
	};

	boldSet = {
		"\e[1;30m",
		"\e[1;31m",
		"\e[1;32m",
		"\e[1;33m",
		"\e[1;34m",
		"\e[1;35m",
		"\e[1;36m",
		"\e[1;37m"
	};

	underlineSet = {
		"\e[4;30m",
		"\e[4;31m",
		"\e[4;32m",
		"\e[4;33m",
		"\e[4;34m",
		"\e[4;35m",
		"\e[4;36m",
		"\e[4;37m"
	};

	backgroundSet = {
		"\e[40m",
		"\e[41m",
		"\e[42m",
		"\e[43m",
		"\e[44m",
		"\e[45m",
		"\e[46m",
		"\e[47m"
	};
}


/*txtblk='\e[0;30m' # Black - Regular
txtred='\e[0;31m' # Red
txtgrn='\e[0;32m' # Green
txtylw='\e[0;33m' # Yellow
txtblu='\e[0;34m' # Blue
txtpur='\e[0;35m' # Purple
txtcyn='\e[0;36m' # Cyan
txtwht='\e[0;37m' # White
bldblk='\e[1;30m' # Black - Bold
bldred='\e[1;31m' # Red
bldgrn='\e[1;32m' # Green
bldylw='\e[1;33m' # Yellow
bldblu='\e[1;34m' # Blue
bldpur='\e[1;35m' # Purple
bldcyn='\e[1;36m' # Cyan
bldwht='\e[1;37m' # White
unkblk='\e[4;30m' # Black - Underline
undred='\e[4;31m' # Red
undgrn='\e[4;32m' # Green
undylw='\e[4;33m' # Yellow
undblu='\e[4;34m' # Blue
undpur='\e[4;35m' # Purple
undcyn='\e[4;36m' # Cyan
undwht='\e[4;37m' # White
bakblk='\e[40m'   # Black - Background
bakred='\e[41m'   # Red
bakgrn='\e[42m'   # Green
bakylw='\e[43m'   # Yellow
bakblu='\e[44m'   # Blue
bakpur='\e[45m'   # Purple
bakcyn='\e[46m'   # Cyan
bakwht='\e[47m'   # White
txtrst='\e[0m'    # Text Reset*/
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define SC(ruta) "$HOME/scripts/" #ruta
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	SC("vol.sh"),		0,		12},
	{"",	SC("bateria.sh"), 	1,		0},
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

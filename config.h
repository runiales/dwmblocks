//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
<<<<<<< HEAD
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/*{"",	"sb-tasks",	10,	26},*/
	/*{"",	"sb-music",	0,	11},*/
	/*{"",	"sb-pacpackages",	0,	8},*/
	{"",	"sb-memory",	10,	14},
	{"",	"sb-cpubars",	1,	18},
	/* {"",	"sb-cpu",	10,	18}, */
	{"",	"sb-moonphase",	18000,	17},
	{"",	"sb-forecast",	18000,	5},
	/*{"",	"sb-mailbox",	180,	12},*/
	/*{"",	"sb-news",	0,	6},*/
	/*{"",	"sb-torrent",	20,	7},*/
	/*{"",	"sb-nettraf",	1,	16},*/
	{"",	"sb-volume",	0,	10},
	/*{"",	"sb-battery",	5,	3},*/
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	5,	4},
=======
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
	{"",		"tail -1 /home/runiales/.local/share/pomodoro",		0,			28},
	{"",		"cat /tmp/recordingicon 2>/dev/null",	0,			9},
	{"",		"cat /tmp/nonoti 2>/dev/null",		0,			20},
	/*{"",		"sb-tasks",				10,			26},*/
	{"",		"sb-music",				0,			11},
	/*{"",		"sb-pacpackages",			0,			8},*/
	{"",		"sb-memory",				10,			14},
	{"",		"sb-cpubars",				1,			18},
	{"",		"sb-cpu",				10,			18},
	/* {"",		"sb-moonphase",				18000,			17}, */
	/* {"",		"sb-forecast",				18000,			5}, */
	{"",		"sb-mailbox",				10,			12},
	{"",		"sb-news",				0,			6},
	{"",		"sb-torrent",				20,			7},
	/* {"",		"sb-nettraf",				1,			16}, */
	{"",		"sb-volume",				0,			10},
	{"",		"sb-battery",				5,			3},
	{"",		"sb-clock",				60,			1},
	{"",		"sb-internet",				5,			4},
>>>>>>> c9c10c9 (preinstall)
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }


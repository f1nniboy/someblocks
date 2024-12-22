static const Block blocks[] = {
	/* 	cmd																				update interval		update signal */
	{	"/home/etc/blocks/song",														0,					4},

	{	"/home/etc/blocks/volume @DEFAULT_AUDIO_SOURCE@ '^fg(a6e3a1)󰍬' '^fg(eba0ac)󰍭'",	0,					3},

	{	"/home/etc/blocks/volume @DEFAULT_AUDIO_SINK@ '^fg(89dceb) ' '^fg(eba0ac) '",	0,					3},

	{	"date '+%d.%m.%Y, %H:%M'",														15,					0},
};

static char delim[] = "^fg(6c7086) | ^fg()";
static unsigned int delimLen = 100;

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;

static const char *fonts[] = {
	"Roboto:size=14"
};
static const char *prompt = "dmenu:";
static const char *colors[SchemeLast][2] = {
	/*                   fg         bg    */
	[SchemeNorm] = { "#c5c8c6", "#1d1f21" },
	[SchemeSel]  = { "#f0c674", "#303336" },
	[SchemeOut]  = { "#c5c8c6", "#1d1d21" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

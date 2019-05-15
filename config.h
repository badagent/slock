/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

static const char *background_image = "/home/badagent/wallpaper.ff";

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

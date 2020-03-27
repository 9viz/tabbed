/* See LICENSE file for copyright and license details. */

/* font */
static const char font[]        = "monospace:pixelsize=12";

static const char* normbgcolor  = "#a9a9a1";
static const char* normfgcolor  = "#101412";
static const char* selbgcolor   = "#e7e7d4";
static const char* selfgcolor   = "#1c1e1d";
static const char* urgbgcolor   = "#e7e7d4";
static const char* urgfgcolor   = "#101412";

static const char before[]      = "<";
static const char after[]       = ">";
static const char titletrim[]   = "...";
static const int  tabwidth      = 150;
static const Bool foreground    = True;
static       Bool urgentswitch  = True;
static const int  barheight     = 30;
static const int  leftpadding   = 15;
static const int  autohide      = 1;
static const int  numberwin     = 0;
static const int  todrawbar     = 1;

/*
 * Where to place a new tab when it is opened. When npisrelative is True,
 * then the current position is changed + newposition. If npisrelative
 * is False, then newposition is an absolute position.
 */
static int  newposition   = 0;
static Bool npisrelative  = True;

static const char *switchcmd[] = { "stab",  NULL };
static const char *spawncmd[]  = { "sptab", NULL };

#define MODKEY ControlMask
static Key keys[] = {
    /* modifier             key        function     argument */
    { MODKEY|ShiftMask,     XK_Return, focusonce,   { 0 } },
    { MODKEY|ShiftMask,     XK_Return, spawn,       { 0 } },
    { MODKEY|ShiftMask,     XK_j,      rotate,      { .i = +1 } },
    { MODKEY|ShiftMask,     XK_k,      rotate,      { .i = -1 } },
    { MODKEY|ShiftMask,     XK_h,      movetab,     { .i = -1 } },
    { MODKEY|ShiftMask,     XK_l,      movetab,     { .i = +1 } },
    { MODKEY,               XK_q,      killclient,  { 0 } },
    { MODKEY|ShiftMask,     XK_f,      fullscreen,  { 0 } },
    { MODKEY,               XK_grave,  spawn,       { .v = switchcmd } },
    { MODKEY|ShiftMask,     XK_grave,  spawn,       { .v = spawncmd  } },
};

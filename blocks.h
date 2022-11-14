//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/    /*Update Signal*/
    {"  ", "disk /home"          ,   60  ,    5}, 
    {"  ", "dwm_mem "            ,   1   ,    6},
    {" "  , "selic_ipca"          ,   3600,    7},
    {" "  , "currency"            ,   3600,    9},
    {" "  , "volume"              ,   0   ,   10},
    {"  ", "date '+%a, %d/%m'"   ,   1   ,   11},
    {"  ", "date '+%H:%M'"       ,   1   ,   12},
    {" "  , "connections"         ,   60  ,   13},
    {" "  , "ac_bat"              ,   5   ,   14},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;

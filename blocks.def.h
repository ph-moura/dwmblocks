//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/    /*Update Signal*/
    {"  "  , "disk /home"          ,   60  ,    5}, 
    {"  "  , "dwm_mem "            ,   1   ,    6},
    {"  "  , "ipca"                ,   3600,    7},
    {"  "  , "euro"                ,   3600,    8},
    {"  "  , "dolar"               ,   3600,    9},
    {""     , "volume"              ,   0   ,   10},
    {"  "  , "date '+%a, %d de %b'",   1   ,   11},
    {"  "  , "date '+%H:%M:%S'"    ,   1   ,   12},
    {" "    , "ac_bat"              ,   5   ,   13},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;

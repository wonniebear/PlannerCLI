#ifndef FORMAT_H_INCLUDED
#define FORMAT_H_INCLUDED

#define ANSI_COLOR_RESET		"\x1b[0m"
#define ANSI_TEXT_COLOR_BLACK		"\x1b[30m"
#define ANSI_TEXT_COLOR_RED			"\x1b[31m"
#define ANSI_TEXT_COLOR_GREEN		"\x1b[32m"
#define ANSI_TEXT_COLOR_YELLOW		"\x1b[33m"
#define ANSI_TEXT_COLOR_BLUE		"\x1b[34m"
#define ANSI_TEXT_COLOR_MAGENTA		"\x1b[35m"
#define ANSI_TEXT_COLOR_CYAN		"\x1b[36m"
#define ANSI_TEXT_COLOR_WHITE		"\x1b[37m"
#define ANSI_TEXT_COLOR_DEFAULT		"\x1b[39m"
#define ANSI_BACKGROUND_COLOR_BLACK		"\x1b[40m"
#define ANSI_BACKGROUND_COLOR_RED		"\x1b[41m"
#define ANSI_BACKGROUND_COLOR_GREEN		"\x1b[42m"
#define ANSI_BACKGROUND_COLOR_YELLOW	"\x1b[43m"
#define ANSI_BACKGROUND_COLOR_BLUE		"\x1b[44m"
#define ANSI_BACKGROUND_COLOR_MAGENTA	"\x1b[45m"
#define ANSI_BACKGROUND_COLOR_CYAN		"\x1b[46m"
#define ANSI_BACKGROUND_COLOR_WHITE		"\x1b[47m"
#define ANSI_BACKGROUND_COLOR_DEFAULT	"\x1b[49m"
#define ANSI_TEXT_COLOR_GRAY				"\x1b[90m"
#define ANSI_TEXT_COLOR_BRIGHT_RED			"\x1b[91m"
#define ANSI_TEXT_COLOR_BRIGHT_GREEN		"\x1b[92m"
#define ANSI_TEXT_COLOR_BRIGHT_YELLOW		"\x1b[93m"
#define ANSI_TEXT_COLOR_BRIGHT_BLUE			"\x1b[94m"
#define ANSI_TEXT_COLOR_BRIGHT_MAGENTA		"\x1b[95m"
#define ANSI_TEXT_COLOR_BRIGHT_CYAN			"\x1b[96m"
#define ANSI_TEXT_COLOR_BRIGHT_WHITE		"\x1b[97m"
#define ANSI_TEXT_COLOR_BRIGHT_DEFAULT		"\x1b[99m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_GRAY		"\x1b[100m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_RED		"\x1b[101m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_GREEN		"\x1b[102m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_YELLOW		"\x1b[103m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_BLUE		"\x1b[104m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_MAGENTA	"\x1b[105m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_CYAN		"\x1b[106m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_WHITE		"\x1b[107m"
#define ANSI_BACKGROUND_BRIGHT_COLOR_DEFAULT	"\x1b[109m"

#ifdef __WIN32
    #define CLEAR_SCREEN system("cls");
#elif __UNIX
    #define CLEAR_SCREEN system("clear");
#endif // __WIN32

#endif // FORMAT_H_INCLUDED

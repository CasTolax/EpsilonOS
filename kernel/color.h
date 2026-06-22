/*
 * We won't just be able to print white text on the screen—we'll
 * also be able to print in color! This will make it easier to
 * debug or spot important output! We can make it easier to
 * use by assigning colors to variables.
 *
 * (To view these colors, check whether your terminal supports ANSI...)
 *
 * By CasTolax 2026
 */

#ifndef COLOR_H
#define COLOR_H

// reset the color
#define RESET   "\033[0m"
#define BOLD    "\033[1m"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#define BRIGHT_BLACK   "\033[90m"
#define BRIGHT_RED     "\033[91m"
#define BRIGHT_GREEN   "\033[92m"
#define BRIGHT_YELLOW  "\033[93m"
#define BRIGHT_BLUE    "\033[94m"
#define BRIGHT_MAGENTA "\033[95m"
#define BRIGHT_CYAN    "\033[96m"
#define BRIGHT_WHITE   "\033[97m"

#endif

/*
 * Tides of Manila: A Merchant's Quest is a turn-based CLI-based game.
 * Copyright (C) 2024  CielSachen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef CCPROG1_CONSOLE_H_
#define CCPROG1_CONSOLE_H_

#define CONSOLE_MAX_WIDTH 156

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[0;31m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_YELLOW "\033[0;33m"
#define COLOR_BLUE "\033[0;34m"
#define COLOR_PURPLE "\033[0;35m"
#define COLOR_CYAN "\033[0;36m"

/** Resets the color of text output in the console using an ANSI escape sequence. */
void resetConsoleColor(void);

/** Sets the color of text output in the console to red using an ANSI escape sequence. */
void setConsoleColorToRed(void);

/** Sets the color of text output in the console to green using an ANSI escape sequence. */
void setConsoleColorToGreen(void);

/** Sets the color of text output in the console to yellow using an ANSI escape sequence. */
void setConsoleColorToYellow(void);

/** Sets the color of text output in the console to blue using an ANSI escape sequence. */
void setConsoleColorToBlue(void);

/** Sets the color of text output in the console to purple using an ANSI escape sequence. */
void setConsoleColorToPurple(void);

/** Sets the color of text output in the console to cyan using an ANSI escape sequence. */
void setConsoleColorToCyan(void);

/**
 * Prompts the player to input an integer into the console.
 * @param nConsoleLeftPaddingSize The number of spaces to move the console cursor to the right.
 * @returns The first integer value inputted into the console.
 */
int getIntegerInput(int nConsoleLeftPaddingSize);

/**
 * Prompts the player to input a character into the console.
 * @param nConsoleLeftPaddingSize The number of spaces to move the console cursor to the right.
 * @returns The first character value inputted into the console.
 */
char getCharacterInput(int nConsoleLeftPaddingSize);

#endif  // CCPROG1_CONSOLE_H_

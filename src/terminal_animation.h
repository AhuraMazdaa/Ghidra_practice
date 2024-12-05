#ifndef TERMINAL_ANIMATION_H
#define TERMINAL_ANIMATION_H

#include <stdio.h>
#include <unistd.h>

// Clears the terminal screen
void clear_screen();

// Moves the cursor to a specific position (row, col)
void move_cursor(int row, int col);

// Displays a character at the specified position
void draw_char(int row, int col, char c);

// Sleeps for a given number of milliseconds
void sleep_ms(int milliseconds);

#endif // TERMINAL_ANIMATION_H

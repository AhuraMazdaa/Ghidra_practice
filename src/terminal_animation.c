#include "terminal_animation.h"

// Clears the terminal screen
void clear_screen() {
    printf("\033[2J"); // ANSI escape code to clear the screen
    fflush(stdout);
}

// Moves the cursor to a specific position (row, col)
void move_cursor(int row, int col) {
    printf("\033[%d;%dH", row, col); // ANSI escape code for moving the cursor
    fflush(stdout);
}

// Displays a character at the specified position
void draw_char(int row, int col, char c) {
    move_cursor(row, col);
    printf("%c", c);
    fflush(stdout);
}

// Sleeps for a given number of milliseconds
void sleep_ms(int milliseconds) {
    usleep(milliseconds * 1000); // Convert ms to microseconds
}

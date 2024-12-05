#include "terminal_animation.h"

#define SCREEN_HEIGHT 20
#define SCREEN_WIDTH 50

int main() {
    int x = 1, y = 1;       // Ball position
    int dx = 1, dy = 1;     // Ball direction
    char ball = 'O';        // Ball character

    while (1) {
        clear_screen();

        // Draw the ball at the current position
        draw_char(y, x, ball);

        // Update the ball position
        x += dx;
        y += dy;

        // Bounce the ball off the walls
        if (x <= 1 || x >= SCREEN_WIDTH) dx = -dx;
        if (y <= 1 || y >= SCREEN_HEIGHT) dy = -dy;

        // Wait before the next frame
        sleep_ms(50);
    }

    return 0;
}

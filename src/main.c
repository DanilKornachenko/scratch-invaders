#include "invaders.h"

void game_loop(game_info *game);

int main(void) {
    initscr();
    start_color();

    init_pair(1, COLOR_CYAN, COLOR_CYAN); // cyan block
    init_pair(2, COLOR_WHITE, COLOR_WHITE); // white block
    init_pair(3, COLOR_WHITE, COLOR_BLACK); // bullet color
    init_pair(4, COLOR_GREEN, COLOR_GREEN); // invaders_color
    init_pair(5, COLOR_BLUE, COLOR_BLUE); // barricade block
    init_pair(6, COLOR_BLACK, COLOR_BLACK); // Space

    game_info game;

    init_game(&game, 20, 50);

    game_loop(&game);

    endwin();

    return 0;
}

void game_loop(game_info *game) {

    print_game(game);

    getch();

}

#include "invaders.h"

void init_game(game_info *game, int rows_, int cols_) {

    game->rows = rows_;
    game->cols = cols_;

    game->field = malloc(sizeof(char*) * game->rows);

    for (int i = 0; i < game->rows; i++) {
        game->field[i] = malloc(sizeof(char) * game->cols);
    }

    for (int i = 0; i < game->rows; i++) {
        for (int j = 0; j < game->cols; j++) {
            if (i == 0 || j == 0 || j == game->cols - 1 || i == game->rows - 1) {
                game->field[i][j] = '#';
            } else {
                game->field[i][j] = ' ';
            }
        }
    }
}

void print_game(game_info *game) {
    for (int i = 0; i < game->rows; i++) {
        for (int j = 0; j < game->cols; j++) {
            if (game->field[i][j] == '#') {
                attron(COLOR_PAIR(1));
            } else if (game->field[i][j] == '.') {
                attron(COLOR_PAIR(5));
            } else if (game->field[i][j] == '|') {
                attron(COLOR_PAIR(3));
            } else if (game->field[i][j] == 'I') {
                attron(COLOR_PAIR(4));
            } else if (game->field[i][j] == 'H') {
                attron(COLOR_PAIR(2));
            } else {
                attron(COLOR_PAIR(6));
            }
            printw("%c",game->field[i][j]);
        }
        printw("\n");
    }
    refresh();
}

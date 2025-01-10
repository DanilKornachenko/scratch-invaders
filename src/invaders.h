#include <stdlib.h>
#include <ncurses.h>

typedef struct {
    char **field;
    int rows;
    int cols;
} game_info;

void init_game(game_info *game, int rows_, int cols_);

void print_game(game_info *game);

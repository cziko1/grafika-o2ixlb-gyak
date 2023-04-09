#include "game.h"

/**
 * Main function
 */
int main(int argc, char* argv[])
{
    Game game; // I think the window have been initialized

    init_game(&game, 800, 300); // I can set here the size of the window
    while (game.is_running) {
        handle_game_events(&game);
        update_game(&game);
        render_game(&game);
    }
    destroy_game(&game);

    return 0;
}

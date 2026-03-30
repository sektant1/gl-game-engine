#include "ENG.h"
#include "Game.h"

int main()
{
    Game       *game = new Game();
    ENG::Engine engine;
    engine.SetApplication(game);

    if (engine.Init()) {
        engine.Run();
    }

    engine.Destroy();

    return 0;
}


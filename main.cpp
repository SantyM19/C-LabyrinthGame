#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    cout << "Hello we" << endl;

    while(isGameOver == false)
        {
            Hero.CallInput();
            Map.Draw();
        }
    return 0;
}

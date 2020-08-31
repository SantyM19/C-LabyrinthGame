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
            //Aqui es el loop de nuestro juego
            Hero.CallInput();
            //Actualizado de inf heroe a mapa
            Map.SetPlayerCell(Hero.x, Hero.y);

            //Aqui dibujamos el mapa
            Map.Draw();
        }
    return 0;
}

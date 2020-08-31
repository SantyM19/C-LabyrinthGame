#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    GameMap Map;
    Player Hero;

    Map.DrawIntro();
    Map.Draw();

    while(Map.isGameOver == false)
        {
            cout << "Introduce el comando de movimiento 'w', 'a', 's', 'd'" << endl;
            //Aqui es el loop de nuestro juego
            Hero.CallInput();
            //Actualizado de inf heroe a mapa
            if(Map.SetPlayerCell(Hero.x, Hero.y)){
                //Aqui dibujamos el mapa
                Map.Draw();
            }
            else{
                Hero.ResetToSafePosition();
                Map.Draw();
            }
        }
    return 0;
}

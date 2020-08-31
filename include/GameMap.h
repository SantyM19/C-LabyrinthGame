#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"



class GameMap
{
    public:
        GameMap();
        //apuntando hacia la ceda domde esta el jugador dentro del mapa y lo actualizara
        MapCell* PlayerCell;
        MapCell cells[15][10];

        void Draw();
        // This function get Coordinates Player
        void SetPlayerCell(int PlayerX,int PlayerY);


    protected:
        void LoadMapFromFile();
    private:
};

#endif // GAMEMAP_H

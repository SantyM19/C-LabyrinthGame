#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"



class GameMap
{
    public:
        GameMap();
        MapCell* PlayerCell;
        MapCell cells[15][10];

        void Draw();
        // this function get Player Coordinates
        void SetPlayerCell(int PlayerX,int PlayerY);


    protected:

    private:
};

#endif // GAMEMAP_H

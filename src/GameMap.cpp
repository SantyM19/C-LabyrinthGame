#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    PlayerCell = NULL;
    LoadMapFromFile();
}

//Draw map

void GameMap::Draw()
{
    for(int i = 0; i < 15; i = i + 1 ){
        for(int j = 0; j < 10; j = j + 1 ){
            cout << cells[i][j].id;
        }

        cout << endl;
    }
}

//Coordinates Player

void GameMap::SetPlayerCell(int PlayerX,int PlayerY){
    if (PlayerCell != NULL){
        PlayerCell->id=0;
    }
    PlayerCell = &cells[PlayerY][PlayerX];
    PlayerCell->id='3';
}

//Load Map From File

void GameMap::LoadMapFromFile(){

    string line;
    int row = 0;
    ifstream MyFile("Map.txt");

    if (MyFile.is_open()){
        while(getline(MyFile,line)){
            for(int p = 0 ; p < line.length() ; p++){
                if(line[p]=='0'){
                    cells[row][p].id = 0;
                }
                else{
                    cells[row][p].id = line[p];
                }
            }
            row++;
        }
    }
    else{
        cout << "Fatal Error: Map File Could not be loaded!" << endl;
    }
}

#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::CallInput()
{
        char UserInput = ' ';
        cin >> UserInput;

        switch(UserInput)
        {
        case 'w':
            lastY=y;
            y = y - 1;
            cout << "El jugador se mueve arriba" << endl;
            break;
        case 's':
            lastY=y;
            y = y + 1;
            cout << "El jugador se mueve abajo" << endl;
            break;
        case 'd':
            lastX=x;
            x = x + 1;
            cout << "El jugador se mueve a la derecha" << endl;
            break;
        case 'a':
            lastX=x;
            x = x - 1;
            cout << "El jugador se mueve a la izquierda" << endl;
            break;
        }
        cout<<"MiJugador esta en las coordenadas X: "<<x<<", Y: "<<y<<endl;
}


void Player::ResetToSafePosition(){
    x=lastX;
    y=lastY;
}

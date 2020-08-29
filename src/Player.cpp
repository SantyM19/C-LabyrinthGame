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
            y = y - 1;
            cout << "El jugador se mueve arriba" << endl;
            break;
        case 's':
            y = y + 1;
            cout << "El jugador se mueve abajo" << endl;
            break;
        case 'd':
            x = x + 1;
            cout << "El jugador se mueve a la derecha" << endl;
            break;
        case 'a':
            x = x - 1;
            cout << "El jugador se mueve a la izquierda" << endl;
            break;
        }
        cout<<"MiJugador esta en las coordenadas X: "<<x<<", Y: "<<y<<endl;
}

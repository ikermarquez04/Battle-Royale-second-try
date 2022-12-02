// P013 Battle Royale.cpp
//

#include <iostream>
#include <stdio.h>      
#include <stdlib.h>
#include <time.h>



struct Participante {
    int HP;
    int attack;
    int defense;
    int speed;

}jugador;

int main()
{
    srand(time(NULL));
    Participante kike;
    kike.HP = rand() % 50;
    kike.attack = rand() % 50;
    kike.defense = rand() % 50;
    kike.speed = rand() % 50;

    Participante arnulfo;
    arnulfo.HP = rand() % 50;
    arnulfo.attack = rand() % 50;
    arnulfo.defense = rand() % 50;
    arnulfo.speed = rand() % 50;

    Participante Juanfer;
    Juanfer.HP = rand() % 50;
    Juanfer.attack = rand() % 50;
    Juanfer.defense = rand() % 50;
    Juanfer.speed = rand() % 50;

    Participante Fer;
    Fer.HP = rand() % 50;
    Fer.attack = rand() % 50;
    Fer.defense = rand() % 50;
    Fer.speed = rand() % 50;

    Participante Daniel;
    Daniel.HP = rand() % 50;
    Daniel.attack = rand() % 50;
    Daniel.defense = rand() % 50;
    Daniel.speed = rand() % 50;

    Participante Obeth;
    Obeth.HP = rand() % 50;
    Obeth.attack = rand() % 50;
    Obeth.defense = rand() % 50;
    Obeth.speed = rand() % 50;

    Participante Mariana;
    Mariana.HP = rand() % 50;
    Mariana.attack = rand() % 50;
    Mariana.defense = rand() % 50;
    Mariana.speed = rand() % 50;

    Participante Rojo;
    Rojo.HP = rand() % 50;
    Rojo.attack = rand() % 50;
    Rojo.defense = rand() % 50;
    Rojo.speed = rand() % 50;

    Participante Azul;
    Azul.HP = rand() % 50;
    Azul.attack = rand() % 50;
    Azul.defense = rand() % 50;
    Azul.speed = rand() % 50;

    Participante Hoja;
    Hoja.HP = rand() % 50;
    Hoja.attack = rand() % 50;
    Hoja.defense = rand() % 50;
    Hoja.speed = rand() % 50;

    Participante Victor;
    Victor.HP = rand() % 50;
    Victor.attack = rand() % 50;
    Victor.defense = rand() % 50;
    Victor.speed = rand() % 50;

    Participante Gloria;
    Gloria.HP = rand() % 50;
    Gloria.attack = rand() % 50;
    Gloria.defense = rand() % 50;
    Gloria.speed = rand() % 50;

    Participante Grusha;
    Grusha.HP = rand() % 50;
    Grusha.attack = rand() % 50;
    Grusha.defense = rand() % 50;
    Grusha.speed = rand() % 50;

    Participante Cloud;
    Cloud.HP = rand() % 50;
    Cloud.attack = rand() % 50;
    Cloud.defense = rand() % 50;
    Cloud.speed = rand() % 50;

    Participante Tifa;
    Tifa.HP = rand() % 50;
    Tifa.attack = rand() % 50;
    Tifa.defense = rand() % 50;
    Tifa.speed = rand() % 50;

    Participante Sephiroth;
    Sephiroth.HP = rand() % 50;
    Sephiroth.attack = rand() % 50;
    Sephiroth.defense = rand() % 50;
    Sephiroth.speed = rand() % 50;

    Participante Damian;
    Damian.HP = rand() % 50;
    Damian.attack = rand() % 50;
    Damian.defense = rand() % 50;
    Damian.speed = rand() % 50;

    Participante Noa;
    Noa.HP = rand() % 50;
    Noa.attack = rand() % 50;
    Noa.defense = rand() % 50;
    Noa.speed = rand() % 50;

    Participante Haru;
    Haru.HP = rand() % 50;
    Haru.attack = rand() % 50;
    Haru.defense = rand() % 50;
    Haru.speed = rand() % 50;

    Participante Luna;
    Luna.HP = rand() % 50;
    Luna.attack = rand() % 50;
    Luna.defense = rand() % 50;
    Luna.speed = rand() % 50;

    // Inicio del combate

    if (kike.attack > arnulfo.attack > Juanfer.attack > Fer.attack > Daniel.attack > Obeth.attack > Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "El Kike es el ganador " << std::endl;
    }

    if (arnulfo.attack > Juanfer.attack > Fer.attack > Daniel.attack > Obeth.attack > Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Arnulfo es el ganador " << std::endl;
    }

    if (Juanfer.attack > Fer.attack > Daniel.attack > Obeth.attack > Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Juanfer es el ganador " << std::endl;
    }

    if (Fer.attack > Daniel.attack > Obeth.attack > Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Fer es el ganador " << std::endl;
    }

    if (Daniel.attack > Obeth.attack > Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Daniel es el ganador " << std::endl;
    }


    if (Obeth.attack > Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Obeth se lleva la victoria " << std::endl;
    }

    if (Mariana.attack > Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Mariana se lleva la victoria " << std::endl;
    }

    if (Rojo.attack > Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Entrenador Rojo ha ganado " << std::endl;
    }

    if (Azul.attack > Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Rival Azul ha ganado " << std::endl;
    }

    if (Hoja.attack > Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Entrenadora Hoja ha ganado " << std::endl;
    }

    if (Victor.attack > Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Retador Victor ha ganado " << std::endl;
    }

    if (Gloria.attack > Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Retadora Gloria ha ganado " << std::endl;
    }

    if (Grusha.attack > Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Lider de gimnacio Grusha ha ganado " << std::endl;
    }

    if (Cloud.attack > Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "EX SOLDADO Cloud gana " << std::endl;
    }

    if (Tifa.attack > Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Tifa gana " << std::endl;
    }

    if (Sephiroth.attack > Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Sephiroth triunfo... " << std::endl;
    }

    if (Damian.attack > Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Cocinero Damian ha ganado " << std::endl;
    }

    if (Noa.attack > Haru.attack > Luna.attack);
    {
        std::cout << "Lider del Team Star Noa ha ganado " << std::endl;
    }

    if (Haru.attack > Luna.attack);
    {
        std::cout << "Haru se lleva el premio " << std::endl;
    }

    if (Luna.attack);
    {
        std::cout << "Luna se lleva el premio " << std::endl;
    }
}
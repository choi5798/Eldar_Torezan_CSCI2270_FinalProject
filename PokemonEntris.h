#ifndef POKEMONENTRIS_H
#define POKEMONENTRIS_H
#include<vector>
#include<iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct PokemonInfo
{
    string Name;
    int PokedexNumber;
    string type1;
    string type2;
    string species;
    float height;
    float weight;
    string GrowthRate;
    int BaseHp;
    int BaseAttack;
    int BaseDef;
    int BaseSpAttack;
    int BaseSpDef;
    int BaseSpeed;
    int BaseTotal;
    string eggGroup1;
    string eggGroup2;
    float malePercent;
    float femalePercent;
    string DescriptionText;
    PokemonInfo *next1;
    PokemonInfo *next2;
};
class PokemonEntris
{
    public:
        PokemonEntris();
        virtual ~PokemonEntris();
        void createPokedex(string txtName);
        void PokemonGeneralInformationMenu(string trainerName);
        void PokemonBattleInformationMenu(string trainerName);
        void RandomCuriosity(string trainerName);
        void SearchHP();
        void SearchATK();
        void SearchDEF();
        void SearchSpA();
        void SearchSpD();
        void SearchSPD();
        void SearchByHeight();
        void SearchByWeight();
        void SearchByNNGeneral();
        void SearchByNNBattle();
        PokemonInfo *Grass;
        PokemonInfo *Fire;
        PokemonInfo *Water;
        PokemonInfo *Dragon;
        PokemonInfo *Rock;
        PokemonInfo *Ground;
        PokemonInfo *Electric;
        PokemonInfo *Poison;
        PokemonInfo *Ice;
        PokemonInfo *Normal;
        PokemonInfo *Flying;
        PokemonInfo *Bug;
        PokemonInfo *Psychic;
        PokemonInfo *Fighting;
        PokemonInfo *Ghost;
        PokemonInfo pokedex[151];

    protected:
    private:

};

#endif // POKEMONENTRIS_H

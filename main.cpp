#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <stdlib.h>
#include <ctype.h>
#include "PokemonEntris.h"

using namespace std;

void RandomFacts(string *factslist)
{
    string whatever;
    system("clear");
    int Rnumb = rand() %39;
    cout << factslist[Rnumb] << endl;
    cin >> whatever;
}

void FactsList(string * factslist)
{
    ifstream InFile ("PokemonFacts.txt");
    if ( !InFile.good() )
        cout<<"There Are No Pokemon Facts Entries\n";
    else
    {
        for(int i =0 ; i<40; i++)
        {
            getline (InFile,factslist[i]);
        }
    }
}

int main()
{
    string trainerName;
    string pokefacts[40];
    int menuStatus;
    int leng;
    PokemonEntris Pokedex;
    FactsList(&pokefacts[0]);
    Pokedex.createPokedex("PokedexEntris.txt");
    cout << "Trainer, Please enter your name:\n";
    getline(cin, trainerName);
    leng = 26-trainerName.length();
    do {
        system("clear");
        cout << "===============Pokedex===============" << endl << "- Kanto's Regional Pokedex          |" << endl << "- Trainer: " << trainerName;
        for (int i = 0; i< leng-1;i++)
            cout << " ";
        cout << "|" << endl << "                                    |"<< endl<<
         "- Please Select The Desired Option: |" << endl << "- 1. Pokemon General Information    |"
        << endl << "- 2. Pokemon Battle Information     |" << endl << "- 3. Random Curiosity               |" << endl <<
        "- 4. Turn off Pokedex               |"<< endl << "====================================="<< endl;
        cin >> menuStatus;

        switch (menuStatus){
            case 1:
                Pokedex.PokemonGeneralInformationMenu(trainerName);
                break;
            case 2:
                Pokedex.PokemonBattleInformationMenu(trainerName);
                break;
            case 3:
                RandomFacts(&pokefacts[0]);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
        }
    }while (menuStatus != 4);

}

#include "PokemonEntris.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <stdlib.h>

PokemonEntris::PokemonEntris()
{
    //ctor
}

PokemonEntris::~PokemonEntris()
{
    //dtor
}

void PokemonEntris :: createPokedex(string txtName)
{
    string Aux;
    int i = 0;
    ifstream InFile ( "PokedexEntris");
    if ( !InFile.good() )
        cout<<"There Are no Pokemon Entries\n";
    else
    {
        for(i=0 ; !InFile.eof(); i++)
        {
            getline (InFile,pokedex[i].Name,',');
            getline (InFile,Aux,',');
            pokedex[i].PokedexNumber = atoi(Aux.c_str());


            getline (InFile,pokedex[i].type1,',');
            if (pokedex[i].type1 == " Fire")
            {
                if(Fire == NULL)
                    Fire = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Fire;
                    Fire = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Grass")
            {
                if(Grass == NULL)
                    Grass = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Grass;
                    Grass = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Water")
            {
                if(Water == NULL)
                    Water = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Water;
                    Water = &pokedex[i];
                }

            }

            else if (pokedex[i].type1 == " Dragon")
            {
                if(Dragon == NULL)
                    Dragon = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Dragon;
                    Dragon = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Rock")
            {
                if(Rock == NULL)
                    Rock = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Rock;
                    Rock = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Ground")
            {
                if(Ground == NULL)
                    Ground = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Ground;
                    Ground = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Electric")
            {
                if(Electric == NULL)
                    Electric = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Electric;
                    Electric = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Poison")
            {
                if(Poison == NULL)
                    Poison = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Poison;
                    Poison = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Ice")
            {
                if(Ice == NULL)
                    Ice = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Ice;
                    Ice = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Normal")
            {
                if(Normal == NULL)
                    Normal = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Normal;
                    Normal = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Flying")
            {
                if(Flying == NULL)
                    Flying = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Flying;
                    Flying = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Bug")
            {
                if(Bug == NULL)
                    Bug = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Bug;
                    Bug = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Psychic")
            {
                if(Psychic == NULL)
                    Psychic = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Psychic;
                    Psychic = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Fighting")
            {
                if(Fighting == NULL)
                    Fighting = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Fighting;
                    Fighting = &pokedex[i];
                }

            }
            else if (pokedex[i].type1 == " Ghost")
            {
                if(Ghost == NULL)
                    Ghost = &pokedex[i];
                else
                {
                    pokedex[i].next1 = Ghost;
                    Ghost = &pokedex[i];
                }

            }

            getline (InFile,pokedex[i].type2,',');

            if(pokedex[i].type1 != pokedex[i].type2)
            {
                if (pokedex[i].type2 == " Fire")
                {
                    if(Fire == NULL)
                        Fire = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Fire;
                        Fire = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Grass")
                {
                    if(Grass == NULL)
                        Grass = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Grass;
                        Grass = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Water")
                {
                    if(Water == NULL)
                        Water = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Water;
                        Water = &pokedex[i];
                    }

                }

                else if (pokedex[i].type2 == " Dragon")
                {
                    if(Dragon == NULL)
                        Dragon = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Dragon;
                        Dragon = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Rock")
                {
                    if(Rock == NULL)
                        Rock = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Rock;
                        Rock = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Ground")
                {
                    if(Ground == NULL)
                        Ground = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Ground;
                        Ground = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Electric")
                {
                    if(Electric == NULL)
                        Electric = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Electric;
                        Electric = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Poison")
                {
                    if(Poison == NULL)
                        Poison = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Poison;
                        Poison = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Ice")
                {
                    if(Ice == NULL)
                        Ice = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Ice;
                        Ice = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Normal")
                {
                    if(Normal == NULL)
                        Normal = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Normal;
                        Normal = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Flying")
                {
                    if(Flying == NULL)
                        Flying = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Flying;
                        Flying = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Bug")
                {
                    if(Bug == NULL)
                        Bug = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Bug;
                        Bug = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Psychic")
                {
                    if(Psychic == NULL)
                        Psychic = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Psychic;
                        Psychic = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Fighting")
                {
                    if(Fighting == NULL)
                        Fighting = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Fighting;
                        Fighting = &pokedex[i];
                    }

                }
                else if (pokedex[i].type2 == " Ghost")
                {
                    if(Ghost == NULL)
                        Ghost = &pokedex[i];
                    else
                    {
                        pokedex[i].next2 = Ghost;
                        Ghost = &pokedex[i];
                    }

                }
            }
            getline (InFile,pokedex[i].species,',');
            getline (InFile,Aux,',');
            pokedex[i].height = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].weight = atoi(Aux.c_str());

            getline (InFile,pokedex[i].GrowthRate,',');

            getline (InFile,Aux,',');
            pokedex[i].BaseHp = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseAtack = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseDef = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseSpAtack = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseSpDef = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseSpeed = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseTotal = atoi(Aux.c_str());

            getline (InFile,pokedex[i].eggGroup1,',');

            getline (InFile,pokedex[i].eggGroup2,',');

            getline (InFile,Aux,',');
            pokedex[i].malePercent = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].femalePercent = atoi(Aux.c_str());

            getline (InFile,pokedex[i].DescriptionText);
        }
        //for (i=0; i<6; i++)
        //{
            //cout << pokedex[i].Name << endl;
            //cout << pokedex[i].PokedexNumber << endl;
            //cout << pokedex[i].type1 << endl;
            //cout << pokedex[i].type2 << endl;
            //cout << pokedex[i].species << endl;
            //cout << pokedex[i].height << endl;
            //cout << pokedex[i].weight << endl;
            //cout << pokedex[i].GrowthRate << endl;
            //cout << pokedex[i].BaseHp << endl;
            //cout << pokedex[i].BaseAtack << endl;
            //cout << pokedex[i].BaseDef << endl;
            //cout << pokedex[i].BaseSpAtack << endl;
            //cout << pokedex[i].BaseSpDef << endl;
            //cout << pokedex[i].BaseSpeed << endl;
            //cout << pokedex[i].BaseTotal << endl;
            //cout << pokedex[i].eggGroup1 << endl;
            //cout << pokedex[i].eggGroup2 << endl;
            //cout << pokedex[i].malePercent << endl;
            //cout << pokedex[i].femalePercent << endl;
            //cout << pokedex[i].DescriptionText << endl;
        //}
    }
}

void PokemonEntris :: PokemonGeneralInformationMenu(string trainerName)
{
    int leng = 26-trainerName.length();
    int menuStatus;
    do
    {
        system("clear");
        cout << "===============Pokedex===============" << endl << "| Kanto's Regional Pokedex          |" << endl << "| Trainer: " << trainerName;
        for (int i = 0; i< leng-1; i++)
            cout << " ";
        cout << "|" << endl << "|                                   |"<< endl<<
             "| Please Select The Desired Option: |" << endl << "| 1. Search Pokemon by Height       |"
             << endl << "| 2. Search Pokemon by Weight       |" << endl << "| 3. Search Pokemon by Name/Number  |" << endl <<
             "| 4. Go Back to Previous Menu       |"<< endl << "====================================="<< endl;

        cin >> menuStatus;
        switch (menuStatus)
        {
        case 1:
            SearchByHeight();
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            break;
        case 5:
            break;
        }
    }
    while (menuStatus != 4);
}

void PokemonEntris :: SearchByHeight()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    cout << "Please, Insert H for the Pokemon with the Highest Height value\n or Insert L for the Pokemon with the Lowest Height value\n";
    cin >> LorH;
    cout << "Please Insert What type of Pokemon you Want to Search From\n";
    cin >> Type;
    PokemonInfo *temp;
    if (Type == "Fire")
        temp = Fire;
    else if (Type == "Grass")
        temp = Grass;
    else if (Type == "Water")
        temp = Water;
    else if (Type == "Dragon")
        temp = Dragon;
    else if (Type == "Rock")
        temp = Rock;
    else if (Type == "Ground")
        temp = Ground;
    else if (Type == "Electric")
        temp = Electric;
    else if (Type == "Poison")
        temp = Poison;
    else if (Type == "Ice")
        temp = Ice;
    else if (Type == "Normal")
        temp = Normal;
    else if (Type == "Flying")
        temp = Flying;
    else if (Type == "Bug")
        temp = Bug;
    else if (Type == "Psychic")
        temp = Psychic;
    else if (Type == "Fighting")
        temp = Fighting;
    else if (Type == "Ghost")
        temp = Ghost;
    else
        cout << "Please insert a valid pokemon type";
    Actual = temp;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->height < Actual->height)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
        system("clear");
        cout << "The Shortest " << Type << " type Pokemon is:\n";
        cout << "Name:" << Actual->Name << "    No:";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->height > Actual->height)
            {
                Actual = temp;
            }
            if(Type == temp->type1)
            {
                temp = temp->next1;
            }
            else if(Type == temp->type2)
            {
                temp = temp->next2;
            }
        }
    }

}

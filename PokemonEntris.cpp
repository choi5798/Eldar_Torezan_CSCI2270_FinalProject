#include "PokemonEntris.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <stdlib.h>
#include <ctype.h>

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
    ifstream InFile ("PokedexEntris.txt");
    if ( !InFile.good() )
        cout<<"There Are No Pokemon Entries\n";
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
            pokedex[i].height = pokedex[i].height/100;

            getline (InFile,Aux,',');
            pokedex[i].weight = atoi(Aux.c_str());
            pokedex[i].weight = pokedex[i].weight/1000;

            getline (InFile,pokedex[i].GrowthRate,',');

            getline (InFile,Aux,',');
            pokedex[i].BaseHp = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseAttack = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseDef = atoi(Aux.c_str());

            getline (InFile,Aux,',');
            pokedex[i].BaseSpAttack = atoi(Aux.c_str());

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
            pokedex[i].malePercent = pokedex[i].malePercent/100;

            getline (InFile,Aux,',');
            pokedex[i].femalePercent = atoi(Aux.c_str());
            pokedex[i].femalePercent = pokedex[i].femalePercent/100;

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

void PokemonEntris::Compare()
{
    system("clear");
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
    cout << "Please enter the name or the ID of the first Pokemon you would like to compare:\n";
    cin >> input;
    inpute = input.c_str();
    if(isdigit(inpute[0]))
    {
        inputN = atoi(inpute) - 1;
        while ( inputN > 150)
        {
            cout << "Please enter a valid Pokemon ID!\n";
            cin >> inputN;
            inputN = inputN - 1;
        }
        Actual = &pokedex[inputN];
    }
    else
    {
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    while (Actual == NULL)
    {
        cout << "Please enter a valid Pokemon name!\n";
        cin >> input;
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    PokemonInfo *Actual2 = NULL;
    cout << "Please enter the name or the ID of the second Pokemon you would like to compare:\n";
    cin >> input;
    inpute = input.c_str();
    if(isdigit(inpute[0]))
    {
        inputN = atoi(inpute) - 1;
        while ( inputN > 150)
        {
            cout << "Please enter a valid Pokemon ID!\n";
            cin >> inputN;
            inputN = inputN - 1;
        }
        Actual2 = &pokedex[inputN];
    }
    else
    {
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual2= &pokedex[i];
                break;
            }
        }
    }
    while (Actual2 == NULL)
    {
        cout << "Please enter a valid Pokemon name!\n";
        cin >> input;
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual2= &pokedex[i];
                break;
            }
        }
    }
    if (Actual -> BaseHp > Actual2 -> BaseHp)
    {
        cout << Actual -> Name << " has " << Actual -> BaseHp << " base HP." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseHp << " base HP." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseHp - Actual2 -> BaseHp << " more base HP than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseHp < Actual2 -> BaseHp)
    {
        cout << Actual -> Name << " has " << Actual -> BaseHp << " base HP." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseHp << " base HP." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseHp - Actual -> BaseHp << " less base HP than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseHp << " base HP." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseHp << " base HP." << endl;
        cout << Actual -> Name << " has the same amount of base HP as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseAttack > Actual2 -> BaseAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseAttack << " base attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseAttack << " base attack damage." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseAttack - Actual2 -> BaseAttack << " more base attack damage than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseAttack < Actual2 -> BaseAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseAttack << " base attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseAttack << " base attack damage." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseAttack - Actual -> BaseAttack << " less base attack damage than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseAttack << " base attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseAttack << " base attack damage." << endl;
        cout << Actual -> Name << " has the same amount of base attack damage as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseDef > Actual2 -> BaseDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseDef << " base defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseDef << " base defense." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseDef - Actual2 -> BaseDef << " more base defense than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseDef < Actual2 -> BaseDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseDef << " base defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseDef << " base defense." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseDef - Actual -> BaseDef << " less base defense than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseDef << " base defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseDef << " base defense." << endl;
        cout << Actual -> Name << " has the same amount of base defense as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseSpAttack > Actual2 -> BaseSpAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack - Actual2 -> BaseSpAttack << " more base special attack damage than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseSpAttack < Actual2 -> BaseSpAttack)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseSpAttack - Actual -> BaseSpAttack << " less base special attack damage than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpAttack << " base special attack damage." << endl;
        cout << Actual -> Name << " has the same amount of base special attack damage as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseSpDef > Actual2 -> BaseSpDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpDef << " base special defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpDef << " base special defense." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseSpDef - Actual2 -> BaseSpDef << " more base special defense than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseSpDef < Actual2 -> BaseSpDef)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpDef << " base special defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpDef << " base special defense." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseSpDef - Actual -> BaseSpDef << " less base special defense than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpDef << " base special defense." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpDef << " base special defense." << endl;
        cout << Actual -> Name << " has the same amount of base special defense as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseSpeed > Actual2 -> BaseSpeed)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpeed << " base speed." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpeed << " base speed." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseSpeed - Actual2 -> BaseSpeed << " more base speed than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseSpeed < Actual2 -> BaseSpeed)
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpeed << " base speed." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpeed << " base speed." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseSpeed - Actual -> BaseSpeed << " less base speed than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseSpeed << " base speed." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseSpeed << " base speed." << endl;
        cout << Actual -> Name << " has the same amount of base speed as " << Actual2 -> Name << "." << endl;
    }
    cout << endl;
    if (Actual -> BaseTotal > Actual2 -> BaseTotal)
    {
        cout << Actual -> Name << " has " << Actual -> BaseTotal << " base power." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseTotal << " base power." << endl;
        cout << Actual -> Name << " has " << Actual -> BaseTotal - Actual2 -> BaseTotal << " more base power than " << Actual2 -> Name << "." << endl;
    }
    else if (Actual -> BaseTotal < Actual2 -> BaseTotal)
    {
        cout << Actual -> Name << " has " << Actual -> BaseTotal << " base power." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseTotal << " base power." << endl;
        cout << Actual -> Name << " has " << Actual2 -> BaseTotal - Actual -> BaseTotal << " less base power than " << Actual2 -> Name << "." << endl;
    }
    else
    {
        cout << Actual -> Name << " has " << Actual -> BaseTotal << " base power." << endl;
        cout << Actual2 -> Name << " has " << Actual2 -> BaseTotal << " base power." << endl;
        cout << Actual -> Name << " has the same amount of base power as " << Actual2 -> Name << "." << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: PokemonGeneralInformationMenu(string trainerName)
{
    int leng = 26-trainerName.length();
    int menuStatus;
    string menu;
    do
    {
        system("clear");
        cout << "===============Pokedex===============" << endl << "- Kanto's Regional Pokedex          |" << endl << "- Trainer: " << trainerName;
        for (int i = 0; i< leng-1; i++)
            cout << " ";
        cout << "|" << endl << "                                    |"<< endl<<
             "- Please Select The Search Method:  |" << endl << "- 1. Search Pokemon by Height       |"
             << endl << "- 2. Search Pokemon by Weight       |" << endl << "- 3. Search Pokemon by Name/Number  |"
             << endl << "- 4. Check Breedability             |" << endl <<
             "- 5. Go Back to Previous Menu       |"<< endl << "====================================="<< endl;
        getline(cin, menu);
        menuStatus = atoi(menu.c_str());
        switch (menuStatus)
        {
        case 1:
            SearchByHeight();
            break;
        case 2:
            SearchByWeight();
            break;
        case 3:
            SearchByNNGeneral();
            break;
        case 4:
            Breedable();
            break;
        case 5:
            break;
        }
    }
    while (menuStatus != 5);
}

void PokemonEntris :: PokemonBattleInformationMenu(string trainerName)
{
    int leng = 26-trainerName.length();
    int menuStatus;
    string menu;
    do
    {
        system("clear");
        cout << "===============Pokedex===============" << endl << "- Kanto's Regional Pokedex          |" << endl << "- Trainer: " << trainerName;
        for (int i = 0; i< leng-1; i++)
            cout << " ";
        cout << "|" << endl << "                                    |"<< endl<<
             "- Please Select The Search Method:  |" << endl << "- 1. Search by HP                   |\n- 2. Search by ATK                  |"
             << endl << "- 3. Search by DEF                  |\n- 4. Search by SpA                  |" << endl << "- 5. Search by SpD                  |\n- 6. Search by SPD                  |"
             << endl << "- 7. Search by Name/Number          |\n- 8. Compare Two Pokemon            |\n" <<
             "- 9. Go Back to Previous Menu       |"<< endl << "====================================="<< endl;

        getline(cin, menu);
        menuStatus = atoi(menu.c_str());
        switch (menuStatus)
        {
        case 1:
            SearchHP();
            break;
        case 2:
            SearchATK();
            break;
        case 3:
            SearchDEF();
            break;
        case 4:
            SearchSpA();
            break;
        case 5:
            SearchSpD();
            break;
        case 6:
            SearchSPD();
            break;
        case 7:
            SearchByNNBattle();
            break;
        case 8:
            Compare();
            break;
        case 9:
            break;
        }
    }
    while (menuStatus != 9);
}

void PokemonEntris :: SearchHP()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) HP Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseHp < Actual->BaseHp)
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
        cout << " The " << Type << " type Pokemon with the Lowest HP stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseHp > Actual->BaseHp)
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
        cout << " The " << Type << " type Pokemon with the Highest Hp stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchATK()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) ATK Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseAttack < Actual->BaseAttack)
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
        cout << " The " << Type << " type Pokemon with the Lowest ATK stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseAttack > Actual->BaseAttack)
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
        cout << " The " << Type << " type Pokemon with the Highest ATK stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchDEF()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) DEF Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseDef < Actual->BaseDef)
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
        cout << " The " << Type << " type Pokemon with the Lowest DEF stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseDef > Actual->BaseDef)
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
        cout << " The " << Type << " type Pokemon with the Highest DEF stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchSpA()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) SpA Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpAttack < Actual->BaseSpAttack)
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
        cout << " The " << Type << " type Pokemon with the Lowest SpA stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpAttack > Actual->BaseSpAttack)
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
        cout << " The " << Type << " type Pokemon with the Highest SpA stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchSpD()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) SpD Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpDef < Actual->BaseSpDef)
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
        cout << " The " << Type << " type Pokemon with the Lowest SpD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpDef > Actual->BaseSpDef)
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
        cout << " The " << Type << " type Pokemon with the Highest SpD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchSPD()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the Pokemon with Highest (H) or Lowest (L) SPD Stat?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpeed < Actual->BaseSpeed)
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
        cout << " The " << Type << " type Pokemon with the Lowest SPD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->BaseSpeed > Actual->BaseSpeed)
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
        cout << " The " << Type << " type Pokemon with the Highest SPD stat is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << "  HP: " << Actual->BaseHp;
        if (Actual->BaseHp <100)
            cout << " ";
        cout << "    ATK: " << Actual->BaseAttack;
        if (Actual->BaseAttack <100)
            cout << " ";
        cout << "    DEF: " << Actual->BaseDef<<endl;

        cout << " SpA: " << Actual->BaseSpAttack ;
        if (Actual->BaseSpAttack <100)
            cout << " ";
        cout << "    SpD: " << Actual->BaseSpDef ;
        if (Actual->BaseSpDef <100)
            cout << " ";
        cout << "    SPD: " << Actual->BaseSpeed << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris::Breedable()
{
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
    cout << "Please enter the name or the ID of the first Pokemon you would like to verify for breed-ability:\n";
    cin >> input;
    inpute = input.c_str();
    if(isdigit(inpute[0]))
    {
        inputN = atoi(inpute) - 1;
        while ( inputN > 150)
        {
            cout << "Please enter a valid Pokemon ID!\n";
            cin >> inputN;
            inputN = inputN - 1;
        }
        Actual = &pokedex[inputN];
    }
    else
    {
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    while (Actual == NULL)
    {
        cout << "Please enter a valid Pokemon name!\n";
        cin >> input;
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    PokemonInfo *Actual2 = NULL;
    cout << "Please enter the name or the ID of the second Pokemon you would like to verify for breed-ability:\n";
    cin >> input;
    inpute = input.c_str();
    if(isdigit(inpute[0]))
    {
        inputN = atoi(inpute) - 1;
        while ( inputN > 150)
        {
            cout << "Please enter a valid Pokemon ID!\n";
            cin >> inputN;
            inputN = inputN - 1;
        }
        Actual2 = &pokedex[inputN];
    }
    else
    {
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual2= &pokedex[i];
                break;
            }
        }
    }
    while (Actual2 == NULL)
    {
        cout << "Please enter a valid Pokemon name!\n";
        cin >> input;
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual2= &pokedex[i];
                break;
            }
        }
    }
    system("clear");
    if(Actual -> eggGroup1 == Actual2 -> eggGroup1 || Actual -> eggGroup1 == Actual2 -> eggGroup2 ||
            Actual -> eggGroup2 == Actual2 -> eggGroup1 || Actual -> eggGroup2 == Actual2 -> eggGroup2)
    {
        cout << Actual -> Name << " can breed with " << Actual2 -> Name << "." << endl;
    }
    else
        cout << Actual -> Name << " cannot breed with " << Actual2 -> Name << "." << endl;
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchByHeight()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool heightStatus = false;
    bool typeStatus = false;
    while (heightStatus == false)
    {
        cout << "Would you like to search for the tallest (H) or shortest (L) Pokemon?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            heightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

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
        cout << " The Shortest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "         Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
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
        system("clear");
        cout << " The Tallest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "        Growth Rate:" << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris :: SearchByWeight()
{
    system("clear");
    string LorH;
    string Type;
    PokemonInfo *Actual;
    bool weightStatus = false;
    bool typeStatus = false;
    while (weightStatus == false)
    {
        cout << "Would you like to search for the heaviest (H) or lightest (L) Pokemon?\n";
        cin >> LorH;
        if (LorH != "H" && LorH != "L")
        {
            cout << "Please enter a valid option for searching!" << endl;
        }
        else
            weightStatus = true;
    }
    PokemonInfo *temp;
    while (typeStatus != true)
    {
        cout << "What Pokemon type would you like to search by? (i.e. Fire, Grass, etc.)\n";
        cin >> Type;
        if (Type == "Fire")
        {
            temp = Fire;
            typeStatus = true;
        }
        else if (Type == "Grass")
        {
            temp = Grass;
            typeStatus = true;
        }
        else if (Type == "Water")
        {
            temp = Water;
            typeStatus = true;
        }
        else if (Type == "Dragon")
        {
            temp = Dragon;
            typeStatus = true;
        }
        else if (Type == "Rock")
        {
            temp = Rock;
            typeStatus = true;
        }
        else if (Type == "Ground")
        {
            temp = Ground;
            typeStatus = true;
        }
        else if (Type == "Electric")
        {
            temp = Electric;
            typeStatus = true;
        }
        else if (Type == "Poison")
        {
            temp = Poison;
            typeStatus = true;
        }
        else if (Type == "Ice")
        {
            temp = Ice;
            typeStatus = true;
        }
        else if (Type == "Normal")
        {
            temp = Normal;
            typeStatus = true;
        }
        else if (Type == "Flying")
        {
            temp = Flying;
            typeStatus = true;
        }
        else if (Type == "Bug")
        {
            temp = Bug;
            typeStatus = true;
        }
        else if (Type == "Psychic")
        {
            temp = Psychic;
            typeStatus = true;
        }
        else if (Type == "Fighting")
        {
            temp = Fighting;
            typeStatus = true;
        }
        else if (Type == "Ghost")
        {
            temp = Ghost;
            typeStatus = true;
        }
        else
        {
            cout << "Please enter a valid Pokemon type!" << endl;
        }
    }
    Actual = temp;
    //string aux = " ";
    //Type = aux.append(Type);
    Type = " "+Type;

    if (LorH == "L")
    {
        while (temp != NULL)
        {
            if (temp->weight < Actual->weight)
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
        cout << " The Lightest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "        Growth Rate: " << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }

    else if (LorH == "H")
    {
        while (temp != NULL)
        {
            if (temp->weight > Actual->weight)
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
        cout << " The Heaviest" << Type << " type Pokemon is:\n";
        cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
        cout << " No: ";
        if (Actual->PokedexNumber < 10)
            cout << "00" << Actual->PokedexNumber;
        else if (Actual->PokedexNumber < 100)
            cout << "0" << Actual->PokedexNumber;
        else
            cout << Actual->PokedexNumber;

        cout << "        Growth Rate: " << Actual->GrowthRate << endl;

        cout << " Type: " << Actual->type1 << "    ";
        if (Actual->type1 != Actual->type2)
            cout << "and    " << Actual->type2 << endl;
        else
            cout << endl;

        cout << " Egg Group: " << Actual->eggGroup1 << "    ";
        if (Actual->eggGroup1 != Actual->eggGroup2)
            cout << "and    " << Actual->eggGroup2 << endl;
        else
            cout << endl;

        cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

        cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
        cout << Actual->DescriptionText << endl;
    }
    cin.get();
    while (cin.get() != '\n')
    {
    }

}

void PokemonEntris::SearchByNNGeneral()
{
    system("clear");
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
    cout << "Please enter the name or the ID of the Pokemon you would like to search for:\n";
    cin >> input;
    inpute = input.c_str();
    if(isdigit(inpute[0]))
    {
        inputN = atoi(inpute) - 1;
        while ( inputN > 150)
        {
            cout << "Please enter a valid Pokemon ID!\n";
            cin >> inputN;
            inputN = inputN - 1;
        }
        Actual = &pokedex[inputN];
    }
    else
    {
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    while (Actual == NULL)
    {
        cout << "Please enter a valid Pokemon name!\n";
        cin >> input;
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }

    system("clear");
    cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
    cout << " No: ";
    if (Actual->PokedexNumber < 10)
        cout << "00" << Actual->PokedexNumber;
    else if (Actual->PokedexNumber < 100)
        cout << "0" << Actual->PokedexNumber;
    else
        cout << Actual->PokedexNumber;

    cout << "        Growth Rate: " << Actual->GrowthRate << endl;

    cout << " Type: " << Actual->type1 << "    ";
    if (Actual->type1 != Actual->type2)
        cout << "and    " << Actual->type2 << endl;
    else
        cout << endl;

    cout << " Egg Group: " << Actual->eggGroup1 << "    ";
    if (Actual->eggGroup1 != Actual->eggGroup2)
        cout << "and    " << Actual->eggGroup2 << endl;
    else
        cout << endl;

    cout << " Avg Height: " << Actual->height << "m    " << "Avg Weight: " << Actual->weight << "kg"<< endl;

    cout << " Gender: " << Actual->malePercent << "% Male    and    " << Actual->femalePercent << "% Female\n";
    cout << Actual->DescriptionText << endl;
    cin.get();
    while (cin.get() != '\n')
    {
    }
}

void PokemonEntris ::SearchByNNBattle()
{
    system("clear");
    const char *inpute;
    string input;
    int inputN;
    PokemonInfo *Actual = NULL;
    cout << "Please enter the name or the ID of the Pokemon you would like to search for:\n";
    cin >> input;
    inpute = input.c_str();
    if(isdigit(inpute[0]))
    {
        inputN = atoi(inpute) - 1;
        while ( inputN > 150)
        {
            cout << "Please enter a valid Pokemon ID!\n";
            cin >> inputN;
            inputN = inputN - 1;
        }
        Actual = &pokedex[inputN];
    }
    else
    {
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    while (Actual == NULL)
    {
        cout << "Please enter a valid Pokemon name!\n";
        cin >> input;
        for (int i =0; i<151; i++)
        {
            if(pokedex[i].Name == input)
            {
                Actual= &pokedex[i];
                break;
            }
        }
    }
    system("clear");
    cout << " Name: " << Actual->Name << "    Species: " << Actual->species << endl;
    cout << " No: ";
    if (Actual->PokedexNumber < 10)
        cout << "00" << Actual->PokedexNumber;
    else if (Actual->PokedexNumber < 100)
        cout << "0" << Actual->PokedexNumber;
    else
        cout << Actual->PokedexNumber;

    cout << "         Growth Rate:" << Actual->GrowthRate << endl;

    cout << " Type: " << Actual->type1 << "    ";
    if (Actual->type1 != Actual->type2)
        cout << "and    " << Actual->type2 << endl;
    else
        cout << endl;

    cout << "  HP: " << Actual->BaseHp;
    if (Actual->BaseHp <100)
        cout << " ";
    cout << "    ATK: " << Actual->BaseAttack;
    if (Actual->BaseAttack <100)
        cout << " ";
    cout << "    DEF: " << Actual->BaseDef<<endl;

    cout << " SpA: " << Actual->BaseSpAttack ;
    if (Actual->BaseSpAttack <100)
        cout << " ";
    cout << "    SpD: " << Actual->BaseSpDef ;
    if (Actual->BaseSpDef <100)
        cout << " ";
    cout << "    SPD: " << Actual->BaseSpeed << endl;

    cin.get();
    while (cin.get() != '\n')
    {
    }
}

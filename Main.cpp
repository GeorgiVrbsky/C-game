#include <iostream> //cout
#include <windows.h> //Sleep
#include <ctime> //srand(0)
#include <stdlib.h> //exit
#include <conio.h> // getch()


using namespace std;


//funkce pro kontrolu inputu
int inputKontrol(int input_Kontrol){
         if(cin.fail()){
            cin.clear();
            cin.ignore(10000,'\n');
            cout << "Jenom cisla se pocitaji jako spravny input\n";
            cout << "Press any key to continue\n";
            getch();
            system("cls");
            return 1;
        }
        return 0;
    }


//XP
int XP(int xp, int level,  int statistiky[], int schopnosti_damage[], int maxima_Statistiky[]){

    //swtich podle levelu hrace
    switch(level){
        case 1:
        {
            if(xp>=10){
                cout << "Gratuluji, prave jsi postoupil o level nahoru\n";
                cout << level << " -> " << level + 1;
                cout << "\nZivoty " << maxima_Statistiky[0] << "->" << maxima_Statistiky[0] + 20;
                maxima_Statistiky[0]+=10;
                cout << "\nVelikost utoku " << statistiky[1] << "->" << statistiky[1] + 1;
                statistiky[1]+=1;
                cout << "\nLaviskovy Metr " << maxima_Statistiky[1] << "->" << maxima_Statistiky[1] + 12;
                maxima_Statistiky[1]+=12;
                level++;
            }else{
                cout << "Lvl: " << level;
                cout << "\nXP: " << "(" << xp << "/10)";
            }
            break;
        }
        case 2:
        {
            if(xp>=20){
                cout << "Gratuluji, prave jsi postoupil o level nahoru\n";
                cout << level << " -> " << level + 1;
                cout << "\nZivoty " << maxima_Statistiky[0] << "->" << maxima_Statistiky[0] + 20;
                maxima_Statistiky[0]+=10;
                cout << "\nVelikost utoku " << statistiky[1] << "->" << statistiky[1] + 1;
                statistiky[1]+=1;
                cout << "\nLaviskovy Metr " << maxima_Statistiky[1] << "->" << maxima_Statistiky[1] + 12;
                maxima_Statistiky[1]+=12;
                level++;
            }else{
                cout << "Lvl: " << level;
                cout << "\nXP: " << "(" << xp << "/20)";
            }
            break;
        }
        case 3:
        {
            if(xp>=40){
                cout << "Gratuluji, prave jsi postoupil o level nahoru\n";
                cout << level << " -> " << level + 1;
                cout << "\nZivoty " << maxima_Statistiky[0] << "->" << maxima_Statistiky[0] + 20;
                maxima_Statistiky[0]+=10;
                cout << "\nVelikost utoku " << statistiky[1] << "->" << statistiky[1] + 1;
                statistiky[1]+=1;
                cout << "\nLaviskovy Metr " << maxima_Statistiky[1] << "->" << maxima_Statistiky[1] + 12;
                maxima_Statistiky[1]+=12;
                level++;
            }else{
                cout << "Lvl: " << level;
                cout << "\nXP: " << "(" << xp << "/40)";
            }
            break;
        }
        case 4:
        {
            if(xp>=70){
                cout << "Gratuluji, prave jsi postoupil o level nahoru\n";
                cout << level << " -> " << level + 1;
                cout << "\nZivoty " << maxima_Statistiky[0] << "->" << maxima_Statistiky[0] + 20;
                maxima_Statistiky[0]+=10;
                cout << "\nVelikost utoku " << statistiky[1] << "->" << statistiky[1] + 1;
                statistiky[1]+=1;
                cout << "\nLaviskovy Metr " << maxima_Statistiky[1] << "->" << maxima_Statistiky[1] + 12;
                maxima_Statistiky[1]+=12;
                level++;
            }else{
                cout << "Lvl: " << level;
                cout << "\nXP: " << "(" << xp << "/70)";
            }
            break;
        }
        case 5:
        {
            if(xp>=110){
                cout << "Gratuluji, prave jsi postoupil o level nahoru\n";
                cout << level << " -> " << level + 1;
                cout << "\nZivoty " << maxima_Statistiky[0] << "->" << maxima_Statistiky[0] + 20;
                maxima_Statistiky[0]+=10;
                cout << "\nVelikost utoku " << statistiky[1] << "->" << statistiky[1] + 1;
                statistiky[1]+=1;
                cout << "\nLaviskovy Metr " << maxima_Statistiky[1] << "->" << maxima_Statistiky[1] + 12;
                maxima_Statistiky[1]+=12;
                level++;
            }else{
                cout << "Lvl: " << level;
                cout << "\nXP: " << "(" << xp << "/110)";
            }
            break;
        }

    }
    cout << endl;
    return level;

}

//Statistiky
void Statistiky(int statistiky[], int x){

    //Urceni statistik podle vyberu uzivatele
    switch (x){
        case 1:
        {
            statistiky[0] = 100;
            statistiky[1] = 4;
            statistiky[2] = 30;
            break;
        }
        case 2:
        {
            statistiky[0] = 90;
            statistiky[1] = 2;
            statistiky[2] = 50;
            break;
        }
        case 3:
        {
            statistiky[0] = 110;
            statistiky[1] = 8;
            statistiky[2] = 10;
            break;
        }
        case 4:
        {
            statistiky[0] = 100;
            statistiky[1] = 5;
            statistiky[2] = 40;
            break;
        }
    }

}

//Schopnosti
void Schopnosti(string schopnosti_nazev[], int schopnosti_Damage[] , int schopnosti_Cost[], int x){

    //Urceni parametru schopnosti podle vyberu uzivatele
    switch (x){
        case 1:
        {
            schopnosti_nazev[0] = {"Skoci do nepritele"};
            schopnosti_nazev[1] = {"Hodi na nepritele Chamomilu"};
            schopnosti_nazev[2] = { "Skoci do pole, vezme obilninu, zautoci na nepritele"};
            schopnosti_Damage[0] = 12;
            schopnosti_Damage[1] = 15;
            schopnosti_Damage[2] = 18;
            schopnosti_Cost[0] = 8;
            schopnosti_Cost[1] = 9;
            schopnosti_Cost[2] = 11;

            break;
        }
        case 2:
        {
            schopnosti_nazev[0] = "Hatsune Miku Bodypillow";
            schopnosti_nazev[1] = "Hodi po nepriteli Mountain Dew";
            schopnosti_nazev[2] = "Urazeni Hatsune Miku, nastvany, utok";
            schopnosti_Damage[0] = 15;
            schopnosti_Damage[1] = 17;
            schopnosti_Damage[2] = 21;
            schopnosti_Cost[0] = 8;
            schopnosti_Cost[1] = 11;
            schopnosti_Cost[2] = 13;
            break;
        }
        case 3:
        {
            schopnosti_nazev[0] = "Hodi po nepriteli banan";
            schopnosti_nazev[1] = "Zapne Monkey mode, utok";
            schopnosti_nazev[2] = "Magicky tricek";
            schopnosti_Damage[0] = 10;
            schopnosti_Damage[1] = 12;
            schopnosti_Damage[2] = 14;
            schopnosti_Cost[0] = 7;
            schopnosti_Cost[1] = 8;
            schopnosti_Cost[2] = 12;
            break;
        }
        case 4:
        {
            schopnosti_nazev[0] = "Sip s lukem";
            schopnosti_nazev[1] = "Utok indickeho samana";
            schopnosti_nazev[2] = "Indianska sila samostatne sily";
            schopnosti_Damage[0] = 13;
            schopnosti_Damage[1] = 15;
            schopnosti_Damage[2] = 17;
            schopnosti_Cost[0] = 8;
            schopnosti_Cost[1] = 9;
            schopnosti_Cost[2] = 12;
            break;
        }
    }

}

//Vypsani classy
int vypsaniClassy(int statistiky[], string jmeno);

//Vypsani mapy
void printMapa(string mapa[], int size);


//Vesnice
int vesnice(int zlato, int statistiky[], int maxima_Statistiky[]){
    int potvrzeni_vyberu;
    int vyber_Kategorie = 0;
    int input_Kontrol;
    while(potvrzeni_vyberu!=3){
    system("cls");
    cout << "Ted se nachazis ve vesnici\n";
    cout << "1)Doplneni zivotu\n";
    cout << "2)Vylepseni statistik\n";
    cout << "3)Pokracovat dale\n";
    cin >> potvrzeni_vyberu;

    input_Kontrol = inputKontrol(input_Kontrol);

    switch (potvrzeni_vyberu)
    {
    case 1://doplneni zivotu
    {
        vyber_Kategorie = 0;
        int while_zivoty = 0;
        while(vyber_Kategorie!=3){
        system("cls");
        cout << "Zde si doplnujete zivoty\n";
        cout << "Zivoty: " << statistiky[0] << "/" << maxima_Statistiky[0];
        cout << "\n\n1)+25 zivotu - 15 zlata\n2)+35 zivotu - 25 zlata\n3)Zpatky do vesnice";
        cout << "\nZlato: " << zlato << endl;
        cin >> vyber_Kategorie;

        input_Kontrol = inputKontrol(input_Kontrol);

        switch (vyber_Kategorie)
        {
        case 1: //+25 zivotu
        {
            if(zlato>=15 && statistiky[0]!=maxima_Statistiky[0])
            {

            cout << "+25 zivotu\n-15 zlata";
            Sleep(3000);
            while_zivoty = 25;
            zlato = zlato - 15;

            }
            else if(statistiky[0]<=maxima_Statistiky[0])
            {
                cout << "Mas plne zivoty";
                Sleep(3000);
            }
            else
            {
            cout << "Nemas dostatek penez";
            Sleep(3000);
            }
             break;
        }
        case 2: //+35 zivotu
        {

            if(zlato>=25 && statistiky[0]<maxima_Statistiky[0])
            {
            cout << "+35 zivotu\n-25 zlata";
            Sleep(3000);
            while_zivoty = 35;
            zlato = zlato - 30;
            }
            else if(statistiky[0]==maxima_Statistiky[0])
            {
                cout << "Mas plne zivoty";
                Sleep(3000);
            }
            else
            {
            cout << "Nemas dostatek penez";
            Sleep(3000);
            }


             break;
        }
        case 3:
        {
            vyber_Kategorie = 3;
        }
        default:
            break;
        }

        while(while_zivoty>0 && statistiky[0]<maxima_Statistiky[0])
        {

        statistiky[0]++;
        while_zivoty--;
        }
    }



        break;
    }
    case 2://Vylepseni statistik
    {
        int vyber_statistiky = 0;
        vyber_Kategorie = 0;
        while(vyber_Kategorie!=3){
        system("cls");
        vyber_statistiky = 0;
        cout << "Vitej ve vylepseni statistik\n";
        cout << "1)Velikost utoku\n2)Laviskovy Metr\n3)Zpatky do vesnice\n";
        cin >> vyber_Kategorie;

        input_Kontrol = inputKontrol(input_Kontrol);

        switch (vyber_Kategorie)
        {
        case 1://utok
        {
            int vyber_Utok = 0;
           while(vyber_Utok!=3)
           {
           system("cls");
           cout << "Zvetseni utoku\n";
           cout << "Velikost utoku: " << statistiky[1];
           cout << "\n\n1)Zvetseni utoku o 2 - 45 zlata";
           cout << "\n2)Zvetseni utoku o 3 - 60 zlata";
           cout << "\n3)Zpatky do vyberu statistik";
           cout << "\nZlato: " << zlato << endl;
           cin >> vyber_statistiky;

           input_Kontrol = inputKontrol(input_Kontrol);

           switch(vyber_statistiky){
           case 1:
            {
            if(zlato>=45)
            {

            cout << "+2 utoku\n-45 zlata";
            Sleep(3000);
            statistiky[1] = statistiky[1] + 2;
            zlato = zlato - 45;

            }
            else
            {
            cout << "Nemas dostatek penez";
            Sleep(3000);
            }

              break;
            }
           case 2:
            {
            if(zlato>=60)
            {

            cout << "+3 utoku\n-60 zlata";
            Sleep(3000);
            statistiky[1] = statistiky[1] + 3;
            zlato = zlato - 60;

            }
            else
            {
            cout << "Nemas dostatek penez";
            Sleep(3000);
            }
              break;
            }
           case 3:
            {
                vyber_Utok=3;
            }
           default:
            {
                break;
            }
           }
           }
           break;
        }
        case 2: //Laviskovy Metr
        {

            int vyber_Laviskovy_Metr = 0;
           while(vyber_Laviskovy_Metr!=3) {
           system("cls");
           cout << "Laviskovy Metr\n";
           cout << "Laviskovy Metr: " << statistiky[2] << "/" << maxima_Statistiky[1];
           cout << "\n\n1)Laviskovy Metr doplneni o 10 - 20 zlata";
           cout << "\n2)Laviskovy Metr doplneni o 15 - 30 zlata";
           cout << "\n3)Zpatky do vesnice";
           cout << "\nZlato: " << zlato << endl;
           cin >> vyber_statistiky;

           input_Kontrol = inputKontrol(input_Kontrol);

           switch(vyber_statistiky){
           case 1:
            {
            if(zlato>=20 && statistiky[2]<maxima_Statistiky[1])
            {

            cout << "+10 Laviskovy Metr\n-20 zlata";
            Sleep(3000);
            int while_Laviskovy_Metr = 10;
            int plny_Laviskovy_Metr = 0; 
            
            for(int i = 0; i<10; i++){
                if(statistiky[2]<maxima_Statistiky[1]){
                    statistiky[2]++;
                }

            }
            zlato = zlato - 20;

            }
            else if(statistiky[2]==maxima_Statistiky[1])
            {
                cout << "Mas plny Laviskovy Metr";
                Sleep(3000);
            }
            else
            {
            cout << "Nemas dostatek penez";
            Sleep(3000);
            }

              break;
            }
           case 2:
            {
            if(zlato>=30 && statistiky[2]<maxima_Statistiky[1])
            {

            cout << "+15 Laviskovy Metr\n-30 zlata";
            Sleep(3000);
            int while_Laviskovy_Metr2 = 15;
            int plny_Laviskovy_Metr = 0;

            for(int i = 0; i<15; i++){
                if(statistiky[2]<maxima_Statistiky[1]){
                    statistiky[2]++;
                }
                
            }
            zlato = zlato - 30;

            }
            else if(statistiky[2]==maxima_Statistiky[1])
            {
                cout << "Mas plny Laviskovy Metr";
                Sleep(3000);
            }
            else
            {
            cout << "Nemas dostatek penez";
            Sleep(3000);
            }
              break;
            }
           case 3:
            {
                vyber_Laviskovy_Metr=3;
            }
           default:
            {
                break;
            }
           }
           }
        }
        }

        }

        break;

    }
      case 3:
    {
        potvrzeni_vyberu = 3;
        break;
    }
    default:
    {
        break;
    }

    }



    }
     return zlato;
}

//bitva
void bitva(int statistiky[], string schopnosti_nazev[], int schopnosti_Damage[] , int schopnosti_Cost[],int pocet_Monster, string jmeno, int boss){
      system("cls");
      int input_Kontrol;
      int vyber_utoku, vyber_monster, potvrzeni_monster, vysledek_bitvy = 0;
      cout << "Vitej v bitve\n\n";
      int monstra_zivoty[pocet_Monster];
      int monstra_damage[pocet_Monster];

      if(boss==1){
        monstra_zivoty[1] = 40;
        monstra_damage[1] = 13;
        cout << "Prave Bojujes s mini Bossem, tudiz dostanes utok jako prvni\n";
        cout << "Monstrum na tebe zautocilo a ubralo ti " << monstra_damage[1];
        cout << "\nZivoty: " <<  statistiky[0] << " - " << monstra_damage[1] << "\n";
        statistiky[0]-=monstra_damage[1];
        cout << "Press any key to continue\n";
        getch();
        system("cls");
      }
      else if(boss==2){
        monstra_zivoty[1] = 60;
        monstra_damage[1] = 19;
        cout << "Prave Bojujes s hlavnim Bossem, tudiz dostanes utok jako prvni\n";
        cout << "Monstrum na tebe zautocilo a ubralo ti " << monstra_damage[1];
        cout << "\nZivoty: " <<  statistiky[0] << " - " << monstra_damage[1] << "\n";
        statistiky[0]-=monstra_damage[1];
        cout << "Press any key to continue\n";
        getch();
        system("cls");
      }

      else {

        for(int i = 1;i<=pocet_Monster;i++){
        monstra_zivoty[i] = rand() % 10 + 10;
        monstra_damage[i] = rand() % 3 + 5;
        }
      }

      while(statistiky[0]>0 && vysledek_bitvy==0){
        input_Kontrol = 0;
        cout << jmeno;
        int velikost_Jmena = jmeno.length();
        for(int i = 0; i<= 18 - velikost_Jmena;i++)
        {
            cout << " ";
        }
        for(int i = 1; i<=pocet_Monster; i++)
        {
            if(monstra_zivoty[i]>0){
               cout << "Monstrum "<< i<< "         ";
        }
        }
        cout << "\n-------------------";

        for(int i = 1; i<=pocet_Monster;i++)
        {
            if(monstra_zivoty[i]>0){
            cout << "-------------------";
            }

            if(boss==1||boss==2){
                cout << "-";
            }
        }

        //zivoty hrac
        cout << "\nZivoty: "<<statistiky[0];

        if(statistiky[0]<100){
            cout << " ";
            if(statistiky[0]<10){
                cout << " ";
            }
        }

        //zivoty monstrum
        for(int i = 1; i<=pocet_Monster; i++)
        {
            if(monstra_zivoty[i]>0){
               cout << "       | Zivoty: " <<monstra_zivoty[i];
               if(monstra_zivoty[i]<10){
                cout << " ";
               }
               if(boss==1 || boss==2){
                cout << " ";
               }
        }
        }
        //velikost utoku hrac
        cout << "       |\nVelikost Utoku: "<<statistiky[1];
        if(statistiky[1]<10){
            cout << " ";
        }

        //velikost utoku hrac
        for(int i = 1; i<=pocet_Monster; i++)
        {
            if(monstra_zivoty[i]>0){
               cout << "| Velikost Utoku: " << monstra_damage[i];
        }
        }
        //laviskovy metr hrac
        cout << "|\nLaviskovy Metr: "<<statistiky[2];
        if(statistiky[2]<10){ 
            cout << " ";
        } 
        cout << "|\n";

        for(int i = 0; i<=2; i++)
        {
            cout << endl <<(i+1) << ") "<< schopnosti_nazev[i] << "\nDamage: " << schopnosti_Damage[i] << "\nCost:" << schopnosti_Cost[i] << endl;
        }

        cout << "\n4) Normalni Utok\nDamage: " << statistiky[1] << "\nCost: 0\n";

        cout << "\nZmacknete tlacitko pro provedeni utoku dle vaseho vyberu\n";

        int potvrzeni_utok = 0;
        potvrzeni_monster = 0;
        int laviskovy_Metr_potvrzeni = 0;
        int utok_monster_input = 0;

        while(potvrzeni_utok==0)
        {
           cin >> vyber_utoku;
           input_Kontrol = inputKontrol(input_Kontrol);

           if(input_Kontrol==1){
            potvrzeni_utok = 1;
            vyber_utoku = 8;
            utok_monster_input = 1;

           }

           if(vyber_utoku == 1 || vyber_utoku == 2 || vyber_utoku == 3){
            if(statistiky[2]<schopnosti_Cost[vyber_utoku-1]){
                cout << "Nemas na tento utok laviskovy metr";
                Sleep(1000);
                cout << "\nPress any key to continue\n";
                getch();
                laviskovy_Metr_potvrzeni = 1;
                vyber_utoku = 66;
                potvrzeni_utok = 1;

            }
           }


           switch(vyber_utoku)
           {
                case 1:
                {
                cout << "\nNa jaky monstrum chcete zautocit\n";
                for(int i = 1; i<=pocet_Monster; i++)
                {
                    if(monstra_zivoty[i]>0){
                    cout << i << ". Monstrum\n";
                    }
                }


                    while(potvrzeni_monster==0)
                    {
                        cin >> vyber_monster;

                        input_Kontrol = inputKontrol(input_Kontrol);
                        if(input_Kontrol==1 || monstra_zivoty[vyber_monster]<=0){
                            potvrzeni_monster = 1;
                            utok_monster_input = 1;
                        }

                        if(vyber_monster<=pocet_Monster && vyber_monster>0){
                            monstra_zivoty[vyber_monster] =  monstra_zivoty[vyber_monster] - schopnosti_Damage[vyber_utoku-1];
                            statistiky[2] = statistiky[2] - schopnosti_Cost[vyber_utoku-1];
                            potvrzeni_monster=1;
                        }



                    }


                potvrzeni_utok = 1;
                break;
                }
                case 2:
                {

                cout << "\nNa jaky monstrum chcete zautocit\n";
                for(int i = 1; i<=pocet_Monster; i++)
                {
                    if(monstra_zivoty[i]>0){
                    cout << i << ". Monstrum\n";
                    }
                }


                    while(potvrzeni_monster==0)
                    {
                        cin >> vyber_monster;

                        input_Kontrol = inputKontrol(input_Kontrol);
                        if(input_Kontrol==1 || monstra_zivoty[vyber_monster]<=0){
                            potvrzeni_monster = 1;
                            utok_monster_input = 1;
                        }



                        if(vyber_monster<=pocet_Monster && vyber_monster>0){
                            monstra_zivoty[vyber_monster] =  monstra_zivoty[vyber_monster] - schopnosti_Damage[vyber_utoku-1];
                            statistiky[2] = statistiky[2] - schopnosti_Cost[vyber_utoku-1];
                            potvrzeni_monster=1;
                        }



                    }


                potvrzeni_utok = 1;
                break;
                }
                case 3:
                {

                cout << "\nNa jaky monstrum chcete zautocit\n";
                for(int i = 1; i<=pocet_Monster; i++)
                {
                    if(monstra_zivoty[i]>0){
                    cout << i << ". Monstrum\n";
                    }
                }


                    while(potvrzeni_monster==0)
                    {
                        cin >> vyber_monster;

                        input_Kontrol = inputKontrol(input_Kontrol);
                        if(input_Kontrol==1 || monstra_zivoty[vyber_monster]<=0){
                            potvrzeni_monster = 1;
                            utok_monster_input = 1;
                        }



                        if(vyber_monster<=pocet_Monster && vyber_monster>0){
                            monstra_zivoty[vyber_monster] =  monstra_zivoty[vyber_monster] - schopnosti_Damage[vyber_utoku-1];
                            statistiky[2] = statistiky[2] - schopnosti_Cost[vyber_utoku-1];
                            potvrzeni_monster=1;
                        }



                    }


                potvrzeni_utok = 1;
                break;
                }
                case 4:
                {

                cout << "\nNa jaky monstrum chcete zautocit\n";
                for(int i = 1; i<=pocet_Monster; i++)
                {
                    if(monstra_zivoty[i]>0){
                    cout << i << ". Monstrum\n";
                    }
                }
                while(potvrzeni_monster==0)
                {
                    cin >> vyber_monster;

                    input_Kontrol = inputKontrol(input_Kontrol);
                        if(input_Kontrol==1 || monstra_zivoty[vyber_monster]<=0){
                            potvrzeni_monster = 1;
                            utok_monster_input = 1;
                        }

                    if(vyber_monster<=pocet_Monster && vyber_monster>0){
                        monstra_zivoty[vyber_monster] = monstra_zivoty[vyber_monster] - statistiky[1];
                        potvrzeni_monster=1;
                    }

                }


                potvrzeni_utok = 1;
                break;
                }
                default:
                {
                break;
                }
           }

        }

        if(utok_monster_input!=1){


        int potvrzeni_vyhry = 0;
        for(int i = 1;i<=pocet_Monster;i++){
            if(monstra_zivoty[i]<=0){
                monstra_zivoty[i] = 0;

            }
            potvrzeni_vyhry = potvrzeni_vyhry+monstra_zivoty[i];
        }

        int random_utok_monster;


        if(laviskovy_Metr_potvrzeni==0){
            random_utok_monster = rand() % pocet_Monster + 1;
        if(monstra_zivoty[random_utok_monster]<0){
            random_utok_monster = rand() % pocet_Monster + 1;
        }
        if(monstra_zivoty[random_utok_monster]>0){
        system("cls");
        cout << "Monstrum " << random_utok_monster <<  " na tebe zautocilo";
        cout << "\nUbralo ti za " << monstra_damage[random_utok_monster];
        cout << "\nTvoje zivoty " << statistiky[0] << " - " << monstra_damage[random_utok_monster] << "\n";
        cout << "Press any key to continue\n";
        getch();
        statistiky[0] = statistiky[0] - monstra_damage[random_utok_monster];
        }
        else if(potvrzeni_vyhry>0){
            cout << "Monstrum uklouzlo a netrefilo se\n";
            cout << "Press any key to continue\n";
            getch();
        }

        }


        if(potvrzeni_vyhry==0){
          vysledek_bitvy = 1;
        }
        }



       system("cls");

      }

}


int randomMapa(string mapa[]) {
    mapa[0] = "V";
    int pocitadlo = 0;
    int pocitadlo_monster = 0;
    int pocitadlo_MB = 0;
    int zapis_string = 1;
    int pocitadlo_vesnice = 0;

    while (pocitadlo < 23) {
        int random = rand() % 6 + 1;

        if(pocitadlo_monster==16){
            pocitadlo = 23;
        }
        if(pocitadlo_monster>(pocitadlo_vesnice*5)){
            random = 6;
        }

        switch (random) {
            case 1:
                if((pocitadlo_monster+ 1) <= 16){
                mapa[zapis_string] = "M";
                zapis_string++;
                pocitadlo++;
                pocitadlo_monster++;
                }
                break;
            case 2:
                if((pocitadlo_monster + 2) <= 16){
                mapa[zapis_string] = "2M";
                zapis_string++;
                pocitadlo += 2;
                pocitadlo_monster += 2;
                }
                break;
            case 3:
                if((pocitadlo_monster + 3) <= 16){
                mapa[zapis_string] = "3M";
                zapis_string++;
                pocitadlo += 3;
                pocitadlo_monster += 3;
                }
                break;
            case 4:
                if((pocitadlo_monster + 4) <= 16){
                mapa[zapis_string] = "4M";
                zapis_string++;
                pocitadlo += 4;
                pocitadlo_monster += 4;
                }
                break;
            case 5:
                if((pocitadlo_MB + 1) <= 2){
                mapa[zapis_string] = "MB";
                zapis_string++;
                pocitadlo++;
                pocitadlo_MB++;
                }
                break;
            case 6:
                if(mapa[zapis_string-1]!="V"){
                mapa[zapis_string] = "V";
                zapis_string++;
                pocitadlo++;
                pocitadlo_vesnice++;
                    }

                break;
            default:

                break;

        }
    }

    if(pocitadlo_monster<16){
        int sort = 16 - pocitadlo_monster;
        switch(sort){
            case 1:
            {
                mapa[zapis_string] = "M";
                zapis_string++;
                break;
            }
            case 2:
            {
                mapa[zapis_string] = "2M";
                zapis_string++;
                break;
            }
            case 3:
            {
                mapa[zapis_string] = "3M";
                zapis_string++;
                break;
            }
            case 4:
            {
                mapa[zapis_string] = "4M";
                zapis_string++;
                break;
            }
            default:
            {
                break;
            }
        }
    }
    if(pocitadlo_MB<2){
        int sort_MB = 2 - pocitadlo_MB;
        switch(sort_MB){
            case 1:
            {
                mapa[zapis_string] = "MB";
                zapis_string++;
                break;
            }
            case 2:
            {
                for(int i = 0; i<2;i++){
                    mapa[zapis_string] = "MB";
                    zapis_string++;
                }
                break;
            }
            default:
            {
                break;
            }
        }
    }

    mapa[zapis_string] = "HB";
    zapis_string++;
    return zapis_string;
}

int poutnik(int statistiky[], int maxima_Statistiky[]){
    cout << "Prave jsi narazil na poutnika\n";
    cout << "Dostanes jednu hadanku, pokud ji splnis, dostanes zvetseni tvych zivotu o 20\n";
    cout << "Press any key to continue\n";
    getch();
    int random = rand() % 3;
    int vyber_poutnik;
    int input_Kontrol = 0;
    int while_zkouska = 0;
    system("Cls");

    switch(random){
        case 0:
        {
            while(while_zkouska==0){
            cout << "Pokoj ma 4 rohy a v kazdem rohu sedi jedna kocka. \nPred kazdou kockou sedi 3 kocky. Kolik kocek je v pokoji celkem?\n";
            cin >> vyber_poutnik;
            input_Kontrol = inputKontrol(input_Kontrol);
            if(input_Kontrol==0){
                while_zkouska=1;
            }
            }

            system("Cls");
            if(vyber_poutnik==4){
                cout << "Odpovedel jsi spravne\n";
                Sleep(1000);
                cout << "4 Kazda kocka ze sveho rohu vidi 3 ostatni, ktere sedi v dalsich rozich.\n\n";
                cout << "Tvoje zivoty se zvysuji o 20\n";
                cout << "Press any key to continue\n";
                getch();
                return maxima_Statistiky[0]+20;
            }else{
                cout << "Bohuzel spatna odpoved";
                cout << "4 Kazda kocka ze sveho rohu vidi 3 ostatni, ktere sedi v dalsich rozich.\n";
                cout << "\nNeziskavas nic\n";
                cout << "Press any key to continue\n";
                getch();
                return 0;
            }


            break;
        }
        case 1:
        {
            while(while_zkouska==0){
            cout << "Od doktora dostanes 3 tablety a mas brat kazdou pul hodinu jednu. Jak dlouho budes tablety brat?\n";
            cin >> vyber_poutnik;
            input_Kontrol = inputKontrol(input_Kontrol);
            if(input_Kontrol==0){
                while_zkouska=1;
            }
            }
            system("Cls");
            if(vyber_poutnik==1){
                cout << "Odpovedel jsi spravne\n";
                Sleep(1000);
                cout << "1 hodinu. Prvni tabletu vezmes na zacatku prvni hodiny, druhou vezmes za pul hodiny, treti na konci hodiny.\n\n";
                cout << "Tvoje zivoty se zvysuji o 20\n";
                cout << "Press any key to continue\n";
                getch();
                return maxima_Statistiky[0]+20;
            }else{
                cout << "Bohuzel spatna odpoved";
                Sleep(1000);
                cout << "1 hodinu. Prvni tabletu vezmes na zacatku prvni hodiny, druhou vezmes za pul hodiny, treti na konci hodiny.\n";
                cout << "\nNeziskavas nic\n";
                cout << "Press any key to continue\n";
                getch();
                return 0;
            }
            break;
        }
        case 2:
        {
            while(while_zkouska==0){
            cout << "Na ceste k vode potkala zebra 6 ziraf. Kazda zirafa mela na zadech 3 opice. \nKazda z opic mela na ramenou 2 ptaky. Kolik zvirat slo k vode?\n";
            cin >> vyber_poutnik;
            input_Kontrol = inputKontrol(input_Kontrol);
            if(input_Kontrol==0){
                while_zkouska=1;
            }
            }
            system("Cls");
            if(vyber_poutnik==1){
                cout << "Odpovedel jsi spravne\n";
                Sleep(1000);
                cout << "Jedno - zebra. Ostatni sly od vody.\n\n";
                cout << "Tvoje zivoty se zvysuji o 20\n";
                cout << "Press any key to continue\n";
                getch();
                return maxima_Statistiky[0]+20;
            }else{
                cout << "Bohuzel spatna odpoved";
                Sleep(1000);
                cout << "Jedno - zebra. Ostatni sly od vody.";
                cout << "\nNeziskavas nic\n";
                cout << "Press any key to continue\n";
                getch();
                return 0;
            }
            break;
        }
        default:
        {
            break;
        }
    }

return 0;

}





int main() {

    srand(time(NULL));

    int vyber_postavy;
    string jmeno;
    int statistiky[3];
    string schopnosti_nazev[3];
    int schopnosti_Damage[3];
    int schopnosti_Cost[3];
    int potvrzeni_vyberu = 0;
    bool potvrzeni;
    int zlato = 100;
    string mapa[23];
    int mapa_velikost = randomMapa(mapa);
    int input_Kontrol;
    char input[1];

     
    cout << "Vitejte ve hre\n";
    cout << "Stisknete tlacitko pro zacatek hry...\n";
    getch();
    while(potvrzeni_vyberu==0){
        input_Kontrol = 0;
        system("cls");
        cout <<  "Prosim, vyberte si classu \n";
        cout << "1) Skoc Dopole\n2) Hatsune Miku Fan\n3) Monkey\n4) Pokahontas \n";
        cin >> vyber_postavy;
        input_Kontrol = inputKontrol(input_Kontrol);

        switch(vyber_postavy){
            case 1:
            {
                jmeno = "Skoc Dopole";
                Statistiky(statistiky, vyber_postavy);
                potvrzeni = vypsaniClassy(statistiky,jmeno);
                cout << potvrzeni;
                if(potvrzeni==1){

                    Schopnosti(schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,vyber_postavy);

                    potvrzeni_vyberu=1;
                }else {
                    potvrzeni_vyberu = 0;
                }
                break;
            }
            case 2:
            {
                jmeno = "Hatsune Miku Fan";
                Statistiky(statistiky, vyber_postavy);
                potvrzeni = vypsaniClassy(statistiky,jmeno);

                if(potvrzeni==1){

                    Schopnosti(schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,vyber_postavy);

                    potvrzeni_vyberu=1;
                }else {
                    potvrzeni_vyberu = 0;
                }
                break;
            }
            case 3:
            {
                jmeno = "Monkey";
                Statistiky(statistiky, vyber_postavy);
                potvrzeni = vypsaniClassy(statistiky,jmeno);
                if(potvrzeni==1){

                    Schopnosti(schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,vyber_postavy);

                    potvrzeni_vyberu=1;
                }else {
                    potvrzeni_vyberu = 0;
                }
                break;
            }
            case 4:
            {
                jmeno = "Pokahontas";
                Statistiky(statistiky, vyber_postavy);
                potvrzeni = vypsaniClassy(statistiky,jmeno);
                if(potvrzeni==1){

                    Schopnosti(schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,vyber_postavy);

                    potvrzeni_vyberu=1;
                }else {
                    potvrzeni_vyberu = 0;
                }
                break;
            }
            default:
            {
                if(input_Kontrol!=1){
                cout << "Stisknete prosim cislo od 1-4 pro vyber classy\n";
                cout << "Press any key to continue\n";
                getch();
                potvrzeni_vyberu=0;
                break;
                }
            }
        }
    }

    int maxima_Statistiky[2] = {statistiky[0], statistiky[2]};
    int xp = 0;
    int level = 1;


    system("cls");

    cout << "Vase classa " << jmeno << " ma 3 schopnosti\nZde je mate vypsane\n";

    for(int i = 0; i<=2; i++){
        cout << "Schopnost " << i+1 << ") " << schopnosti_nazev[i] << endl;
    }

    cout << "\n";
    cout << "Press any key to continue\n";
    getch();

    system("cls");
    cout << "Zacatek hry";
    cout << "\n\nMusis se vydat valecniku na dobrodruznou cestu tvych snu\n\n";
    Sleep(3000);
    cout << "Tvym cilem je se dostat az k hlavnimu bossovi\n\n";
    Sleep(3000);
    cout << "Predtim ale musis porazit nekolik monster a mini bossu\n";
    cout << "Press any key to continue...\n";
    getch();
    system("cls");
    cout << "Zacatek Hry\n\n";
    cout << "Ted ti ukazu mapu, kterou musis projit\n\n";
    Sleep(3000);
    cout << "Pokud umres, hra konci, pokud se dostanes az na konec, ceka na tebe roky slavy a bohatstvi\n";
    cout << "Press any key to continue\n";
    getch();
    system("Cls");


    cout << "MAPA:\n";
    printMapa(mapa,mapa_velikost);
    cout << endl;
    cout << "Press any key to continue\n";
    getch();
    system("cls");

    cout << "Ted se dostanes do vesnice\n\n";
    Sleep(3000);
    cout << "Ve vesnici muzes za zlataky, ktere dostanes ze zabijeni monster\n\n";
    Sleep(3000);
    cout << "Kupovat doplneni zivotu, nebo si upgradovat statistiky\n";
    cout << "Press any key to continue\n";
    getch();


    zlato = vesnice(zlato,statistiky, maxima_Statistiky);

    system("cls");
    cout << "Ted se vydas na cestu\n";
    cout << "X na mape znamena, ze jsi tuto oblast uz prosel\n";
    mapa[0] = "X";
    printMapa(mapa,mapa_velikost);
    Sleep(2000);
    cout << "\nJsi pripraveny na svuj prvni souboj?";
    cout << "\nNemas zde vyber, takze jenom zmackni tlacitko pro pokracovani\n";
    cout << "Press any key to continue\n";
    getch();

    int random_poutnik = rand() % mapa_velikost;
    int random_zlato;

    for(int i = 1; i<=mapa_velikost-1; i++){

        system("cls");

        level = XP(xp, level,statistiky, schopnosti_Damage, maxima_Statistiky);
        cout << "\nPress any key to continue\n";
        getch();
        system("cls");


        if(i==random_poutnik){
           maxima_Statistiky[0] = poutnik(statistiky, maxima_Statistiky);
           system("cls");
        }

        if(i>1){
        printMapa(mapa,mapa_velikost);
        cout << "\nZde muzes videt mapu\n";
        cout << "Press any key to continue\n";
        getch();
        }
        if(mapa[i]=="V"){
            zlato = vesnice(zlato,statistiky, maxima_Statistiky);
            mapa[i] = "X";
        }
        else if(mapa[i]=="M"){
            bitva(statistiky,schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,1, jmeno,0);
            if(statistiky[0]<=0){
            cout << "Bohuzel jsi umrel";
            cout << "\n:((((((((((";
            Sleep(5000);
            exit(0);
            }
            else{
            cout << "Gratuluji, prave jsi porazil monstrum\n";
            random_zlato = rand() % 10 + 20;
            cout << "Zlato: " << zlato << "+" << random_zlato;
            zlato += random_zlato;
            xp +=10;
            Sleep(3000);
            }
            mapa[i] = "X";
        }
        else if(mapa[i]=="2M"){
            bitva(statistiky,schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,2, jmeno,0);
            if(statistiky[0]<=0){
            cout << "Bohuzel jsi umrel";
            cout << "\n:((((((((((";
            Sleep(5000);
            exit(0);
            }
            else{
            cout << "Gratuluji, prave jsi porazil 2 monstra\n";
            random_zlato = rand() % 15 + 20;
            cout << "Zlato: " << zlato << "+" << random_zlato;
            zlato += random_zlato;
            xp +=10;
            Sleep(3000);
            }
            mapa[i] = "X";
        }
        else if(mapa[i]=="3M"){
            bitva(statistiky,schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,3, jmeno,0);
            if(statistiky[0]<=0){
            cout << "Bohuzel jsi umrel";
            cout << "\n:((((((((((";
            Sleep(5000);
            exit(0);
            }
            else{
            cout << "Gratuluji, prave jsi porazil 3 monstra\n";
            random_zlato = rand() % 15 + 25;
            cout << "Zlato: " << zlato << "+" << random_zlato;
            zlato += random_zlato;
            xp +=10;
            Sleep(3000);
            }
            mapa[i] = "X";
        }
        else if(mapa[i]=="4M"){
            bitva(statistiky,schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,4, jmeno,0);
            if(statistiky[0]<=0){
            cout << "Bohuzel jsi umrel";
            cout << "\n:((((((((((";
            Sleep(5000);
            exit(0);
            }
            else{
            cout << "Gratuluji, prave jsi porazil 4 monstra\n";
            random_zlato = rand() % 15 + 30;
            cout << "Zlato: " << zlato << "+" << random_zlato;
            zlato += random_zlato;
            xp +=10;
            Sleep(3000);
            }
            mapa[i] = "X";
        }

        else if(mapa[i]=="MB"){
            bitva(statistiky,schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,1, jmeno,1);
            if(statistiky[0]<=0){
            cout << "Bohuzel jsi umrel";
            cout << "\n:((((((((((";
            Sleep(5000);
            exit(0);
            }
            else{
            cout << "Gratuluji, prave jsi porazil Mini Bosse\n";
            random_zlato = 50;
            cout << "Zlato: " << zlato << "+" << random_zlato;
            zlato += random_zlato;
            xp +=10;
            Sleep(3000);
            }
            mapa[i] = "X";
        }
        else if(mapa[i]=="HB"){
            bitva(statistiky,schopnosti_nazev,schopnosti_Damage,schopnosti_Cost,1, jmeno,2);
            if(statistiky[0]<=0){
            cout << "Bohuzel jsi umrel";
            cout << "\n:((((((((((";
            Sleep(5000);
            exit(0);
            }
            else{
            }
        }
    }

    system("cls");
    cout << "Gratuluji, prave jsi dohral hru\n";
    cout << "Zmackni jakekoliv tlacitko pro ukonceni hry\n";
    getch();


}

void printMapa(string mapa[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "["<<mapa[i] << "]";
        if(i<size-1){
        cout << "->";
        }
    }
}

int vypsaniClassy(int statistiky[], string jmeno){

    int potvrzeni_vyberu;
    int x,y;
    int input_Kontrol;


    do{
        system("cls");

        cout << "Tvoje jmeno je " << jmeno;
        cout << "\nZivoty: " << statistiky[0];
        cout << "\nVelikost utoku: " << statistiky[1];
        cout << "\nLaviskovy Metr: " << statistiky[2];
        cout << "\n\nPrejes si potvrdit vyber classy  " << jmeno;
        cout << "\n\nPokud ano, zmackni 1)";
        cout << "\nPokud ne, zmackni 2)\n";

        cin >> x;

        input_Kontrol = inputKontrol(input_Kontrol);

        switch(x){
            case 1:
            {
                potvrzeni_vyberu=1;
                y=0;
                break;
            }
            case 2:
            {
                potvrzeni_vyberu=0;
                y=0;
                break;
            }
            default:
            {
                y=1;
                break;
            }
        }
    }while(y==1);

    return potvrzeni_vyberu;

}
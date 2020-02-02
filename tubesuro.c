#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool BalikMenu = true;
bool InfiniteLoop = true;
int happ, hyg, soc, hlth, mny; //happiness, hygiene, social, health, money
happ = 50;
hyg = 50;
soc = 50;
hlth = 50;
mny = 50;
int *phapp = &happ;
int *phyg = &hyg;
int *psoc = &soc;
int *phlth = &hlth;
int *pmny = &mny;

void PilihMenu(int opsi){ //kegiatan yang bisa dipilih
    if (opsi == 1) //hedon bareng temen
    {
        if (*pmny >= 25){
            *pmny -= 25;
            *phapp += 25;
            *psoc += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, saldo Anda tidak mencukupi");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 2) //tidur siang
    {
        if (*psoc >= 25)
        {
            *psoc -= 25;
            *phlth += 25;
            *phapp += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda perlu bersosialisasi");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 3) //ambis
    {
        if (*phlth >= 25)
        {
            *phlth -= 25
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda perlu istirahat");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 4) //makan indomie
    {

    }

}


int main(){
    bool BalikMenu = true;
    bool InfiniteLoop = true;
    int opsi;
    while (InfiniteLoop == true) //program infinite loop
    {
        BalikMenu = false; 
        if (*phlth == 0) //kondisi mati
        {
            printf("Selamat! Hilmy sudah berada di sisi-Nya");
        }
        else //jika health belum 0 akan infinite loop
        {
            while (BalikMenu == false) 
            {
                printf("Selamat Datang di Hilmy's Life! \n");
                printf("Berikut adalah stats anda sekarang: \n");
                printf("Happiness : %d\n", *phapp);
                printf("Hygiene : %d\n", *phyg);
                printf("Social : %d\n", *psoc);
                printf("Health : %d\n", *phlth);
                printf("Money : %d\n", *pmny);
                printf("Pilih kegiatan yang ingin Anda lakukan: \n");
                printf("1. Hedon bareng temen \n");
                printf("2. Tidur siang \n");
                printf("3. Belajar sampe pagi \n");
                printf("4. Makan Indomie \n");
                printf("5. Skip kelas \n");
                scanf("%d", &opsi);
                PilihMenu(int opsi);
            }
        }
    }

}
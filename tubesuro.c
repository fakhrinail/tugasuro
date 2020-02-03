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

void PilihMenu(int opsi) //kegiatan yang bisa dipilih
{
    if (opsi == 1) //hedon bareng temen
    {
        if (*pmny >= 25)
        {
            *pmny -= 25;
            *phapp += 25;
            *psoc += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, saldo Anda tidak mencukupi \n");
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
            printf("Maaf, Anda perlu bersosialisasi \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 3) //ambis
    {
        if (*phlth >= 25)
        {
            *phlth -= 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else if (*phlth >0)
        {
            printf("Maaf, Anda perlu istirahat \n");
            BalikMenu = true;
            return BalikMenu;
        }
        else 
        {
        	printf("Selamat! Hilmy sudah berada di sisi-Nya \n");
        }
    }
    else if (opsi == 4) //makan indomie
    {
        if (*phlth >= 25)
        {
            *phlth -= 25;
            *phapp += 25;
            *pmny -= 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda sudah hampir gagal ginjal \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 5) //skip kelas
    {
         if (*pmny >= 25)
        {
            *pmny -= 25;
            *phapp += 25;
            *psoc += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda masih kurang imba \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 6) //meni pedi
    {
         if (*pmny >= 25)
        {
            *pmny -= 25;
            *phapp += 25;
            *psoc += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda kurang kaya \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 7) //spa
    {
         if (*pmny >= 25)
        {
            *pmny -= 25;
            *phapp += 25;
            *psoc += 25;
            *phyg += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, kulit Anda sudah terlalu mulus \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 8) //minum kopi 1 galon
    {
         if (*phlth >= 25 && *pmny >= 25)
        {
            *pmny -= 25;
            *phapp += 25;
            *phlth -= 25;
            *phyg -= 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda sudah kelebihan kafein \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 9) //kerja sampingan
    {
         if (*pmny < 1000)
        {
            *pmny += 25;
            *phapp += 25;
            *psoc += 25;
            *phyg -= 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, Anda sudah terlalu kaya, silahkan hamburkan uang Anda terlebih dahulu \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
    else if (opsi == 10) //mandi
    {
         if (*phyg < 100)
        {
            *phapp += 25;
            *phyg += 25;
            BalikMenu = true;
            return BalikMenu;
        }
        else
        {
            printf("Maaf, 99% kotoran di tubuh anda sudah hilang \n");
            BalikMenu = true;
            return BalikMenu;
        }
    }
}


int main()
{
    bool BalikMenu = true;
    bool InfiniteLoop = true;
    int opsi;
    printf("Selamat datang di Hilmy's Life!");
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
                if (*phlth==0) { //kondisi mati
    				printf("Selamat! Hilmy sudah berada di sisi-Nya\n");
    				BalikMenu = true;
    				InfiniteLoop = false;
                }
                printf("Berikut adalah stats anda sekarang: \n");
                printf("Happiness : %d\n", *phapp);
                printf("Hygiene : %d\n", *phyg);
                printf("Social : %d\n", *psoc);
                printf("Health : %d\n", *phlth);
                printf("Money : %d\n", *pmny);
                printf("Pilih kegiatan yang ingin Anda lakukan: \n");
                printf("1. Hedon bareng temen \n");
                printf("2. Tidur siang \n");
                printf("3. Ngambis sampe pagi \n");
                printf("4. Makan Indomie \n");
                printf("5. Skip kelas \n");
                printf("6. Meni pedi \n");
                printf("7. Spa \n");
                printf("8. Minum kopi 1 galon \n");
                printf("9. Kerja sampingan \n");
                printf("10. Mandi \n");
                printf("Masukkan nomor kegiatan yang ingin Anda lakukan: ");
                scanf("%d", &opsi);
                PilihMenu(opsi);
            }
        }
    }
}

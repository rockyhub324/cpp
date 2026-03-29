#include <stdio.h>
#include <string.h>

typedef struct {
   char menu[50];
   int harga;
}Menu;

typedef struct {
   char nama[50];
   int id_pegawai;
}Pegawai;

void updateMenu(Menu m);
void updatePegawai(Pegawai P);

int main(){
    Menu menu_01;
    Menu menu_02;
    Menu menu_03;

    Pegawai pegawai_01;
    Pegawai pegawai_02;

    strcpy(menu_01.menu, "Fries");
    menu_01.harga = 50000;
    strcpy(menu_02.menu, "Burger");
    menu_02.harga = 40000;
    strcpy(menu_03.menu, "Soda");
    menu_03.harga = 30000;

    strcpy(pegawai_01.nama, "Rocky");
    pegawai_01.id_pegawai = 1001;

    strcpy(pegawai_02.nama, "Kerwin");
    pegawai_02.id_pegawai = 1002;

    updateMenu(menu_01);
    updateMenu(menu_02);
    updateMenu(menu_03);
  
    updatePegawai(pegawai_01);
    updatePegawai(pegawai_02);
}

void updateMenu(Menu m){
    
    printf("Menu : %s\n", m.menu);
    printf("Harga : %d\n", m.harga);
    printf("\n");
}

void updatePegawai(Pegawai P){
    printf("Name : %s\n", P.nama);
    printf("ID : %d\n", P.id_pegawai);
    printf("\n");
}
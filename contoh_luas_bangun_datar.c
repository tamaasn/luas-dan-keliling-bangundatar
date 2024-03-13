#include <stdio.h>
#include "luas_bangun_datar.h"

int main(){
  printf("Luas persegi : %lf\n" , luas_persegi(5));
  printf("Keliling persegi : %lf\n" , keliling_persegi(5));
  printf("Luas persegi panjang : %lf\n" , luas_persegi_panjang(5 , 4));
  printf("Keliling persegi panjang : %lf\n" , keliling_persegi_panjang(5,4));
  printf("Luas lingkaran : %lf\n" , luas_lingkaran(14));
  printf("Keliling lingkaran : %lf\n" , keliling_lingkaran(14));
  printf("Luas segitiga : %lf\n" , luas_segitiga(10,5));
  printf("Keliling segitiga : %lf\n" , keliling_segitiga(4,5,6));
  return 0;
}

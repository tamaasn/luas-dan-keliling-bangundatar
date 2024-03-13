#define PI 22/7

double luas_persegi(double s){
  return s*s;
}

double keliling_persegi(double s){
  return s*4;
}

double keliling_persegi_panjang(double p , double l){
  return (p*2)+(l*2);
}

double luas_persegi_panjang(double p , double l){
  return p*l;
}

double keliling_lingkaran(double d){
  return PI*d;
}

double luas_lingkaran(double r){
  return PI * r * r;
}

double luas_segitiga(double a , double t){
  return a * t / 2;
}

double keliling_segitiga(double a , double b , double c){
  return a+b+c;
}

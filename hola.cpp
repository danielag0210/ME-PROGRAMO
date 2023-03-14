#include <stdio.h>
#include <iostream>
#include <cstring>
#include<ctime>
#include <cstdlib>
#include <string.h>
using namespace std;
/* _______________________________PROBLEMA 1___________________________________ /*
/* int main()
{int dinero[10] = { 50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000};
  cout << "Ingrese un valor: " << endl;
  cin >> A;
   
  for (i=9; i >= 0; i=i-1)
    {if (A/dinero[i]!=0)
        {
        B = A/dinero[i];
        cout << dinero[i] << ": " <<   B << endl;
        A = A - (B*dinero[i]); 
        }
    else{
    cout << dinero[i] << ": " << "0" <<endl;
        }
    }
  cout << "Faltante: " << A <<endl;
} /*

/* _______________________________PROBLEMA 3_______________________________/*
/* bool comparar(char *A, char *B, int i, int A2, int A1);   
char A[50];
char B[50];
int i=0;
int A2=0;
int A1=0;
int main()
{cout << "Ingrese la primera palabra: " << endl;
cin >> A;
cout << "Ingrese la segunda palabra: " << endl;
cin >> B;
bool A3=comparar(A,B,i,A2,A1);
cout << A3 <<endl;}

bool comparar(char *A, char *B, int i, int A2, int A1)    
{ A1 =strlen(A);
  A2 =strlen(B);
     
if (A1==A2){ 
  for(i=0;i<A1;i=i+1){
    if(A[i]!=B[i]) 
     {A2 = false;}
  }
  if (A2==A1)
  return true;
  else 
  return false;
  }
else
return false;
}/*

/* _______________________________ PROBLEMA 2___________________________/*
/* int main() 
{int A,i,S,j;
A=10;
char L1,B,L[A];

srand(time(NULL));
for (i=0; i<A; i=i+1)
{L[i]= 'A' + rand() %26;
 cout << L[i] << "" ;}

cout << endl;

for (i=0; i<A; i=i+1)
  {L1=L[i];
   S=0;
  {for (j=0; j<A; j=j+1)
      if (L1==L[j])
      {S=S+1;}}
   cout << L1<< ":" <<S << endl;}
}/*

/* ______________________________PROBLEMA 4_______________________________/*
/* void Cambio(char B[], int A){
int A2,sum;
A2=A;
sum=0;

while (A2>0)
{A2=A2/10;
sum=sum+1;}
sum = sum-1;
A2=A;

while (sum>=0)
{A2=A%10;
A = A/ 10;
B[sum] = A2 + '0';
sum=sum-1;}
B[sum] = '\0';
}

int main() 
{int A,x;
 char B[50];
 cout << "Escribe un numero entero para pasarlo a string: " << endl;
 cin  >> A;
 Cambio(B,A);
 cout << "Tu numero a string es: " << B << endl;} /*

/*__________________________PROBLEMA 5_______________________________________________/*

/* int Cambio2(char A[]){
int j = 0, k =0, signo = 1;
if (A[k] == '-') {
   signo= -1;
   k=k+1;}

do {j = j *10 + (A[k] - '0');
    k=k+1;
    }while (A[k] != '\0');

return j * signo;}

int main() 
{char A[50];
int  X;
std::cout << "Escribe una caracter para pasarlo a int: " << std::endl;
std::cin >> A;
X=Cambio2(A);
std::cout << "Tu numero en int es: " << X << std::endl;} /*

/* ______________________________PROBLEMA 6_________________________________________________ /*
/* char pasar(char l)
{char l1;
if (l>96)
l1=l-32;
return l1;

if (l<96)
l1=l+32;
return l1;}


int main() 
{int i;
 char A[50];
 std::cout << "Escribe una frase sin espacios la pasamos a mayuscula: " << std::endl;
 std::cin >> A;

while (A[i]!= '\0'){
    if (A[i] >= 'a' && A[i] <= 'z')
    {A[i]=pasar(A[i]);
    i=i+1;}
    
    else
    i=i+1;}
std::cout << A << std::endl;
}/*


/*____________________________________PROBLEMA 7______________________________________________/*

/* void eliminar(char palabra[]) {
    int i,j,n=0,t;
    char palabra2[50];
     t=strlen(palabra);
    palabra2[n]= palabra[0];
    for (i = 1; i < t; i=i+1) {
        for (j =0; j <= n; j=j+1){
            if (palabra[i]== palabra2[j]) {
                break;}
        }
        if (j > n) {
            n=n+1;
            palabra2[n] = palabra[i];
        }
    }
    palabra2[n+1] = '\0';
   std::cout <<"La palabra sin letras duplicadas: " << palabra2 << std::endl;
}

int main() {
char palabra[50];
std::cout << "Ingresa una palabra, sin caracteres especiales: ";
std::cin >> palabra;
eliminar(palabra);
} /*

/*________________________________PROBLEMA 8 __________________________________________________________/*
/*int main() {
int n=0;
char B[50];
char B2[50];
char N[50];

cout << "Ingrese una cadena con caracteres y numeros: ";
    cin >> B;
    
for (int i = 0; B[i] != '\0'; i = i + 1) {
    if ((B[i]>= 65 && B[i]<= 90) || (B[i] >=97 && B[i]<= 122)) 
        {B2[n] = B[i];
        n = n+1;
        }

        else if (B[i]>= 48 && B[i]<= 57) {
            N[n] = B[i];
            n = n+1;
        }
        else {
            cout << "El caracter " << B[i] << " no es valido." << endl;}
            
    }
 cout << "Texto: ";
    for (int i= 0; i< n; i=i + 1) {
        cout << B2[i];}
 
    cout << " Numero: ";
    for (int i = 0; i < n; i = i + 1) {
        cout << N[i];
    }
}/*

/*  __________________________________PROBLEMA 9______________________________________________________ /*
/* int main()
{ int i, j, n, sum = 0, s, B, s2;
string cadena, A= "";
cout << "Escribe los numeros a sumar:  " << endl;
cin >> cadena;
cout << "Escribe de a cuantas parejas, quieres que se sumen los numeros: " << endl;
cin >> n;
cout << "Original: " << cadena << endl;

s=cadena.length();
B=s/n;
    if (s%n==0)
    {for (j=0; j<B; j=j+1)
      { A = "";
      for (i =0; i<n; i =i+ 1)
       { A = A + cadena[j*n +i]; }
          sum = stoi(A) + sum; } }
    else
    {s2 = s;
     do
    { s2 = s2 + 1;
    cadena = '0' + cadena;
     } while (s2 % n != 0);
    B = s2/n;
    for (j = 0; j< B; j=j+1)
    {A = "";
      for (i = 0;  i<n;i = i + 1)
          { A = A+ cadena[j * n + i];}
        sum = stoi(A) + sum;}
    }
    cout << "Suma: " << sum << endl}/*

/* ________________________________PROBLEMA 11 ____________________________________________________/*

/*int main() {int  S=0, A=0;
int matriz[3][3];
   cout << "Escribe los valores para la matriz:" << endl;
   for (int i=0; i < 3; i=i+1) {
      for (int j =0; j < 3; j=j+1) {
         cout << "Escribe  el valor de la posicion" <<"(" << i << ")" <<"("<< j << "): ";
          cin >> matriz[i][j];}
    }
    
   for (int i = 0; i < 3; i=i+1) {
     for (int j =0; j < 3; j=j+1) {
        cout << matriz[i][j] << " ";
       }
        cout << endl;}
   
    for (int i=0; i<3; i = i + 1) {
        S = 0;
        for (int j=0; j < 3; j = j + 1) {
            A = matriz[i][j];
             S = A + S;
        }
        if (S != 15) {
          cout << "La matriz ingresada no es un cuadrado magico." << endl;
         return 0;
        }
    }

    for (int j=0; j < 3; j = j+1) {
        S = 0;
        for (int i = 0; i <3; i = i + 1) {
            A=matriz[i][j];
            S=A + S;
        }
        if (S != 15) {
            cout << "La matriz ingresada no es un cuadrado magico." << endl;
          return 0;
        }
    }

  S = 0;
    for (int i=0; i<3; i=i+1) {
     A = matriz[i][i];
        S = A +S;
    }
    if (S!=15) {
        cout << "La matriz ingresada no es un cuadrado magico." << endl;
        return 0;
    }

    S = 0;
    for (int i = 0; i<3; i = i+1) {
        A = matriz[i][2 - i];
        S = A + S;
    }
    if (S != 15) {
        cout << "La matriz ingresada no es un cuadrado magico." << endl;
      return 0;
    }

    cout << "La matriz ingresada es un cuadrado magico." << endl;

}/*

/* _________________________________ PROBLEMA 12 _____________________________________________________/*

/* void imprimir(char cine[15][20]);
void preguntar(char cine[15][20], int fila, int columna);
int cambio(char fila);

int main() {
    char cine[15][20];
    int N=1;
  
    while (N==1) {
        cout << "Escribe 1 si deseas reservar una fila, 2 si deseas salir: " << endl;
        cin >> N;
        if (N == 1) {    
         for (int i = 0; i < 15; i=i+1) {
           for (int j = 0; j < 20; j=j+1) {
             cine[i][j] = '+';}
            }
            imprimir(cine);
            preguntar(cine, 0, 0);}
    }
}

void imprimir(char cine[15][20]) {
    for (int i =0; i < 15; i=i+1) {
        for (int j = 0; j< 20; j=j+1) {
            cout << cine[i][j] << " ";}
    cout << endl;}
}

void preguntar(char cine[15][20], int fila, int columna) {
    char letra_fila;
    cout<<"Escribe la fila que vas a seleccionar, van de la A a la O: " << endl;
    cin>>letra_fila;
    fila=cambio(letra_fila);
    cout<< "Escribe el número de la silla van de 1 al 20: ";
    cin>> columna;
    cine[fila][columna - 1] = '-'; 
    imprimir(cine);
}

int cambio(char fila) {
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    for (int i = 0; i<sizeof(letras); i=i+1) {
        if (fila==letras[i]) {
            return i;
        }
    }
}
/*
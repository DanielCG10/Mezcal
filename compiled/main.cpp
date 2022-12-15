#include <cstdio>
 #include <iostream> 
 using namespace std; 
int main(int argc, char *argv[]){ 
int opcion; 
while(opcion!=5){
	 cout << "             MENU" << endl; 
	 cout << " 1 Mayor y menor de 5 numeros " << endl; 
	 cout << " 2 Imprimir arreglo ordenado " << endl; 
	 cout << " 3 Calcular media mediana y moda " << endl; 
	 cout << " 4 Almacen de discos " << endl; 
	 cout << " 5 Salir " << endl; 
	 cout << "" << endl; 
	 cout << " Elige una opcion: " << endl; 
	 cout << "" << endl; 
cin >> opcion; 
if(opcion==1){
	 cout << "Mayor y menor de 5 numeros" << endl; 
int f; 
int i; 
int num; 
int arreglo[4];
for(i=0; 
i<5;i=i+1){
	 cout << "Dame un numero: " << endl; 
cin >> num; 
arreglo[i] = num;
}
int min; 
min=arreglo[0]
;for(f=0; 
f<5;f=f+1){
if(arreglo[f]<min){
min=arreglo[f]
;}
}
	 cout << "El numero menor es: "<< min << endl;
int may; 
may=arreglo[0]
;for(f=0; 
f<5;f=f+1){
if(arreglo[f]>may){
may=arreglo[f]
;}
}
	 cout << "El numero Mayor es: "<< may << endl;
	 cout << "" << endl; 

} else if(opcion==2){
	 cout << "Imprimir arreglo ordenado" << endl; 
int orden[9];
int i; 
int j; 
int k; 
int num; 
int aux; 
for(i=0; 
i<10;i=i+1){
	 cout << "Dame un numero: " << endl; 
cin >> num; 
orden[i] = num;
}
for(j=0; 
j<10;j=j+1){
for(k=0; 
k<10;k=k+1){
if(orden[k]>orden[k+1] ){
aux=orden[k]
;orden[k] = orden[k+1];
orden[k+1] = aux;
}
}
}
	 cout << "Imprimiendo el arreglo en orden ascendente: " << endl; 
	 cout << "" << endl; 
for(j=0; 
j<10;j=j+1){
	 cout << orden[j] << endl;
}
	 cout << "" << endl; 

} else if(opcion==3){
	 cout << "Calcular media mediana y moda" << endl; 
int Num; 
int Media; 
int Mediana; 
int Moda; 
int Numero; 
int Pos; 
int Arreglo[9];
int Auxiliar[9];
int i; 
int j; 
for(i=0; 
i<10;i=i+1){
	 cout << "Dame un numero: " << endl; 
cin >> Num; 
Arreglo[i] = Num;
}
for(i=0; 
i<10;i=i+1){
Auxiliar[i] = 0;
}
for(i=0; 
i<10;i=i+1){
Numero=Arreglo[i]
;Pos=i; 
for(j=0; 
j<10;j=j+1){
if(Arreglo[j]==Numero){
Auxiliar[Pos]++
;
}
}
}
int Mayor1; 
int PosMayor; 
PosMayor=0; 
Mayor1=Auxiliar[0]
;for(i=0; 
i<10;i=i+1){
if(Auxiliar[i]>Mayor1){
PosMayor=i; 
Mayor1=Auxiliar[i]
;}
}
Moda=Arreglo[PosMayor]
;int Size; 
Size=10; 
for(i=1; 
i<10;i=i+1){
for(j=0; 
j<=8;j=j+1){
if(Arreglo[j]>Arreglo[j+1] ){
int temp; 
int Num; 
Num=j+1;
int Num2; 
Num2=Arreglo[j+1];
temp=Arreglo[j]
;Arreglo[j] = Num2;
Arreglo[Num] = temp;
}
}
}
	 cout << "La serie de numeros es: " << endl; 
for(i=0; 
i<10;i=i+1){
	 cout << Arreglo[i] << endl;
}
int Suma; 
Suma=0; 
for(i=0; 
i<10;i=i+1){
Suma=Suma+Arreglo[i];
}
Media=Suma/10;
	 cout << "La Media es: "<< Media << endl;
	 cout << "La Moda es: "<< Moda << endl;
int Mediana1; 
int MedianaReal; 
if(Size%2!=0){
int num; 
num=Size/2;
Mediana=Arreglo[num]
;	 cout << "El valor de la Mediana es: "<< Mediana << endl;

} else {
int num; 
int num2; 
int Mediana2; 
num=Size/2;
num2=Size/2;
num2=num2+1;
Mediana=Arreglo[num]
;Mediana2=Arreglo[num2]
;Mediana1=Mediana+Mediana2;
MedianaReal=Mediana1/2;
	 cout << "El valor de la Mediana es: "<< MedianaReal << endl;
}
	 cout << "" << endl; 

} else if(opcion==4){
	 cout << "No se puede" << endl; 

} else if(opcion==5){
	 cout << "" << endl; 
	 cout << "Hasta pronto" << endl; 
	 cout << "" << endl; 

} else {
	 cout << "" << endl; 
	 cout << "Elija una opcion valida" << endl; 
	 cout << "" << endl; 
}
}
} 


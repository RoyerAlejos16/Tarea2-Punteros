#include <iostream>
#define _USE_MATH_DEFINESE
#include <cmath>
//#include <conio.h>//
using namespace std;
void fun(double x,double (*ref)(double)){
   double y=0.0; //declaro una variable auxiliar para hacer la conversion
   y = ( x *  M_PI ) / 180.0 ; // recibe x que es en angulo en grados y sale y que es el angulo convertido en radianes
   cout<<" "<<(*ref)(y)<<" en la funcion creada..."<<endl;//imprime el resultado dependiente quE funcion recibio
}

void menuparam(double x,double (*s)(double),double (*c)(double),double (*t)(double)){
int op;
cout<<"valores de las funciones trigonometricas usando el puntero"<<endl;
cout<<"Seleccione la funcion a calcular\n 1-Seno("<<x<<")\n 2-Coseno("<<x<<")\n 3-Tangente("<<x<<")\n";
cin>>op;
//system("cls");//
fflush(stdin);   //aqui es donde se llama fun que es la funcion que recibe un apuntador a una funcion trigonometrica
                 //y el angulo en grados respectivamente de la funcion a calcular
    switch (op)
    {
    case 1:
         cout<< "Seno("<<x<<") es:";
         fun(x,s);//Se llama a la funcion fun con los parametros x que es angulo y el otro es la funcion apuntada
         cout<<endl;
         cout<< "Valor directo usando cmath: Seno("<<x<<") es: "<<sin(x*M_PI/180.0) <<endl; 
         break;
    case 2:
         cout<<"Coseno("<<x<<") es:";
         fun(x,c);//Al igual que la fun(x,s) solo que llama a cos 
         cout<<endl;
         cout<< "Valor directo usando cmath: cos("<<x<<") es: "<<cos(x*M_PI/180.0) <<endl; 
         break;
    case 3:
         cout<<"Tangente("<<x<<")es:";
         fun(x,t);//Y tambien esta solo que llamando a tan 
         cout<<endl;
         cout<< "Valor directo usando cmath: tan("<<x<<") es: "<<tan(x*M_PI/180.0) <<endl;
         cout<<endl; 
         break;
    default:
        break;
    }
    //getchar();//
    //system("cls");//
}

int main(){
    char op='Y';
    double x=0.0;
    double (*s)(double)=sin;//Declaracion puntero a la funcion sin de cmath
    double (*c)(double)=cos;//Declaracion puntero a la funcion cos de cmath
    double (*t)(double)=tan;//DecLaracion puntero a la funcion tan de cmath
    while (op!='N')
    {
    //system("cls");   // 
    cout<<"Inserte el valor del angulo en grados"<<endl;
    cin>> x;//La variable x almacenara el angulo en grados 
    //fflush(stdin);//
    //system("cls");//
    menuparam(x,s,c,t);//se llama un menu para hacer los calculos   
    cout<<"¿Quieres calcular otro angulo? SI(Y)/NO(N)"<<endl;
    cin>>op;
    if (op=='n' || op=='N')
    {
      return 0;
    }
    }
       
return 0;
}

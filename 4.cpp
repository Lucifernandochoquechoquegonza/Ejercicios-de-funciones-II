#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    
    float a, b, c, x1, x2;
    
    cout<<"Ingresa el valor de a: "<<endl;
    cin>>a;
    
    cout<<"Ingresa el valor de b: "<<endl;
    cin>>b;
    
    cout<<"Ingresa el valor de c: "<<endl;
    cin>>c;
    
    float x = (b*b) - (4*a*c); 
    
    if (x <= 0){
        x = x*(-1);
        cout<<"Solución solo en números complejos"<<endl;
        cout<<"Solución en numeros complejos: " <<(-b/(2*a))<<" + "<<(sqrt(x)/(2*a))<<"i y "<<(-b/(2*a))<<" - "<<(sqrt(x)/(2*a))<<"i"<<endl;
    }else{
        x1 = (-b + sqrt(x)) / (2*a);
        x2 = (-b - sqrt(x)) / (2*a);
        
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
}
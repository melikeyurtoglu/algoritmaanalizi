#include <cstdlib>
#include <iostream>

using namespace std;
long pow (int x,int n){
     
     if(n==0) return 1;
     if(n==1) return x;
     if (n%2==0) return pow(x*x,n/2);
     else return pow(x*x,n/2)*x;
     }
     
     
     int ust(int a,int b){
         int i,sonuc=1;
          for(i=0;i<b;i++){
        sonuc=sonuc*a;                 
    }
         return sonuc;
         }
     
int main(int argc, char *argv[])
{
     
    cout<<"taban sayisini giriniz: ";
    int a;
    cin>>a;
    cout<<"ust sayiyi giriniz: ";
    int b;
    cin>> b;
    
   int sonuc;
   sonuc= ust(a,b);
   cout<<"us sonucu="<< sonuc <<endl;
    
    
    cout<<"pow sonucu:";
    
    cout << pow(a,b)<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
   
}

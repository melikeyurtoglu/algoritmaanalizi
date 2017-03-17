#include <cstdlib>
#include <iostream>

using namespace std;
//O(n) karmaşıklığı
class Myclass{
public:
     int array[10];
     int son;
   
     Myclass::Myclass(){
            son=0;
     }    
     
     int Myclass::addarray(int n){
         this->array[son]=n;
         cout<< this->array[son] << endl;
         son++;
     }
Myclass Myclass::operator=(Myclass arraya){
        int i;
     for(i=0;i<=son;i++){
         array[i]=arraya.array[i];       
     }
      for(i=0;i<son;i++){
         cout<<array[i] <<endl;        
     }  
   }
};
int main(int argc, char *argv[])
{
  
    Myclass myarray;
    myarray.addarray(5);
    myarray.addarray(10);
  
    Myclass b;
    b.addarray(11);
    b.addarray(12);
    b=myarray;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

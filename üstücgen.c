#include<stdio.h>
#include<stdlib.h>

// Kullanıcı tanımlı Üst üçgen matris bulma programı
// www.tarikbahar.com


#define M 3 //Matrisimizin boyutunu sabitimize atıyoruz..

int main()
{
 int i,j;
 int a[M][M]; 
 int b[3][1];
 int x[3][1];
 int k; 
  
   for(i=0;i<M;i++) // İlk döngümüz matrisin satır değişkenleridir. 
  {  
   for(j=0;j<M;j++) //İkinci döngümüz ise sütunları tanımlamaktadır.
   {              // Matrisin ilk elemanını bilgisayarımız a00 olarak alıyor.
   printf("a[%d][%d]=", i+1,j+1); // Fakat matematikte ilk elemanı a11 olarak kullandığımızdan dolayı ekrana bir ekleyerek yazılmasını tercih ettim.
    scanf("%d",&a[i][j]); // Kullanıcımızdan matris değerlerini alıyoruz.
   }
  }
   for(i=0;i<3;i++) // İlk döngümüz matrisin satır değişkenleridir. 
  {  
   for(j=0;j<1;j++) //İkinci döngümüz ise sütunları tanımlamaktadır.
   {              // Matrisin ilk elemanını bilgisayarımız a00 olarak alıyor.
   printf("b[%d][%d]=", i+1,j+1); // Fakat matematikte ilk elemanı a11 olarak kullandığımızdan dolayı ekrana bir ekleyerek yazılmasını tercih ettim.
    scanf("%d",&b[i][j]); // Kullanıcımızdan matris değerlerini alıyoruz.
   }
  }
  printf("\nUst Ucgen Matris\n\n");  //Oluşan matrisi ekrana bastırıyoruz.
  for(i=0;i<M;i++)
  {
   for(j=0;j<M;j++) //Ekrana bastırırken araya bir tane if-else yapısı ekleyerek matrisimizi üst üçgene çeviriyoruz.
   { if(j>=i)       //Bu kodumuzun Türkçesi bir değişkenin bulunduğu satır numarası sütun numarasında küçükse veya eşitse 
    printf("\t%d\t",a[i][j]); //ekrana yazdır. (eşitliği kaldırarak asal köşegeni dahil etmeyebilirsiniz)
	else{
         printf("\t%d\t",0);
         a[i][j] = 0;
   } 
     //değilse yerine 0 yazdır.
   }printf("\n"); // Matrisin satırlarını güzel gösterebilmek için böyle bir kısım ekledik.
  }  
  printf("\n");
  
  float x3 = (b[3][1]) / a[3][3];
  float x2 = ((b[2][1]-(a[2][3]*x3))) / a[2][2];
  float x1 =((b[1][1]-a[1][2]*x2-a[1][3]*x3)) / a[1][1];
  printf("x1=%f ,x2=%f, x3=%f " ,x1,x2,x3);
 
  
  
  
  scanf("%d",&k);
  
  
 return 0; 
 }

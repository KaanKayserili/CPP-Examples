#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //T√ºrk√ße karakter
   int s1,s2,toplam;
   cout<<"1. Sayiyi Giriniz : ";
   cin>>s1;
   cout<<"2. Sayiyi Giriniz : ";
   cin>>s2;
   toplam=s1+s2;
   cout<<"Say˝lar˝n Toplam˝ : "<<toplam;
}

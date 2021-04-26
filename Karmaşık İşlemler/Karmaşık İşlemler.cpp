#include <iostream>
using namespace std;

class OzelIslem{  //Burada ozel islem classýný baslattým.
	private: 
	int sayi1, sayi2, sayi3;  //get ve set fonksiyonlarini kullanmak icin sayilari private yaptim.   
	
	public:		//Public kismina da classdaki fonksiyonlari ekledim. Boylece bu fonksiyonlara her yerden erisebilecegim.
	
int getsayi1()
{
    return sayi1;
}
int getsayi2()
{
    return sayi2;
}
int getsayi3()
{
    return sayi3;
}

void setsayi1(int s1)
{
    sayi1 = s1;
}
void setsayi2(int s2)
{
    sayi2 = s2;
}
void setsayi3(int s3)
{
    sayi3 = s3;
}
		
int Ekok(int sayi1, int sayi2){   //EKOK islemini iki sayi ile gerceklestiren fonksiyon burada basliyor.
	
	   cout << "1.Sayiyi girin : ";
		   cin >> sayi1;
	   cout << "2.Sayiyi girin : ";
		   cin >> sayi2;

    for(int i=1; i<=sayi1*sayi2; i++) {
		if( (i%sayi1==0) && (i%sayi2==0) ){
			cout << "EKOK: " << i << endl;
			break;
        }
    }
}


int Ekok(int sayi1, int sayi2, int sayi3){   //EKOK islemini uc sayi ile gerceklestiren fonksiyon burada basliyor.
	    cout << "1.Sayiyi girin : ";
	    cin >> sayi1;
	    cout << "2.Sayiyi girin : ";
	    cin >> sayi2;
	    cout << "3.Sayiyi girin : ";
	    cin >> sayi3;
	    
	 for(int i=1; i<=sayi1*sayi2 || i<=sayi1*sayi3 || i<=sayi2*sayi3 || i<=sayi1*sayi2*sayi3; i++){
	 	if( (i%sayi1==0) && (i%sayi2==0) && (i%sayi3==0) ){
	 		cout << "EKOK: " <<	i << endl;
	 		break;
		 }
	 }   
}

int Ebob(int sayi1, int sayi2){    //EBOB islemini iki sayi ile gerceklestiren fonksiyon burada basliyor.
	int buyukSayi;
		   
	   cout << "1.Sayiyi girin : ";
		   cin >> sayi1;
	   cout << "1.Sayiyi girin : ";
		   cin >> sayi2;
	
	if(sayi1>sayi2) {
		buyukSayi = sayi1;
	} else {
		buyukSayi = sayi2;
	}
	
	for(buyukSayi; buyukSayi>0; buyukSayi--) {
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) ) {
			cout << "EBOB: " << buyukSayi << endl;
			break;
		}
	}
}

int Ebob(int sayi1, int sayi2, int sayi3){    //EBOB islemini uc sayi ile gerceklestiren fonksiyon burada basliyor.
	int buyukSayi;
	
	   cout << "1.Sayiyi girin : ";
	   cin >> sayi1;
	   cout << "2.Sayiyi girin : ";
	   cin >> sayi2;
	   cout << "3.Sayiyi girin : ";
	   cin >> sayi3;
	   
	if(sayi1>sayi2 || sayi1>sayi3){
		buyukSayi = sayi1;
	}   
	else if(sayi2>sayi1 || sayi2>sayi3){
		buyukSayi = sayi2;
	}
	else{
		buyukSayi = sayi3;
	}
	
	for(buyukSayi; buyukSayi>0;buyukSayi--){
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) && (sayi3%buyukSayi==0) ){
			cout << "EBOB: " <<buyukSayi << endl;
			break;
		}
	}
}

int Faktoriyel(int sayi1  = 0){    //Faktoriyel islemini gerceklestiren fonksiyon burada basliyor.

  int faktoriyel = 1 ;

  cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz: ";
  cin >> sayi1;

  for (int i = 2; i <= sayi1; i++){
    faktoriyel *= i;
  }

  cout << sayi1 <<"! : " << faktoriyel << endl;

  return 0;
}

int UsAlma(int sayi1, int sayi2){    //Us alma islemini gerceklestiren fonksiyon burada basliyor.
	int sonuc=1;
	cout << "Hangi sayinin kacinci ussunu almak istiyorsun ? "<<endl;
	cout << "Sayi : ";
	cin >> sayi1;
	cout << "Ussu : ";
	cin >> sayi2;
	
    for(int i=1; i<=sayi2; i++) {
		sonuc *= sayi1;
	}
	
	cout << sayi1 << "^" << sayi2 << " : " << sonuc << endl;
}

};


 class DortIslem{     //Burada DortIslem classýný baþlattým.
    private:        //OzelIslem de oldugu gibi burada da ayni sekilde get ve set fonksiyonlarindan faydalanmak icin sayilari private olarak aldim.
	int sayi1, sayi2, sayi3;
	public:	       //Public kismina da classdaki fonksiyonlari ekledim. Boylece bu fonksiyonlara her yerden erisebilecegim.
	
int getsayi1()
{
    return sayi1;
}
int getsayi2()
{
    return sayi2;
}
int getsayi3()
{
    return sayi3;
}

void setsayi1(int s1)
{
    sayi1 = s1;
}
void setsayi2(int s2)
{
    sayi2 = s2;
}
void setsayi3(int s3)
{
    sayi3 = s3;
}
    
int Topla(int sayi1, int sayi2){  //Toplama islemini iki sayi ile gerceklestiren fonksiyon burada basliyor.
    cout << "1.Sayiyi gir : ";
    cin >> sayi1;
    cout << "2.Sayiyi gir : ";
    cin >> sayi2;
    cout << "Sonuc : " << sayi1 + sayi2 << endl;
}
   
int Topla(int sayi1, int sayi2, int sayi3){   //Toplama islemini uc sayi ile gerceklestiren fonksiyon burada basliyor.
    cout << "1.Sayiyi gir : ";
    cin >> sayi1;
    cout << "2.Sayiyi gir : ";
    cin >> sayi2;
    cout << "3.Sayiyi gir : ";
    cin >> sayi3;
    cout << "Sonuc : " << sayi1 + sayi2 + sayi3 << endl;	
}

int Cikar(int sayi1, int sayi2){   //Cikarma islemini iki sayi  ile gerceklestiren fonksiyon burada basliyor.
    cout << "1.Sayiyi gir : ";
    cin >> sayi1;
    cout << "2.Sayiyi gir : ";
    cin >> sayi2;
    cout << "Sonuc : " << sayi1 - sayi2 << endl;
}

int Cikar(int sayi1, int sayi2, int sayi3){  //Cikarma islemini uc sayi ile gerceklestiren fonksiyon burada basliyor.
	cout << "1.Sayiyi gir : ";
	cin >> sayi1;
	cout << "2.Sayiyi gir : ";
	cin >> sayi2;
	cout << "3.Sayiyi gir : ";
	cin >> sayi3;
	cout << "Sonuc : " << sayi1 - sayi2 - sayi3 << endl;
}

int Carp(int sayi1, int sayi2){   //Carpma islemini iki sayi ile gerceklestiren fonksiyon burada basliyor.
    cout << "1.Sayiyi gir : ";
    cin >> sayi1;
    cout << "2.Sayiyi gir : ";
    cin >> sayi2;
    cout << "Sonuc : " << sayi1 * sayi2 << endl;
}

int Carp(int sayi1, int sayi2, int sayi3){   //Carpma islemini uc sayi ile gerceklestiren fonksiyon burada baslýyor.
	cout << "1.Sayiyi gir : ";
	cin >> sayi1;
	cout << "2.Sayiyi gir : ";
	cin >> sayi2;
	cout << "3.Sayiyi gir : ";
	cin >> sayi3;
	cout << "Sonuc : " << sayi1 * sayi2 * sayi3 << endl;
}

int Bol(int sayi1, int sayi2){  //Son olarakta bolme islemini gerceklestiren fonksiyon burada basliyor.
    cout << "1.Sayiyi gir : ";
    cin >> sayi1;
    cout << "2.Sayiyi gir : ";
    cin >> sayi2;
    cout << "Sonuc : " << sayi1 / sayi2 << endl;
}
	
};

	
class Islemler : public DortIslem,OzelIslem{ //Islemler classýnda bu islemleri bilgisayarýn okumasý veya ekrana yazdirmasi icin gerekli komutlar yer aliyor.
public:  //Main blogunda erismek icin public aldým.
   void menu(){
	
    	while(true)  //Burada while'i ekleme nedenim kullaniciya "devam etmek istiyor musunuz" sorusunu sormakti. Eger kullanici e veya E cevabi verirse kod bu asamaya tekrardan geliyor.
	{
	string secim; //Kullanicinin asagidaki 8 farkli islemden hangisini sectigini bilgisayarin anlamasi icin bilgisayara tanittim.
	char tercih; //Tercihi de yine benzer sekilde ama bu sefer "devam etmek istiyor musunuz" sorusunun cevabýna göre bilgisayara tanittim. Char kullanmamin amaci kullanýcýnýn E/H gibi sozel ifadelerle cevaplamasidir.
 cout<<endl;
 cout<<"**********************************"<<endl;                          
 cout<<"* 1 - EKOK                       *"<<endl;
 cout<<"* 2 - EBOB                       *"<<endl;
 cout<<"* 3 - Faktoriyel Hesabi          *"<<endl;
 cout<<"* 4 - Us Alma                    *"<<endl;
 cout<<"* 5 - Toplama                    *"<<endl;
 cout<<"* 6 - Cikarma                    *"<<endl;
 cout<<"* 7 - Carpma                     *"<<endl;
 cout<<"* 8 - Bolme                      *"<<endl;
 cout<<"**********************************"<<endl<<endl;                     
 cout<<"Lutfen bir secenek secin: ";
 cin>>secim;  //Yukarida tanittigim secim ifadesini kullanýcýnýn burada giriyor.
    if(secim == "1"){	//Eger 1'i secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
       string x;  //Kac sayi ile islem yapilmasini istendiginde kullanicinin atayacagi degerdir.
	   cout << "Kac sayi ile islemi yapmak istiyorsunuz (2/3) ? " ;
       cin >> x;  
       if(x == "2"){  //Eger kullanici iki sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
       	int sayi1,sayi2;
       	
       	OzelIslem o1;  
       	o1.Ekok(sayi1,sayi2);   //Burada OzelIslem classindaki Ekok fonskiyonunu cagiracak gerekli kodlari yazdim ve iki degerli olarak tanittim.
	   }
	   else if(x == "3"){  //Eger kullanici uc sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
	   	int sayi1,sayi2,sayi3;
	   	
	   	OzelIslem o1;
	   	o1.Ekok(sayi1,sayi2,sayi3);  //Burada OzelIslem classindaki Ekok fonksiyonunu cagiracak gerekli kodlari yazdim ve uc degerli olarak tanittim.
	   }   

	   }
	
	else if(secim == "2"){   //Eger 2yi secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
	   string x;   //Kac sayi ile islem yapilmasini istendiginde kullanicinin atayacagi degerdir.
	   cout << "Kac sayi ile islemi yapmak istiyorsunuz (2/3) ? " ;
       cin >> x;
	   if(x == "2"){  //Eger kullanici iki sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
       int sayi1,sayi2;
    	
       OzelIslem o1;
       o1.Ebob(sayi1,sayi2);  //Burada OzelIslem classindaki Ebob fonskiyonunu cagiracak gerekli kodlari yazdim ve iki degerli olarak tanittim.  	
	   }
	   else if(x == "3"){  //Eger kullanici uc sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
	   int sayi1,sayi2,sayi3;
	   
	   OzelIslem o1;
	   o1.Ebob(sayi1,sayi2,sayi3);	 //Burada OzelIslem classindaki Ebob fonksiyonunu cagiracak kodlari yazdim ve uc degerli olarak tanittim.
	   }

	   }
	
	else if(secim == "3"){   //Eger 3'u secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.	
       int sayi1; 	
       
       OzelIslem o1;  
       o1.Faktoriyel(sayi1);  //Burada OzelIslem classindaki Faktoriyel fonksiyonunu cagiracak kodlari yazdim ve tek degerli olarak tanittim. 
	   }
	   
	else if(secim == "4"){    //Eger 4'u secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
       int sayi1,sayi2;
    	
       OzelIslem o1;
       o1.UsAlma(sayi1,sayi2);  //Burada OzelIslem classindaki UsAlma fonksiyonunu cagiracak kodlari yazdim ve iki degerli olarak tanittim. 
	   }  
	
    else if(secim == "5"){     //Eger 5'i secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
       string x;
	   cout << "Kac sayi ile islemi yapmak istiyorsunuz (2/3) ? " ;
       cin >> x;
	   if(x == "2"){  //Eger kullanici iki sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
       int sayi1,sayi2;
    	
       DortIslem d1;  
       d1.Topla(sayi1,sayi2);	 //Burada DortIslem classindaki Topla fonksiyonunu cagiracak kodlari yazdim ve iki degerli olarak tanittim.   	
	   }
	   else if(x == "3"){  //Eger kullanici uc sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
	   	int sayi1,sayi2,sayi3;
	   	
	   	DortIslem d1;
	   	d1.Topla(sayi1,sayi2,sayi3);  //Burada DortIslem classindaki Topla fonksiyonunu cagiracak kodlari yazdim ve uc degerli olarak tanittim.
	   }
	
	   }	
	
	else if(secim == "6"){     //Eger 6yi secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
       string x;
	   cout << "Kac sayi ile islemi yapmak istiyorsunuz (2/3) ? " ;
       cin >> x;
	   if(x == "2"){  //Eger kullanici iki sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
       int sayi1,sayi2;
    	
       DortIslem d1;
       d1.Cikar(sayi1,sayi2);	//Burada DortIslem classindaki Cikar fonksiyonunu cagiracak kodlari yazdim ve iki degerli olarak tanittim.   	
	   }
	   else if(x == "3"){  //Eger kullanici uc sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
	   	int sayi1,sayi2,sayi3;
	   	
	   	DortIslem d1;
	   	d1.Cikar(sayi1,sayi2,sayi3);  //Burada DortIslem classindaki Cikar fonksiyonunu cagiracak kodlari yazdim ve uc degerli olarak tanittim.
	   }   

	   }
	
	else if(secim == "7"){     //Eger 7yi secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
		string x;
		cout <<"Kac sayi ile islem yapmak istiyorsunuz (2/3) ? " ;
		cin >> x;
		if(x == "2"){	//Eger kullanici iki sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
		 int sayi1,sayi2;
		 
		 DortIslem d1;
		 d1.Carp(sayi1,sayi2);  //Burada DortIslem classindaki Carp fonksiyonunu cagiracak kodlari yazdim ve iki degerli olarak tanittim.
		}
		else if(x == "3"){  //Eger kullanici uc sayi ile islem yapmak istiyorsa bilgisayar bu bloga girecektir.
		 int sayi1,sayi2,sayi3;
		 
		 DortIslem d1;
		 d1.Carp(sayi1,sayi2,sayi3);  //Burada DortIslem classindaki Carp fonksiyonunu cagiracak kodlari yazdim ve uc degerli olarak tanittim.
		}

	   }
	
	else if(secim == "8"){       //Eger 8'i secerse bilgisayar bu kod bloguna girecek ve buradaki islemleri gerceklestirecektir.
    	int sayi1, sayi2;
    	
    	DortIslem d1;
    	d1.Bol(sayi1,sayi2);  //Burada DortIslem classindaki Bol fonksiyonunu cagiracak kodlari yazdim ve iki degerli olarak tanittim.
	   }
	   
	

    else {  //Kullanici istenen 8 deger disinda bir ifade girerse bilgisayar bu bloga girecektir ve asagidaki ifadeleri ekrana yazdiracaktir. Break komutu olmadigi icin de asagidaki "Devam etmek istiyor musunuz" ifadesinin oldugu yerden devam edecektir.
    	cout << "Yanlis secim yaptiniz..." << endl;
    	cout << "Lutfen secenekteki numaralardan birini giriniz..." << endl;
	} 
     
          
	cout << "Devam etmek istiyor musunuz (E/H) : ";  //Tum ýslemler bittiginde veya da yanlis bir ifade girildiginde bu yazi ekrana yazdirilir.
	cin >> tercih;  //Kullanicinin girecegi ve yukarida char olarak tanitilan tercih ifadesi burada bilgisayara tanitilir.
	cout << endl;
	      if(tercih == 'E' || tercih == 'e') {  //Eger kullanici e veya E harfi girmisse kod bu bloktan akmaya devam edecektir.
	      	cout<<endl;
	        system("CLS");  //Burada yapilan islemleri ve ekrani temizleyen kod bulunmaktadir.
	        continue;  //Döngü basa döner.
		  }
		  else{  //E, e disinda bir harf veya ifade girildiyse kod buradan akar ve break komutu sayesinde döngüden cikarak islemleri sonlandirir.
		  	break;
		  }
 }
}
};		


int main() {  
	Islemler m1;  
    m1.menu();   //Burada Islemler classindaki menu fonksiyonunu cagirdim.
	
	return 0;
}

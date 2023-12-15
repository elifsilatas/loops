#include <iostream>

using namespace std;

int main()
{
	//WHİLE DÖNGÜSÜ..
	int a;
	a=1;//ilk değer, initialization
	//a, döngü değişkenidir.
	while(a<=10)//koşul, condition
	{
		cout << "merhaba" << a << endl;
		a++;//iteration, adım
	}
	cout << a << endl;
	
	
	
	//FOR DÖNGÜSÜ..
	for(int i=1; i<=10; i++)
	{
		cout << "selam" << i << endl;
	}
	
	
	
	//DO-WHİLE DÖNGÜSÜ..
	int c = 1;
	do
	{
		cout << "hello" << c << endl;
		c++;
	}
	while(c <= 10);
	
	/*
	Bu döngüler arasında temel bir fark vardır.
	For döngüsü yazıldığı zaman atanan değer ilk 
	kontrol edilir ve daha sonra ekrana basılır. 
	Fakat do-while döngülerinde değer ekrana basıldıktan
	sonra kontrol edilir. Yani, for ve while döngülerini
	birbirlerine çevirebilirken for ve do-while döngülerini
	birbirlerine net olarak çeviremezsiniz. Örneğin;
	ilk değeri 100 olarak girseydik for döngüsünü çalıştırmazdık
	fakat do-while döngüsünde ekrana bir kez 'hello' yazardı.
	*/

	return 0;
}
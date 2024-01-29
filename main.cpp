#include<stdio.h>
#include<list>
#include <iostream>

using namespace std;

int main() {

	
	const char* n = "aaaaaaaaaaa";

	list<const char*> jy = {
		"Tokyo","Kanda","Akihabara","Okachimachi",
		"Ueno","Uguisudani","Nippori","Tabata",
		"Komagome","Sugamo","Otsuka","Ikebukuro",
		"Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku",
	    "Shibuya","Ebisu","Meguro","Gotanda",
	    "Osaki","Shinagawa","Tamachi","Hamamatsucho","Yurakucho"};
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			printf("1970年\n");
		}
		else if (i == 1)
		{
			printf("2019年\n");
		}
		else if (i == 2)
		{
			printf("2020年\n");
		}
	for (list<const char*>::iterator itr = jy.begin(); itr != jy.end(); ++itr)

	{
		
		if (*itr == "Tamati"&&i==2)
		{
			
			itr = jy.insert(itr, "Taganawagertoway");
			++itr;
		}
		else if (*itr == "Tabata" && i == 1)
		{

			itr = jy.insert(itr, "NisiNippori");
			++itr;
		}


	}
	
		for (list<const char*>::iterator itr = jy.begin(); itr != jy.end(); ++itr)
		{

			cout << *itr << "\n";

		}
		printf("\n");
	}
	
	


	return 0;
}
#include<stdio.h>
#include<iostream>
#include "Lab1_2.h"

Bankir::eat(int force, int health) {
	Vasya::force += 10;
	Vasya::health += 2;
	
}

Bankir::breath(int health) {
	Vasya::health += 5;
}

Bankir::count(int force) {
	Vasya::force -= 5;
}

Bankir::say(int intelligence) {
	Vasya::intelligence += 1;

Bankir::smoke(int health) {
	Vasya::health -= 20;
}

int main()
{
	Bankir *Vasya = new Bankir();
	int health = 100;
	int force = 150;
	int intelligence 20;
	printf("Vasya's forces before working day ->>>> health : %d, foece: %d, intelligence %d. \n", health, force, intelligence);
	Vasya->eat(force, health);
	Vasya->breath(int health);
	for (int i = 0; i <=2; i++)
	{
	Vasya->smoke(int health);
	}
	Vasya->say(int intelligence);
	for (int i = 0; i <=12; i++)
	{
	  Vasya->count(int force);
	}
	
	printf("Vasya's forces after working day ->>>> health : %d, foece: %d, intelligence %d. \n", health, force, intelligence);
	
	delete Vasya;
	_getch();
return 0;	
}

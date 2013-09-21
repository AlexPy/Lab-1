#include<stdio.h>
#include<iostream>
#include "Lab1_2.h"

Bankir::eat() {
	Vasya::force += 10;
	Vasya::health += 2;
	
}

Bankir::breath() {
	Vasya::health += 5;
}

Bankir::count() {
	Vasya::force -= 5;
}

Bankir::say() {
	Vasya::intelligence += 1;

Bankir::smoke() {
	Vasya::health -= 20;
}

int main()
{
	Bankir *Vasya = new Bankir();
	int health = 100;
	int force = 150;
	int intelligence 20;
	printf("Vasya's forces before working day ->>>> health : %d, foece: %d, intelligence %d. \n", health, force, intelligence);
	Vasya::health = health;
	Vasya::force = force;
	Vasya::intelligence = intelligence;
	Vasya->eat();
	Vasya->breath();
	for (int i = 0; i <=2; i++)
	{
	Vasya->smoke();
	}
	Vasya->say();
	for (int i = 0; i <=12; i++)
	{
	  Vasya->count();
	}
	intelligence = Vasya::intelligence;
	force = Vasya::force;
	health = Vasya::force;
	printf("Vasya's forces after working day ->>>> health : %d, foece: %d, intelligence %d. \n", health, force, intelligence);
	
	delete Vasya;
	_getch();
return 0;	
}


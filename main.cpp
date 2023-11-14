#include<stdio.h>
#include"Dementor.h"
#include"Voldemort.h"
#include"DeathEater.h"
#include"Childminder.h"
#include"EverydayLife.h"
#include"OfficeWorker.h"
#include"GameProgrammer.h"
Dementor* dementor[3];
Voldemort* voldemort;

int main() {
	//DeathEater* death_eaters[4];
	EverydayLife* everyday_lifes[3];

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			everyday_lifes[i] = new Childminder();
		}
		else if (i == 1) {
			everyday_lifes[i] = new OfficeWorker();
		}
		else {
			everyday_lifes[i] = new GameProgrammer();
		}
	}
	
	
	for (int i = 0; i < 3; i++) {
		everyday_lifes[i]->Commute();
	}


	for (int i = 0; i < 3; i++) {
		everyday_lifes[i]->Work();
	}
	

	for (int i = 0; i < 3; i++) {
		everyday_lifes[i]->GoingHome();
	}


	for (int i = 0; i < 3; i++) {
		delete everyday_lifes[i];
	}
	
	
	return 0;
}







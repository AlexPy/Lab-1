#pragma once

class Bankir {
public:
	Bankir() {
		printf("Constructor has been successfully activated!");
	};
	
	~Bankir() {
		printf("Destructor activated! Work is over!");
	}
	
	
	void eat(int force, int health);
	void breath(int health);
	void count(int force);
	void say(int intelligence);
	void smoke(int health);
	
private:
	int force;
	int health;
	int intelligence;
	
};


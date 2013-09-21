#pragma once

class Bankir {
public:
	Bankir() {
		printf("Constructor has been successfully activated!");
	};
	
	~Bankir() {
		printf("Destructor activated! Work is over!");
	}
	
	
	void eat();
	void breath();
	void count();
	void say();
	void smoke();
	
private:
	int force;
	int health;
	int intelligence;
	
};


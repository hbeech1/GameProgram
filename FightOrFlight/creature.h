#ifndef CREATURE_H
#define CREATURE_H
class creature {
	public:
		creature(); // default constructor
		int & getHealth();
		int & getMaxHealth();
		int & getAttack();
		int & getDefense();
		int & getSpeed();

		void setHealth(int);
		void setMaxHealth(int);
		void setAttack(int);
		void setDefense(int);
		void setSpeed(int);
			
	private:
		int health;
		int maxHealth;
		int attack;
		int defense;
		int speed;
};
#endif
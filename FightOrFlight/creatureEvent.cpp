//Henry Beech
//16 August 2019

#include <iostream>
#include <cmath>
#include <ctime>
#include "creature.h"
#include "creatureEvent.h"

bool creaturePriority(creature cre1, creature cre2) {
	int preSpeed1 = cre1.getSpeed();
	int preSpeed2 = cre2.getSpeed();
	int speed1 = speedCheck(preSpeed1);
	int speed2 = speedCheck(preSpeed2);

	if (speed1 > speed2)
		return true;
	if (speed1 < speed2)
		return false;
	else
		creaturePriority(cre1, cre2);
}

void attackCycle(creature cre1, creature cre2) {
	if (creaturePriority(cre1, cre2) == true) {
		attackPhase(cre1, cre2);
		attackPhase(cre2, cre1);
	}
	else {
		attackPhase(cre2, cre1);
		attackPhase(cre1, cre2);
	}
}

void attackPhase(creature attacker, creature defender) {
	int attackerHealth = attacker.getHealth();
	int defenderHealth = defender.getHealth();
	if (attackerHealth > 0 && defenderHealth > 0) {
		int preAttack = attacker.getAttack();
		int preASpeed = attacker.getSpeed();
		int preDefense = defender.getDefense();
		int preDSpeed = defender.getSpeed();

		int attack = attackCheck(preAttack);
		int aSpeed = speedCheck(preASpeed);
		if (critCheck(aSpeed) == true) {
			attack = attack * 1.5 + 1;
		}

		int defense = defenseCheck(preDefense);
		int dSpeed = speedCheck(preDSpeed);
		bool dodge = dodgeCheck(dSpeed);
		if (dodge == false) {
			damageDefender(attack, defender, defense);
		}
	}
}

void damageDefender(int attackPower, creature defender, int defensePower) {
	int damage;
	if (defensePower > attackPower) {
		damage = 1;
	}
	else
		damage = attackPower - defensePower;
	defender.setHealth(defender.getHealth() - damage);
}

int speedCheck(int creSpeed) {
	int speedOutcome = creSpeed + rand()%((5 + creSpeed)/3);
	return speedOutcome;
}

int attackCheck(int creAttack) {
	int attackOutcome = creAttack + rand() % ((4 + creAttack / 2) / 3);
	return attackOutcome;
}

int defenseCheck(int creDefense) {
	int defenseOutcome = creDefense + rand() % (creDefense / 2);
	return defenseOutcome;
}

bool critCheck(int attackSpeed) {
	if (rand() % 200 < attackSpeed)
		return true;
	else
		return false;
}

bool dodgeCheck(int defendSpeed) {
	if (rand() % 300 < defendSpeed)
		return true;
	else
		return false;
}

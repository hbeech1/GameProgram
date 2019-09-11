//Henry Beech
//16 August 2019
#include <iostream>
#include "creature.h"

creature::creature(){
	health = 10;
	maxHealth = 10;
	defense = 1;
	attack = 1;
	speed = 1;
}

int & creature::getHealth() {
	return health;
}

int & creature::getMaxHealth() {
	return maxHealth;
}

int & creature::getAttack() {
	return attack;
}

int & creature::getDefense() {
	return defense;
}

int & creature::getSpeed() {
	return speed;
}

void creature::setHealth(int newHealth) {
	health = newHealth;
}

void creature::setMaxHealth(int newMaxHealth) {
	maxHealth = newMaxHealth;
}

void creature::setAttack(int newAttack) {
	attack = newAttack;
}

void creature::setDefense(int newDefense) {
	defense = newDefense;
}

void creature::setSpeed(int newSpeed) {
	speed = newSpeed;
}


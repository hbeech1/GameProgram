#ifndef CREATUREEVENT_H
#define CREATUREEVENT_H

#include "creature.h"

bool creaturePriority(creature, creature);
void attackCycle(creature, creature);
void attackPhase(creature, creature);
void damageDefender(int, creature, int);
int speedCheck(int);
int attackCheck(int);
int defenseCheck(int);
bool critCheck(int);
bool dodgeCheck(int);

#endif

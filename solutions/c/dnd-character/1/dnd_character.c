#include "dnd_character.h"
#include <stdlib.h>

int ability(void){
    int sum = 0;
    int min = 6;
    for(int i = 0; i < 4; i++){
        int num = rand()%6+1;
        if(min > num)
            min = num;
        sum += num;
    }
    sum -= min;

    return sum;
}
int modifier(int score){
    int hitpoints;
    hitpoints = (score - 10) / 2;
    if((score - 10) % 2 && (score - 10) < 0)
        hitpoints--;
    return hitpoints;
}
dnd_character_t make_dnd_character(void){
    dnd_character_t hero = {0};
    hero.strength = ability();
    hero.dexterity = ability();
    hero.constitution = ability();
    hero.intelligence = ability();
    hero.wisdom = ability();
    hero.charisma = ability();
    hero.hitpoints = 10 + modifier(hero.constitution);
    return hero;
}

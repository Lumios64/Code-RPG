#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int offence, defence, speed, magic, skill, luck, max_health, health, evasion, accuracy, level, req_exp, cur_exp, exp_grant, pow_attack, area_id, area, progression;
	int opp_offence, opp_defence, opp_speed, opp_magic, opp_skill, opp_luck, opp_max_health, opp_health, opp_evasion, opp_accuracy, enemy_id, enemy_rand, opp_pow_attack, boss_id;
	char input, enemy, boss_battle, victory, name[12];
	const char max_evasion = 100;
	const char max_accuracy = 100;
	/*Hero stats*/
	srand(time(NULL));
	offence = rand() / (RAND_MAX / 7) + 3; 
	defence = rand() / (RAND_MAX / 4) + 2;
	speed = rand() / (RAND_MAX / 6) + 1;
	magic = rand() / (RAND_MAX / 3);
	skill = rand() / (RAND_MAX / 5);
	luck = rand() / (RAND_MAX / 3);
	max_health = 10;
	health = max_health;
	accuracy = max_accuracy;
	evasion = max_evasion;
	level = 1;
	req_exp = 20;
	cur_exp = 0;
	/*Hero stats*/
	printf("~~ wєlcσmє tσ ₵ØĐɆ Ɽ₱₲ ~~\n");
	printf("Press enter to continue...\n");
	scanf ("%c", &input);
	printf("What's your name?\n");
	scanf ("%s", &name[0]);
	//Dolkan
	printf("Your name is %s, you are a great knight wandering in the forest looking for the holy book...\n", name);
	scanf ("%c", &input);
	printf("However, it ain't gonna be easy since the forest is full of monsters...\n");
	scanf ("%c", &input);
	printf("The book is hidden inside of a tower in the middle of the woods, good luck!\n");
	scanf ("%c", &input);
	area_id = 1;
	boss_battle = 0;
	victory = 0;
	/*Areas*/
	if (area_id == 1) {
	}
	/*Enemies*/
	srand(time(NULL));
	enemy_rand = rand() / (RAND_MAX / 100);
	if (enemy_rand == 0) {
		opp_offence = 666;
		opp_defence = 444;
		opp_speed = 0;
		opp_magic = 0;
		opp_skill = 640;
		opp_luck = 80;
		opp_max_health = 2000;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Reaper";
		enemy_id = 0;
		/*He is "that one" character. You know him under many names on other games, he is known to wreck you in no time. Better to run away.*/
	} else if (area_id == 1 && 80 > enemy_rand && enemy_rand > 0) {
		opp_offence = rand() / (RAND_MAX / 1) + 4; 
		opp_defence = rand() / (RAND_MAX / 1) + 4;
		opp_speed = 3;
		opp_magic = 2;
		opp_skill = 0;
		opp_luck = 5;
		opp_max_health = rand() / (RAND_MAX / 5) + 10;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Slime";
		enemy_id = 1;
	} else if (area_id == 1 && 100 >= enemy_rand && enemy_rand >= 80) {
		opp_offence = rand() / (RAND_MAX / 1) + 5; 
		opp_defence = 3;
		opp_speed = rand() / (RAND_MAX / 3) + 7;
		opp_magic = 2;
		opp_skill = 7;
		opp_luck = 2;
		opp_max_health = 11;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Spinky";
		enemy_id = 2;
	} else if (area_id == 2 && 0 < enemy_rand && enemy_rand < 40) {
		opp_offence = rand() / (RAND_MAX / 3) + 6; 
		opp_defence = rand() / (RAND_MAX / 4) + 5;
		opp_speed = 3;
		opp_magic = 3;
		opp_skill = 0;
		opp_luck = 6;
		opp_max_health = rand() / (RAND_MAX / 15) + 25;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Slime";
		enemy_id = 1;
	} else if (area_id == 2 && 39 < enemy_rand && enemy_rand < 70) {
		opp_offence = 14;
		opp_defence = 8;
		opp_speed = 16;
		opp_magic = 0;
		opp_skill = 20;
		opp_luck = 12;
		opp_max_health = 20;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Thief";
		enemy_id = 3;
	} else if (area_id == 2 && 70 <= enemy_rand && enemy_rand <= 100) {
		opp_offence = 10;
		opp_defence = 18;
		opp_speed = 9;
		opp_magic = 11;
		opp_skill = 10;
		opp_luck = 15;
		opp_max_health = 30;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Troll";
		enemy_id = 4;
	} else if (area_id == 3 && 0 < enemy_rand && enemy_rand < 30) {
		opp_offence = rand() / (RAND_MAX / 8) + 13;
		opp_defence = 5;
		opp_speed = 8;
		opp_magic = rand() / (RAND_MAX / 9) + 3;
		opp_skill = 0;
		opp_luck = 16;
		opp_max_health = rand() / (RAND_MAX / 6) + 33;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy + 20;
		opp_evasion = max_evasion + 40;
		enemy = "Awful bat";
		enemy_id = 5;
		/*Enemy needs an ability to increase its evasion*/
	} else if (area_id == 3 && 29 < enemy_rand && enemy_rand < 50) {
		opp_offence = rand() / (RAND_MAX / 6) + 16;
		opp_defence = 9;
		opp_speed = rand() / (RAND_MAX / 7) + 18;
		opp_magic = 0;
		opp_skill = rand() / (RAND_MAX / 8) + 23;
		opp_luck = rand() / (RAND_MAX / 2) + 13;
		opp_max_health = 30;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Thief";
		enemy_id = 3;
	} else if (area_id == 3 && 49 < enemy_rand && enemy_rand < 70) {
		opp_offence = rand() / (RAND_MAX / 4) + 13;
		opp_defence = rand() / (RAND_MAX / 6) + 21;
		opp_speed = rand() / (RAND_MAX / 1) + 10;
		opp_magic = 12;
		opp_skill = 11;
		opp_luck = 16;
		opp_max_health = rand() / (RAND_MAX / 10) + 45;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Troll";
		enemy_id = 4;
	} else if (boss_battle == 1 && boss_id == 1) {
		opp_offence = 18;
		opp_defence = 18;
		opp_speed = 16;
		opp_magic = 14;
		opp_skill = 15;
		opp_luck = 15;
		opp_max_health = 300;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Cave's Cyclop";
		boss_id = 1;
	} else if (area_id >= 4 && enemy_rand == 100) {
		opp_offence = defence - (speed / 2);
		opp_defence = offence / 1.5;
		opp_speed = 20;
		opp_magic = defence - (speed / 2);
		opp_skill = 30;
		opp_luck = 999;
		opp_max_health = rand() / (RAND_MAX / 100) + 50;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Meinkraft Crapper";
		enemy_id = 42069;
		/*Trololol character, deals an interesting amount of damages, enemy dies after using its attack.*/
	} else if (area_id = 4 && 0 < enemy_rand && enemy_rand < 50) {
		opp_offence = 9;
		opp_defence = 30;
		opp_speed = 18;
		opp_magic = 30;
		opp_skill = rand() / (RAND_MAX / 3) + 35;
		opp_luck = rand() / (RAND_MAX / 2) + 7;
		opp_max_health = 30;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Witch";
		enemy_id = 6;
	} else if (area_id = 4 && 49 < enemy_rand && enemy_rand < 100) {
		opp_offence = 1;
		opp_defence = rand() / (RAND_MAX / 2) + 22;
		opp_speed = rand() / (RAND_MAX / 2) + 19;
		opp_magic = rand() / (RAND_MAX / 3) + 25;
		opp_skill = 1;
		opp_luck = 40;
		opp_max_health = rand() / (RAND_MAX / 10) + 40;
		opp_health = opp_max_health;
		opp_accuracy = max_accuracy;
		opp_evasion = max_evasion;
		enemy = "Forest's spirit";
		enemy_id = 7;
	}
		
		
		/*After battle exp + level up engine*/
		if (victory == 1) {
			exp_grant = (opp_offence / 2) + (opp_defence / 2) + (opp_speed / 2) + (opp_magic / 2) + (opp_skill / 2) + (opp_luck / 2);
			printf("You received %d experience points...\n", exp_grant);
			scanf("%c", &input);
			cur_exp = cur_exp + exp_grant;
			progression = progression + 1;
			while(cur_exp >= req_exp) {
				cur_exp = cur_exp - req_exp;
				req_exp = req_exp * 1.5;
				level++;
				printf("You leveled up to level %d\n", level);
				scanf("%c", &input);
				offence += 1 + rand() / (RAND_MAX / (level / 2));
				printf("You now have %d of offence\n", offence);
				scanf("%c", &input);
				defence += 1 + rand() / (RAND_MAX / (level / 2));
				printf("You now have %d of defence\n", defence);
				scanf("%c", &input);
				speed += 1 + rand() / (RAND_MAX / (level / 2));
				printf("You now have %d of speed\n", speed);
				scanf("%c", &input);
				magic += 1 + rand() / (RAND_MAX / (level / 2));
				printf("You now have %d of magic\n", magic);
				scanf("%c", &input);
				skill += 1 + rand() / (RAND_MAX / (level / 2));
				printf("You now have %d of skill\n", skill);
				scanf("%c", &input);
				luck += 1 + rand() / (RAND_MAX / (level / 2));
				printf("You now have %d of offence\n", luck);
				scanf("%c", &input);
				max_health = max_health + 3 + rand() / (RAND_MAX / level);
				printf("You can now have a total of %d maximum health\n", max_health);
				scanf("%c", &input);
			}
		/*After battle exp + level up engine*/
		
		/*return int miss(evasion, )*/
		/*limit.h*/
	
	return 0;
}

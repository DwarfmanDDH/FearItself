#include "stdafx.h"
#include <charater>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

//Combat Basics
//Choose Team
cout << "what team do you want to be" << endl;
cout << "Worthy or Mighty" << endl;
bool team;
if (cin >> "Worthy"){
	team = false;
	goto W;
} 
else if (cin >> "Mighty"){
	team = true;
	goto M;
}
//Choose Charaters
W: //Play as Worthy
cout << "Who Would You like To Use" << endl;
cout << charlistW() << endl;
str champion = cin ">";
cout << "Who Would You like to fight" << endl;
cout << charlistM() << endl;
str fighter = cin >> ">";
goto CharrecallW;

M: //Play as Mighty
cout << "Who Would You like To Use" << endl;
cout << charlistM() << endl;
str champion = cin ">";
cout << "Who Would You like to fight" << endl;
cout << charlistW() << endl;
str fighter = cin >> ">";
goto CharrecallM;

//Recall Charaters
CharrecallW: //Recall if Playing Worthy
if (champion = "Juggernaut"){
	champion = Juggernaut;
	}
else if (champion = "Hulk"){
	champion = Hulk;
}
else if (champion = "Thing"){
	champion = Thing;
}
else if (champion = "Attuma"){
	champion = Attuma;
}
else if (champion = "Grey Gargoyle"){
	champion = GGargoyle;
}
else if (champion = "Titania"){
	champion = Titania;
}
else if (champion = "Absorbingman"){
	champion = Absorbingman;
}
else if (champion = "Sin"){
	champion = Sin;
}
else if (champion = "Serpent"){
	champion = Serpent;
}
else {
	goto W;
}

CharrecallM: //Recall if Playing Mighty
if (champion = "Wolverine"){
	champion = Wolverine;
	}
else if (champion = "Ms. Marvel"){
	champion = MsMarvel;
}
else if (champion = "Iron Man"){
	champion = IronMan;
}
else if (champion = "Iron Fist"){
	champion = IronFist;
}
else if (champion = "Hawkeye"){
	champion = Hawkeye;
}
else if (champion = "Red She Hulk"){
	champion = RedSheHulk;
}
else if (champion = "Black Widow"){
	champion = BlackWidow;
}
else if (champion = "Dr.Strange"){
	champion = DrStange;
}
else if (champion = "Spider-Man"){
	champion = SpiderMan;
}
else if (champion = "Captian America"){
	champion = GoodOleCap;
}
else if (champion = "The Mighty Thor"){
	champion = GodofThunder;
}
else{ 
	goto M;
	cout <<  "Sorry input invaild"
}
//Champion Bio and attacks
cout << "Champion Name: " << champion.name << endl;
cout << "Champion Weapon: " << champion.weapon << endl;
cout << "champion's Real Name: " << champion.realname << endl;
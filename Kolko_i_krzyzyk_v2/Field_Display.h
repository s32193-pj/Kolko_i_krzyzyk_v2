#pragma once
#include <iostream>
using namespace std;
#include <stdlib.h>

void display_field(char playing_field[9]) {

	system("CLS");
	
	for (int i = 0; i < 3; i++)
	{
		if(i == 1 || i == 2)
		{
			cout << endl << "-----" << endl;
		}
		if (i==0)
		{
		cout << playing_field[0] << "|" << playing_field[1] << "|" << playing_field[2];
		}
		else if (i == 1)
		{
			cout << playing_field[3] << "|" << playing_field[4] << "|" << playing_field[5];
		}
		else if (i == 2)
		{
			cout << playing_field[6] << "|" << playing_field[7] << "|" << playing_field[8];
		}


	}

}

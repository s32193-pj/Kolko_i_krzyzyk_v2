#pragma once
#include <iostream>
using namespace std;

void choose_field(int player_index, char playing_field[9], int player_symbol, int player[2])
{
	bool field_ok = false;
	int chosen_field;
	

	while (field_ok == false) {
		cout << endl << "Ruch gracza " << player[player_index] << " : ";
		cin >> chosen_field;
		if (playing_field[chosen_field] == 79 || playing_field[chosen_field] == 88)
		{
			cout << endl << "Pole niedostepne." << endl;
		}
		else
		{
			field_ok = true;
		}
	}

	playing_field[chosen_field - 1] = player_symbol;

}

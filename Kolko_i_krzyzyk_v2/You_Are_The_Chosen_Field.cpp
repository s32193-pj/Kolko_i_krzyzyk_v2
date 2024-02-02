#include <iostream>
using namespace std;

int choose_field(int player_index, char playing_field[9], int player_symbol)
{
	bool field_ok = false;
	int chosen_field = 0;


	while (field_ok == false) {
		cout << endl << "Ruch gracza " << player_index << " : ";
		cin >> chosen_field;
		if (playing_field[chosen_field - 1] == 79 || playing_field[chosen_field - 1] == 88)
		{
			cout << endl << "Pole niedostepne." << endl;
		}
		else
		{
			field_ok = true;
		}
	}

	playing_field[chosen_field - 1] = player_symbol;
	return chosen_field;
}

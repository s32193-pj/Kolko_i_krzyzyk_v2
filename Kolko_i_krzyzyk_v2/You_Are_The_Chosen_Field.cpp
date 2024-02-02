#include <iostream>
using namespace std;

int choose_field(int player_index, char playing_field[9], int player_symbol)
{
	bool field_ok = false;
	int chosen_field = 0;


	while (field_ok == false) {
	
		cout << endl << "Ruch gracza " << player_index << " : ";
		cin >> chosen_field;

		if (cin.fail()) {
			cin.clear();
			cin.ignore();
		}

		if (playing_field[chosen_field - 1] == 79 || playing_field[chosen_field - 1] == 88 || chosen_field > 9 || chosen_field < 1)
		{
			cout << endl << "Ruch niezgodny z zasadami. Wybierz pole ponownie." << endl;
		}
		else
		{
			field_ok = true;
		}
	}

	playing_field[chosen_field - 1] = player_symbol;
	return chosen_field;
}

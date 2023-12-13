#include <iostream>
#include "Field_Display.h"
#include "Game_Resolver.h"
#include "You_Are_The_Chosen_Field.h"
using namespace std;


int main()
{
	char playing_field[9] = { 49,50,51,52,53,54,55,56,57};
	int player[2] = { 1,2 };
	int turn = 1;
	bool continue_loop = true;
	display_field(playing_field);
	
	

	while (continue_loop) {
		
	
		int player_index;
		int player_symbol;
		
		if (turn%2 == 0)
		{
			player_index = 1;
			player_symbol = 79;
		}
		else
		{
			player_index = 0;
			player_symbol = 88;
		}
		int game_ended = is_game_resolved(turn,playing_field,player_symbol);
		
		switch (game_ended)
		{
		case 0:
			cout << endl << "Gracz O wygral." << endl;
			continue_loop = false;
			break;
		case 1:
			cout << endl << "Gracz X wygral." << endl;
			continue_loop = false;
			break;
		case 2:
			cout << endl << "AD MORTEM INIMICUS." << endl;
			continue_loop = false;
			break;
		}

		choose_field(player_index, playing_field, player_symbol, player);
			
		
		
		display_field(playing_field);

		turn++;
	}
	



}
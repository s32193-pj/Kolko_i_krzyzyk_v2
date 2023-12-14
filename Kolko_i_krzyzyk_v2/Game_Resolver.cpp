#include <iostream>
using namespace std;

int which_player(int player_symbol)
{
	if (player_symbol == 88)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int is_game_resolved(int turn, char playing_field[9], int player_symbol)
{

	if (turn > 9)
	{
		return 2;
	}
	if (playing_field[0] == playing_field[1] && playing_field[0] == playing_field[2])
	{
		which_player(player_symbol);

	}
	else if (playing_field[0] == playing_field[4] && playing_field[0] == playing_field[8])
	{
		which_player(player_symbol);
	}
	else if (playing_field[0] == playing_field[3] && playing_field[0] == playing_field[6])
	{
		which_player(player_symbol);
	}
	else if (playing_field[1] == playing_field[4] && playing_field[1] == playing_field[7])
	{
		which_player(player_symbol);
	}
	else if (playing_field[2] == playing_field[5] && playing_field[2] == playing_field[8])
	{
		which_player(player_symbol);
	}
	else if (playing_field[3] == playing_field[4] && playing_field[3] == playing_field[5])
	{
		which_player(player_symbol);
	}
	else if (playing_field[6] == playing_field[7] && playing_field[6] == playing_field[8])
	{
		which_player(player_symbol);
	}
	else if (playing_field[6] == playing_field[4] && playing_field[6] == playing_field[2])
	{
		which_player(player_symbol);
	}



}

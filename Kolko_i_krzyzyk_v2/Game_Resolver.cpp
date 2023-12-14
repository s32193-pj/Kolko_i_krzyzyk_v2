#include <iostream>
using namespace std;



int is_game_resolved(int turn, char playing_field[9], int player_symbol)
{

	if (turn > 9)
	{
		return 2;
	}
	if (playing_field[0] == playing_field[1] && playing_field[0] == playing_field[2])
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
	else if (playing_field[0] == playing_field[4] && playing_field[0] == playing_field[8])
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
	else if (playing_field[0] == playing_field[3] && playing_field[0] == playing_field[6])
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
	else if (playing_field[1] == playing_field[4] && playing_field[1] == playing_field[7])
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
	else if (playing_field[2] == playing_field[5] && playing_field[2] == playing_field[8])
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
	else if (playing_field[3] == playing_field[4] && playing_field[3] == playing_field[5])
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
	else if (playing_field[6] == playing_field[7] && playing_field[6] == playing_field[8])
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
	else if (playing_field[6] == playing_field[4] && playing_field[6] == playing_field[2])
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



}

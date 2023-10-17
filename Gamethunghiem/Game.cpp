#include "Game.h"
#define is_down(b) input->buttons[b].is_down
#define pressed(b) (input->buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input->buttons[b].is_down && input->buttons[b].changed)
float player_pos_x = 0.f;
float player_pos_y = 0.f;
void simulate_game(Input* input)
{
	//clear_screen(0x98D0B9);
	if (pressed(BUTTON_UP))
		player_pos_y += 8.f;
	if (pressed(BUTTON_DOWN))
		player_pos_y-= 8.f;
	if (pressed(BUTTON_LEFT))
		player_pos_x -= 8.f;
	if (pressed(BUTTON_RIGHT))
		player_pos_x += 8.f;
	draw_rect(player_pos_x, player_pos_y,10, 10, 0x329ea8);


}
void draw_dog(int x, int y)
{
	//1st layer // x = x, y = y
	draw_rect(x, y, x + 10, y + 10, 0x000000);
	draw_rect(x + 20, y, x + 30, y + 10, 0x000000);

	//2nd layer		
	draw_rect(x - 10, y - 10, x, y, 0x000000);
	draw_rect(x, y - 10, x + 10, y, 0xdcd9d9);
	draw_rect(x + 10, y - 10, x + 20, y, 0x000000);
	draw_rect(x + 20, y - 10, x + 30, y, 0xdcd9d9);
	draw_rect(x + 30, y - 10, x + 40, y, 0x000000);

	//3rd layer
	draw_rect(x - 10, y - 20, x, y - 10, 0x000000);
	draw_rect(x, y - 20, x + 10, y - 10, 0xdcd9d9);
	draw_rect(x + 10, y - 20, x + 20, y - 10, 0xffffff);
	draw_rect(x + 20, y - 20, x + 30, y - 10, 0xffffff);
	draw_rect(x + 30, y - 20, x + 40, y - 10, 0x000000);

	//4th layer
	draw_rect(x - 30, y - 30, x - 20, y - 20, 0x000000);
	draw_rect(x - 20, y - 30, x - 10, y - 20, 0x000000);
	draw_rect(x - 10, y - 30, x, y - 20, 0x000000);
	draw_rect(x, y - 30, x + 10, y - 20, 0xdcd9d9);
	draw_rect(x + 10, y - 30, x + 20, y - 20, 0xffffff);
	draw_rect(x + 20, y - 30, x + 30, y - 20, 0xaaaaaa);
	draw_rect(x + 30, y - 30, x + 40, y - 20, 0xffffff);
	draw_rect(x + 40, y - 30, x + 50, y - 20, 0x000000);



	//5th layer
	draw_rect(x - 30, y - 40, x - 20, y - 30, 0x000000);
	draw_rect(x - 20, y - 40, x - 10, y - 30, 0xdcd9d9);
	draw_rect(x - 10, y - 40, x, y - 30, 0x000000);
	draw_rect(x, y - 40, x + 10, y - 30, 0xdcd9d9);
	draw_rect(x + 10, y - 40, x + 20, y - 30, 0xffffff);
	draw_rect(x + 20, y - 40, x + 30, y - 30, 0xffffff);
	draw_rect(x + 30, y - 40, x + 40, y - 30, 0xffffff);
	draw_rect(x + 40, y - 40, x + 50, y - 30, 0x000000);
	//6th layer
}
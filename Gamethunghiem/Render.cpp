#include "Render.h"

void render_background()
{
	unsigned int* pixel = (unsigned int*)render_state.memory;//con tro tro toi pixel ma chung ta muon doi mau
	for (int y = 0; y < render_state.height; y++)//change color of our pixel
	{
		for (int x = 0; x < render_state.width; x++)
		{
			*pixel++ = 0x98D0B9;

		}
	}
}
void clear_screen(unsigned int color)
{
	unsigned int* pixel = (unsigned int*)render_state.memory;//con tro tro toi pixel ma chung ta muon doi mau
	//cung giong nhu con tro, luc nay no dang tro toi phan tu dau tien cua mang, va mang nay tu duoi len
	//
	for (int y = 0; y < render_state.height; y++)//change color of our pixel
	{
		for (int x = 0; x < render_state.width; x++)
		{
			*pixel++ = color;
		}
	}
}
void draw_rect(int x0, int y0, int x1, int y1, int color)//khong thay doi do dai khi ham thay doi
//=>do do neu thay doi console qua nho so voi kich thuoc cua do vat thi console se bien mat hoac loi
{
	//cach fix:
	x0 = clamp(0, x0, render_state.width);
	x1 = clamp(0, x1, render_state.width);
	y0 = clamp(0, y0, render_state.height);
	y1 = clamp(0, y1, render_state.height);
	for (int y = y0; y < y1; y++)
	{
		unsigned int* pixel = (unsigned int*)render_state.memory + (x0) +(y)*render_state.width;
		//dua con tro xuong tung dong
		for (int x = x0; x < x1; x++)
		{
			*pixel++ = color;
		}
	}
}
void drawTurtel(int x, int y)
{
	int k = x+5;
	int h = y;
	//1th layer
	x =k;
	draw_rect(x, y, x + 5, y+5, 0x000000);
	draw_rect(x+5, y, x + 10, y+5, 0x000000);
	draw_rect(x+10, y, x + 15, y+5, 0x000000);
	draw_rect(x+15, y, x + 20, y+5, 0x000000);
	draw_rect(x+20, y, x + 25, y+5, 0x000000);
	x += 60;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x000000);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	
	//2 th layer
	x =k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	x += 60;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	//3th layer
	x =k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x1a7d74);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	x += 25;
	for (int h = 1; h <= 7; h++)
	{
		draw_rect(x, y, x + 5*h, y + 5, 0xFFCC33);
		
	}
	x += 35;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x1a7d74);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	//4th layer
	x =k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x1a7d74);
	draw_rect(x + 10, y, x + 15, y + 5, 0x1a7d74);
	draw_rect(x + 15, y, x + 20, y + 5, 0x33CC99);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	draw_rect(x + 25, y, x + 30, y + 5, 0x000000);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	x += 35;
	for (int h = 1; h <= 3; h++)
	{
		draw_rect(x, y, x + 5 * h, y + 5, 0xFFFF33);

	}
	x += 15;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x000000);
	draw_rect(x + 15, y, x + 20, y + 5, 0x1a7d74);
	draw_rect(x + 20, y, x + 25, y + 5, 0x1a7d74);
	draw_rect(x + 25, y, x + 30, y + 5, 0x33CC99);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	//5th layer/////
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x1a7d74);
	draw_rect(x + 10, y, x + 15, y + 5, 0x33CC99);//
	draw_rect(x + 15, y, x + 20, y + 5, 0x33CC99);//
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	draw_rect(x + 25, y, x + 30, y + 5, 0x000000);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	draw_rect(x + 35, y, x + 40, y + 5, 0x000000);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0x000000);
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	draw_rect(x + 65, y, x + 70, y + 5, 0x1a7d74);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x33CC99);
	draw_rect(x + 80, y, x + 85, y + 5, 0x000000);
	//6th layer
	x = k;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x33CC99);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x33CC99);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x000000);
	draw_rect(x + 45, y, x + 50, y + 5, 0x266b57);
	draw_rect(x + 50, y, x + 55, y + 5, 0x1a7d74);
	draw_rect(x + 55, y, x + 60, y + 5, 0x1a7d74);
	draw_rect(x + 60, y, x + 65, y + 5, 0x33CC99);
	draw_rect(x + 65, y, x + 70, y + 5, 0x000000);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x000000);
	//7th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x+15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x1a7d74);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x33CC99);
	draw_rect(x + 45, y, x + 50, y + 5, 0x000000);
	draw_rect(x + 50, y, x + 55, y + 5, 0x266b57);
	draw_rect(x + 55, y, x + 60, y + 5, 0x1a7d74);
	draw_rect(x + 60, y, x + 65, y + 5, 0x1a7d74);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//8th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x1a7d74);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x000000);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x1a7d74);
	draw_rect(x + 60, y, x + 65, y + 5, 0x1a7d74);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//9th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x33CC99);//
	draw_rect(x + 35, y, x + 40, y + 5, 0x000000);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0xFFFF33);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x33CC99);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//10th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);//
	draw_rect(x + 35, y, x + 40, y + 5, 0xFFFF33);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0xFFFF33);
	draw_rect(x + 55, y, x + 60, y + 5, 0xFFFF33);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//11 th layer
	x = k - 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x1a7d74);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);//
	draw_rect(x + 35, y, x + 40, y + 5, 0xFFFF33);
	draw_rect(x + 40, y, x + 45, y + 5, 0xFFFF33);
	draw_rect(x + 45, y, x + 50, y + 5, 0xFFFF33);
	draw_rect(x + 50, y, x + 55, y + 5, 0xFFFF33);
	draw_rect(x + 55, y, x + 60, y + 5, 0xFFFF33);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	draw_rect(x + 65, y, x + 70, y + 5, 0x33CC99);
	draw_rect(x + 70, y, x + 75, y + 5, 0x33CC99);
	draw_rect(x + 75, y, x + 80, y + 5, 0x000000);
	draw_rect(x + 80, y, x + 85, y + 5, 0x996633);
	draw_rect(x + 85, y, x + 90, y + 5, 0x996633);
	draw_rect(x + 90, y, x + 95, y + 5, 0x000000);
	//12th layer
	x = k ;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x1a7d74);
	for (int h = 0; h < 7; h++)
	{
		draw_rect(x + 25+h*5, y, x + 30+h*5, y + 5, 0x000000);
	}
	draw_rect(x + 60, y, x + 65, y + 5, 0x33CC99);
	draw_rect(x + 65, y, x + 70, y + 5, 0x000000);
	draw_rect(x + 70, y, x + 75, y + 5, 0x996633);
	draw_rect(x + 75, y, x + 80, y + 5, 0x996633);
	draw_rect(x + 80, y, x + 85, y + 5, 0x000000);

	draw_rect(x + 90, y, x + 95, y + 5, 0xCC3300);
	//13th layer
	x = k+5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x996633);
	draw_rect(x + 10, y, x + 15, y + 5, 0x996633);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x266b57);
	draw_rect(x + 25, y, x + 30, y + 5, 0x266b57);
	for (int h = 0; h < 4; h++)
	{
		draw_rect(x + 30+h*5, y, x + 35+h*5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x33CC99);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x996633);
	draw_rect(x + 65, y, x + 70, y + 5, 0x996633);
	draw_rect(x + 70, y, x + 75, y + 5, 0x000000);

	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	draw_rect(x + 85, y, x + 90, y + 5, 0xCC3300);

	//14th layer
	x = k + 10;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x000000);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	draw_rect(x + 15, y, x + 20, y + 5, 0x266b57);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 20 + h * 5, y, x + 25 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 45, y, x + 50, y + 5, 0x33CC99);
	draw_rect(x + 50, y, x + 55, y + 5, 0x33CC99);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF3300);
	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	//15th layer
	x = k + 10;
	y += 5;
	for (int h = 0; h < 4; h++)
	{
		draw_rect(x + h * 5, y, x +5+ h * 5, y + 5, 0xCC3300);
	}
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x +20+ h * 5, y, x + 25 + h * 5, y + 5, 0x1a7d74);
	}
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x +45+ h * 5, y, x + 50 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 70 , y, x + 75 , y + 5, 0xFF3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF6666);
	draw_rect(x + 80, y, x + 85, y + 5, 0xFF3300);
	draw_rect(x + 85, y, x + 90, y + 5, 0xCC3300);
	//16th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x+5, y, x + 10, y + 5, 0xFF3300);
	draw_rect(x+10, y, x + 15, y + 5, 0xFF3300);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0xFF3300);
	draw_rect(x + 65, y, x + 70, y + 5, 0xFF3300);
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF6666);
	draw_rect(x + 80, y, x + 85, y + 5, 0xFF3300);
	draw_rect(x + 85, y, x + 90, y + 5, 0xCC3300);
	//17th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x + 5, y, x + 10, y + 5, 0xFF3300);
	draw_rect(x + 10, y, x + 15, y + 5, 0xFF3300);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0x000000);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0x000000);
	draw_rect(x + 60, y, x + 65, y + 5, 0xFF6666);
	draw_rect(x + 65, y, x + 70, y + 5, 0xFF3300);
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xFF3300);
	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	//18th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x + 5, y, x + 10, y + 5, 0xFF3300);
	draw_rect(x + 10, y, x + 15, y + 5, 0xFF6666);
	draw_rect(x + 15, y, x + 20, y + 5, 0x000000);
	draw_rect(x + 20, y, x + 25, y + 5, 0xFFFFFF);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 25 + h * 5, y, x + 30 + h * 5, y + 5, 0xFF6666);
	}
	draw_rect(x + 50, y, x + 55, y + 5, 0x000000);
	draw_rect(x + 55, y, x + 60, y + 5, 0xFFFFFF);
	draw_rect(x + 60, y, x + 65, y + 5, 0xFF6666);
	draw_rect(x + 65, y, x + 70, y + 5, 0xFF6666);
	draw_rect(x + 70, y, x + 75, y + 5, 0xCC3300);
	draw_rect(x + 75, y, x + 80, y + 5, 0xCC3300);
	draw_rect(x + 80, y, x + 85, y + 5, 0xCC3300);
	//19th layer
	x = k + 5;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	for (int h = 0; h < 13; h++)
	{
		draw_rect(x + 5 + h * 5, y, x + 10 + h * 5, y + 5, 0xFF6666);
	}
	draw_rect(x +70, y, x + 75, y + 5, 0xCC3300);
	//20th layer
	x = k + 10;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0xCC3300);
	draw_rect(x+5, y, x + 10, y + 5, 0xCC3300);
	for (int h = 0; h < 9; h++)
	{
		draw_rect(x + 10 + h * 5, y, x + 15 + h * 5, y + 5, 0xFF6666);
	}
	draw_rect(x+55, y, x + 60, y + 5, 0xCC3300);
	draw_rect(x + 60, y, x + 65, y + 5, 0xCC3300);
	//21th layer
	x = k + 10;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x +5 , y, x + 10, y + 5, 0x266b57);
	for (int h = 0; h < 9; h++)
	{
		draw_rect(x + 10 + h * 5, y, x + 15 + h * 5, y + 5, 0xCC3300);
	}
	draw_rect(x + 55, y, x + 60, y + 5, 0x33CC99);
	draw_rect(x + 60, y, x + 65, y + 5, 0x000000);
	//22th layer
	x = k + 15;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	draw_rect(x + 10, y, x + 15, y + 5, 0x266b57);
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + 15 + h * 5, y, x + 20 + h * 5, y + 5, 0x1a7d74);

	}
	draw_rect(x + 40, y, x + 45, y + 5, 0x33CC99);
	draw_rect(x + 45, y, x + 50, y + 5, 0x33CC99);
	draw_rect(x + 50 , y, x + 55, y + 5, 0x000000);
	//23th layer
	x = k + 20;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	draw_rect(x + 5, y, x + 10, y + 5, 0x266b57);
	for (int h = 0; h < 4; h++)
	{
		draw_rect(x + 10 + h * 5, y, x + 15 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 30, y, x + 35, y + 5, 0x33CC99);
	draw_rect(x + 35, y, x + 40, y + 5, 0x33CC99);
	draw_rect(x + 40, y, x + 45, y + 5, 0x000000);
	//24th layer
	x = k + 25;
	y += 5;
	draw_rect(x, y, x + 5, y + 5, 0x000000);
	for (int h = 0; h < 3; h++)
	{
		draw_rect(x + 5 + h * 5, y, x + 10 + h * 5, y + 5, 0x1a7d74);
	}
	draw_rect(x + 20, y, x + 25, y + 5, 0x33CC99);
	draw_rect(x + 25, y, x + 30, y + 5, 0x33CC99);
	draw_rect(x + 30, y, x + 35, y + 5, 0x000000);
	//25th ;ayer
	x = k + 30;
	y += 5;
	for (int h = 0; h < 5; h++)
	{
		draw_rect(x + h * 5, y, x +5+ h * 5, y + 5, 0x000000);
	}
}

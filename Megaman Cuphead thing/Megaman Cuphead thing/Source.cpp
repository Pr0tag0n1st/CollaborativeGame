#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <iostream>
using namespace std;
int main() {
	int screenwidth = 1200;
	int screenheight = 1000;
	int playersize = 40;
	al_init();
	al_init_primitives_addon();
	al_init_image_addon();
	al_init_acodec_addon();
	al_init_ttf_addon();
	al_init_font_addon();
	ALLEGRO_DISPLAY *display = al_create_display(screenwidth, screenheight);
	ALLEGRO_BITMAP *player = al_create_bitmap(playersize, playersize);
	al_set_target_bitmap(player);
	al_clear_to_color(al_map_rgb(100, 100, 255));
	cout << "Is this thing working" << endl;
}
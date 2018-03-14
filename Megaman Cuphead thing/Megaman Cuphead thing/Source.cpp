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
	bool doexit = false;
	int screenwidth = 1200;
	int screenheight = 1000;
	int playersize = 40;
	int player_x = 20;
	int player_y = 20;
	bool keys[6]{ false, false, false, false, false, false };
	al_init();
	al_init_primitives_addon();
	al_init_image_addon();
	al_init_acodec_addon();
	al_init_ttf_addon();
	al_init_font_addon();
	ALLEGRO_DISPLAY *display = al_create_display(screenwidth, screenheight);
	ALLEGRO_BITMAP *player = al_create_bitmap(playersize, playersize);
	ALLEGRO_TIMER*timer = al_create_timer(0.2);
	ALLEGRO_EVENT_QUEUE*event_queue = al_create_event_queue();
	al_install_keyboard();
	al_set_target_bitmap(player);
	al_clear_to_color(al_map_rgb(100, 100, 255));
	al_set_target_bitmap(al_get_backbuffer(display));
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();
	al_start_timer(timer);
	cout << "Is this thing working" << endl;
	while (!doexit) {
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);
		if (ev.type == ALLEGRO_EVENT_TIMER) {
			if (key[0])
		}
	}
}
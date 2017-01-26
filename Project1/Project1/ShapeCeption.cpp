#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
int main() {
	al_init();
		al_init_primitives_addon();
		ALLEGRO_DISPLAY*display = NULL;
		display = al_create_display(840, 640);
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_flip_display();
		al_draw_rectangle(50, 50, 250, 250, ALLEGRO_COLOR(al_map_rgb(200, 50, 50)), 8);
		al_draw_circle(150, 150, 90, ALLEGRO_COLOR(al_map_rgb(50, 50, 200)), 4);
		al_flip_display();
		al_rest(10.0);

		al_destroy_display;
}
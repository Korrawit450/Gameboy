#include <gb/gb.h>
#include <stdio.h>
#include "Loong.c"

void main(){

	UINT8 spriteindex = 0;

	set_sprite_data(0,2, FaceLoong);
	set_sprite_tile(0,0);
	move_sprite(0,88,78);
	SHOW_SPRITES;

	while (1)
	{
		if(spriteindex == 0){
			spriteindex = 1;
		}
		else{
			spriteindex = 0;
		}
		set_sprite_tile(0, spriteindex);
		scroll_sprite(0,10,0);
		delay(1000);
	}
	


}
#include "my_framebuffer.h"

void draw_square(t_framebuffer *framebuffer, sfVector2u position, unsigned int size, sfColor color)
{
    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = 0; j < size; j++)
        {
            put_pixel(framebuffer, position.x + i, position.y + j, color);
        }
    }
}

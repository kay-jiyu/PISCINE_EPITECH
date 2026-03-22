#include "my_framebuffer.h"

void put_pixel(t_framebuffer *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    if (x >= framebuffer->width || y >= framebuffer->height)
        return;

    int pos = (y * framebuffer->width + x) * 4;

    framebuffer->pixels[pos] = color.r;
    framebuffer->pixels[pos + 1] = color.g;
    framebuffer->pixels[pos + 2] = color.b;
    framebuffer->pixels[pos + 3] = color.a;
}

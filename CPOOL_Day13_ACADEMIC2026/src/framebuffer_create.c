#include <stdlib.h>
#include "my_framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *fb = malloc(sizeof(framebuffer_t));

    if (!fb)
        return (NULL);
    fb->width = width;
    fb->height = height;
    fb->pixels = malloc(width * height * 4 * sizeof(sfUint8));
    if (!fb->pixels)
    {
        free(fb);
        return (NULL);
    }
    for (unsigned int i = 0; i < width * height * 4; i++)
        fb->pixels[i] = 0;
    return (fb);
}

#ifndef MY_FRAMEBUFFER_H_
#define MY_FRAMEBUFFER_H_

#include <SFML/Graphics.h>

typedef struct framebuffer
{
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

// Note: Le sujet utilise t_framebuffer dans les prototypes des fonctions
typedef framebuffer_t t_framebuffer;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void put_pixel(t_framebuffer *framebuffer, unsigned int x, unsigned int y, sfColor color);
void draw_square(t_framebuffer *framebuffer, sfVector2u position, unsigned int size, sfColor color);

#endif

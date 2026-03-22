#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_framebuffer.h"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(2, "Usage: ./my_screensaver [image_path]\n", 37);
        return (84);
    }

    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "Day 13", sfClose, NULL);
    framebuffer_t *fb = framebuffer_create(800, 600);
    sfTexture *texture = sfTexture_create(800, 600);
    sfSprite *sprite = sfSprite_create();

    // TASK 04: Ouvre le fichier passé en argument (av[1])
    sfTexture *tex_bmp = sfTexture_createFromFile(av[1], NULL);
    sfSprite *sprite_bmp = sfSprite_create();

    if (!tex_bmp)
    {
        write(2, "Error: Cannot load image file.\n", 31);
    }
    else
    {
        sfSprite_setTexture(sprite_bmp, tex_bmp, sfTrue);
    }

    while (sfRenderWindow_isOpen(window))
    {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);

        sfTexture_updateFromPixels(texture, fb->pixels, 800, 600, 0, 0);
        sfSprite_setTexture(sprite, texture, sfTrue);

        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        if (tex_bmp)
            sfRenderWindow_drawSprite(window, sprite_bmp, NULL);
        sfRenderWindow_display(window);
    }

    // Nettoyage (Clean)
    if (tex_bmp)
    {
        sfSprite_destroy(sprite_bmp);
        sfTexture_destroy(tex_bmp);
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    free(fb->pixels);
    free(fb);
    return (0);
}

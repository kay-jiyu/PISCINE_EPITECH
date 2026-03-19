int swap_endian_color(int color)
{
    int res = 0;

    res |= (color & 0x000000FF) << 24;
    res |= (color & 0x0000FF00) << 8;
    res |= (color & 0x00FF0000) >> 8;
    res |= (color >> 24) & 0x000000FF;

    return (res);
}

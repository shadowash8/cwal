/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[4]             = COLOR(0x{color0.strip}ff);
static const float bordercolor[4]           = COLOR(0x{color8.strip}ff);
static const float focuscolor[4]            = COLOR(0x{color2.strip}ff);
static const float urgentcolor[4]           = COLOR(0x{color1.strip}ff);

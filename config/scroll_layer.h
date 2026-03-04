// Geeksville add game layer

#ifdef SCROLL
// A nop layer just so wheht SCROLL_CMD is held down we can change the touchpad to instead generate
// scroll events.
#define SCROLL_CMD &mo SCROLL
#else
#define SCROLL_CMD ___
#endif

#ifdef SCROLL
// A nop layer just so wheht SCROLL_CMD is held down we can change the touchpad to instead generate
// scroll events.

ZMK_BASE_LAYER(Scrl,
    ___ ___ ___ ___ ___,    ___    ___    ___    ___    ___,
    ___ ___ ___ ___ ___,    ___    ___    ___    ___    ___,
    ___ ___ ___ ___ ___,    ___    ___    ___    ___    ___,
      ___ ___ ___,            ___ ___ ___)
#endif

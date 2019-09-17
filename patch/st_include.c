/* Patches */

#if COPYURL_PATCH || COPYURL_HIGHLIGHT_SELECTED_URLS_PATCH
#include "copyurl.c"
#endif

#if EXTERNALPIPE_PATCH
#include "externalpipe.c"
#endif

#if ISO14755_PATCH
#include "iso14755.c"
#endif

#if KEYBOARDSELECT_PATCH
#include "keyboardselect.c"
#endif

#if RIGHTCLICKTOPLUMB_PATCH
#include "rightclicktoplumb_st.c"
#endif

#if NEWTERM_PATCH
#include "newterm.c"
#endif

#if SCROLLBACK_PATCH || SCROLLBACK_MOUSE_PATCH || SCROLLBACK_MOUSE_ALTSCREEN_PATCH
#include "scrollback.c"
#endif
#ifndef __HULIB__
#define __HULIB__

// background and foreground screen numbers

#define BG 1
#define FG 0

// font stuff

#define HU_CHARERASE KEY_BACKSPACE

#define HU_MAXLINES 4
#define HU_MAXLINELENGTH 80

/*
 *                   Typedefs of widgets
 */

// Text Line widget (parent of Scrolling Text and Input Text widgets)

typedef struct
{
  int x, y;   // left-justified position of scrolling text window
  patch_t **f;// font
  int sc;     // start character
  char l[HU_MAXLINELENGTH+1]; // line of text
  int len;		      // current line length
  int needsupdate;	      // whether this line needs to be udpated
} hu_textline_t;

// Scrolling Text window widget (child of Text Line widget)

typedef struct
{
  hu_textline_t l[HU_MAXLINES]; // text lines to draw
  int h;     // height in lines
  int cl;     // current line number
  boolean *on;// pointer to boolean stating whether to update window
  boolean laston; // last value of *->on.
} hu_stext_t;

// Input Text Line widget (child of Text Line widget)

typedef struct
{
  hu_textline_t l; // text line to input on
  int lm;     // left margin past which I am not to delete characters
  boolean *on;// pointer to boolean stating whether to update window
  boolean laston; // last value of *->on;
} hu_itext_t;

/*
 *                   Widget creation, access, and update routines
 */

// initializes heads-up widget library
void HUlib_init(void);

// textline code

void HUlib_clearTextLine(hu_textline_t *t); // clear a line of text
void HUlib_initTextLine(hu_textline_t *t, int x, int y, patch_t **f, int sc);
boolean HUlib_addCharToTextLine(hu_textline_t *t, char ch); // returns success
boolean HUlib_delCharFromTextLine(hu_textline_t *t); // returns success
void HUlib_drawTextLine(hu_textline_t *l, boolean drawcursor); // draws tline
void HUlib_eraseTextLine(hu_textline_t *l); // erases text line

// Scrolling Text window widget routines

void HUlib_initSText(hu_stext_t *s, int x, int y, int h, patch_t **font,
  int startchar, boolean *on);
void HUlib_addLineToSText(hu_stext_t *s); // add a new line
void HUlib_addMessageToSText(hu_stext_t *s, char *prefix, char *msg);
void HUlib_drawSText(hu_stext_t *s); // draws stext
void HUlib_eraseSText(hu_stext_t *s); // erases all stext lines

// Input Text Line widget routines

void HUlib_initIText(hu_itext_t *it, int x, int y, patch_t **font,
  int startchar, boolean *on);
void HUlib_delCharFromIText(hu_itext_t *it); // enforces left margin
void HUlib_eraseLineFromIText(hu_itext_t *it); // enforces left margin
void HUlib_resetIText(hu_itext_t *it); // resets line and left margin
void HUlib_addPrefixToIText(hu_itext_t *it, char *str); // left of left-margin
boolean HUlib_keyInIText(hu_itext_t *it, unsigned char ch); // whether eaten
void HUlib_drawIText(hu_itext_t *it);
void HUlib_eraseIText(hu_itext_t *it); // erases all itext lines

#endif

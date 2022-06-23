#ifndef _ILI9341_t3_font_OpenSans_
#define _ILI9341_t3_font_OpenSans_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488_t3.h>)
	#include "ILI9488_t3.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341_t3.h>)
	#include "ILI9341_t3.h"
#elif __has_include(<ST7735_t3.h>)
	#include "ST7735_t3.h"
#elif __has_include(<HX8357_t3n.h>)
	#include "HX8357_t3n.h"
#elif __has_include(<GC9A01A_t3n.h>)
	#include "GC9A01A_t3n.h"
#else
	#include "def_ili9341_fonts.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * IMPORTANT
 * These are BDF2.3 fonts which have anti-aliasing. You must use one of the ILI9341
 * libraries that support anti-aliased fonts, or the characters will look very strange!
 */
extern const ILI9341_t3_font_t OpenSans8;
extern const ILI9341_t3_font_t OpenSans9;
extern const ILI9341_t3_font_t OpenSans10;
extern const ILI9341_t3_font_t OpenSans11;
extern const ILI9341_t3_font_t OpenSans12;
extern const ILI9341_t3_font_t OpenSans13;
extern const ILI9341_t3_font_t OpenSans14;
extern const ILI9341_t3_font_t OpenSans16;
extern const ILI9341_t3_font_t OpenSans18;
extern const ILI9341_t3_font_t OpenSans20;
extern const ILI9341_t3_font_t OpenSans24;
extern const ILI9341_t3_font_t OpenSans28;
extern const ILI9341_t3_font_t OpenSans32;
extern const ILI9341_t3_font_t OpenSans40;
extern const ILI9341_t3_font_t OpenSans48;
extern const ILI9341_t3_font_t OpenSans60;
extern const ILI9341_t3_font_t OpenSans72;

#ifdef __cplusplus
} // extern "C"
#endif

#endif

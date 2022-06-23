#ifndef _ILI9341_t3_font_TimesNewRomanItalic_
#define _ILI9341_t3_font_TimesNewRomanItalic_

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

extern const ILI9341_t3_font_t TimesNewRoman_8_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_9_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_10_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_11_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_12_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_13_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_14_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_16_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_18_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_20_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_24_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_28_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_32_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_40_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_48_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_60_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_72_Italic;
extern const ILI9341_t3_font_t TimesNewRoman_96_Italic;

#ifdef __cplusplus
} // extern "C"
#endif

#endif

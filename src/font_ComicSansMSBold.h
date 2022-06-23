#ifndef _ILI9341_t3_font_ComicSansMSBold_
#define _ILI9341_t3_font_ComicSansMSBold_

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

extern const ILI9341_t3_font_t ComicSansMS_8_Bold;
extern const ILI9341_t3_font_t ComicSansMS_9_Bold;
extern const ILI9341_t3_font_t ComicSansMS_10_Bold;
extern const ILI9341_t3_font_t ComicSansMS_11_Bold;
extern const ILI9341_t3_font_t ComicSansMS_12_Bold;
extern const ILI9341_t3_font_t ComicSansMS_13_Bold;
extern const ILI9341_t3_font_t ComicSansMS_14_Bold;
extern const ILI9341_t3_font_t ComicSansMS_16_Bold;
extern const ILI9341_t3_font_t ComicSansMS_18_Bold;
extern const ILI9341_t3_font_t ComicSansMS_20_Bold;
extern const ILI9341_t3_font_t ComicSansMS_24_Bold;
extern const ILI9341_t3_font_t ComicSansMS_28_Bold;
extern const ILI9341_t3_font_t ComicSansMS_32_Bold;
extern const ILI9341_t3_font_t ComicSansMS_40_Bold;
extern const ILI9341_t3_font_t ComicSansMS_48_Bold;
extern const ILI9341_t3_font_t ComicSansMS_60_Bold;
extern const ILI9341_t3_font_t ComicSansMS_72_Bold;
extern const ILI9341_t3_font_t ComicSansMS_96_Bold;

#ifdef __cplusplus
} // extern "C"
#endif

#endif

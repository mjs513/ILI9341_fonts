#ifndef _ILI9341_t3_font_DroidSerif_BoldItalic_
#define _ILI9341_t3_font_DroidSerif_BoldItalic_

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

extern const ILI9341_t3_font_t DroidSerif_8_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_9_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_10_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_11_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_12_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_13_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_14_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_16_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_18_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_20_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_24_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_28_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_32_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_40_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_48_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_60_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_72_Bold_Italic;
extern const ILI9341_t3_font_t DroidSerif_96_Bold_Italic;

#ifdef __cplusplus
} // extern "C"
#endif

#endif

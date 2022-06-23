#ifndef _ILI9341_t3_font_NunitoLight_
#define _ILI9341_t3_font_NunitoLight_

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

extern const ILI9341_t3_font_t Nunito_8_Light;
extern const ILI9341_t3_font_t Nunito_9_Light;
extern const ILI9341_t3_font_t Nunito_10_Light;
extern const ILI9341_t3_font_t Nunito_11_Light;
extern const ILI9341_t3_font_t Nunito_12_Light;
extern const ILI9341_t3_font_t Nunito_13_Light;
extern const ILI9341_t3_font_t Nunito_14_Light;
extern const ILI9341_t3_font_t Nunito_16_Light;
extern const ILI9341_t3_font_t Nunito_18_Light;
extern const ILI9341_t3_font_t Nunito_20_Light;
extern const ILI9341_t3_font_t Nunito_24_Light;
extern const ILI9341_t3_font_t Nunito_28_Light;
extern const ILI9341_t3_font_t Nunito_32_Light;
extern const ILI9341_t3_font_t Nunito_40_Light;
extern const ILI9341_t3_font_t Nunito_48_Light;
extern const ILI9341_t3_font_t Nunito_60_Light;
extern const ILI9341_t3_font_t Nunito_72_Light;
extern const ILI9341_t3_font_t Nunito_96_Light;

#ifdef __cplusplus
} // extern "C"
#endif

#endif

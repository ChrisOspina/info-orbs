#ifndef ICONS_H
#define ICONS_H

#include <Arduino.h>

// These symbols are generated from the files specified in platformio.ini under 'board_build.embed_files'
// See https://docs.platformio.org/en/latest/platforms/espressif32.html#embedding-binary-data for more info

#pragma region weather
extern const byte moonCloudW_start[] asm("_binary_images_WeatherWidget_light_moonCloudW_jpg_start");
extern const byte moonCloudW_end[] asm("_binary_images_WeatherWidget_light_moonCloudW_jpg_end");
extern const byte sunCloudsW_start[] asm("_binary_images_WeatherWidget_light_sunCloudsW_jpg_start");
extern const byte sunCloudsW_end[] asm("_binary_images_WeatherWidget_light_sunCloudsW_jpg_end");
extern const byte sunW_start[] asm("_binary_images_WeatherWidget_light_sunW_jpg_start");
extern const byte sunW_end[] asm("_binary_images_WeatherWidget_light_sunW_jpg_end");
extern const byte moonW_start[] asm("_binary_images_WeatherWidget_light_moonW_jpg_start");
extern const byte moonW_end[] asm("_binary_images_WeatherWidget_light_moonW_jpg_end");
extern const byte snowW_start[] asm("_binary_images_WeatherWidget_light_snowW_jpg_start");
extern const byte snowW_end[] asm("_binary_images_WeatherWidget_light_snowW_jpg_end");
extern const byte rainW_start[] asm("_binary_images_WeatherWidget_light_rainW_jpg_start");
extern const byte rainW_end[] asm("_binary_images_WeatherWidget_light_rainW_jpg_end");
extern const byte cloudsW_start[] asm("_binary_images_WeatherWidget_light_cloudsW_jpg_start");
extern const byte cloudsW_end[] asm("_binary_images_WeatherWidget_light_cloudsW_jpg_end");
extern const byte moonCloudB_start[] asm("_binary_images_WeatherWidget_dark_moonCloudB_jpg_start");
extern const byte moonCloudB_end[] asm("_binary_images_WeatherWidget_dark_moonCloudB_jpg_end");
extern const byte sunCloudsB_start[] asm("_binary_images_WeatherWidget_dark_sunCloudsB_jpg_start");
extern const byte sunCloudsB_end[] asm("_binary_images_WeatherWidget_dark_sunCloudsB_jpg_end");
extern const byte sunB_start[] asm("_binary_images_WeatherWidget_dark_sunB_jpg_start");
extern const byte sunB_end[] asm("_binary_images_WeatherWidget_dark_sunB_jpg_end");
extern const byte moonB_start[] asm("_binary_images_WeatherWidget_dark_moonB_jpg_start");
extern const byte moonB_end[] asm("_binary_images_WeatherWidget_dark_moonB_jpg_end");
extern const byte snowB_start[] asm("_binary_images_WeatherWidget_dark_snowB_jpg_start");
extern const byte snowB_end[] asm("_binary_images_WeatherWidget_dark_snowB_jpg_end");
extern const byte rainB_start[] asm("_binary_images_WeatherWidget_dark_rainB_jpg_start");
extern const byte rainB_end[] asm("_binary_images_WeatherWidget_dark_rainB_jpg_end");
extern const byte cloudsB_start[] asm("_binary_images_WeatherWidget_dark_cloudsB_jpg_start");
#pragma endregion 


#pragma region family
extern const byte mom_start[] asm("_binary_images_mom_JPG_start");
extern const byte mom_end[] asm("_binary_images_mom_JPG_end");
extern const byte chris_start[] asm("_binary_images_chris_jpg_end");
extern const byte chris_end[] asm("binary_images_chris_jpg_end");
extern const byte lili_start[] asm("binary_images_lili_jpg_start");
extern const byte lili_end[] asm("binary_images_lili_jpg_end");
extern const byte johnny_start[] asm("binary_images_johnny_jpg_start");
extern const byte johnny_end[] asm("binary_images_johnny_jpg_end");
extern const byte mimi_start[] asm("binary_images_mimi_jpg_start");
extern const byte mimi_end[] asm("binary_images_mimi_jpg_end");

#pragma endregion

#pragma region misc
extern const byte cloudsB_end[] asm("_binary_images_WeatherWidget_dark_cloudsB_jpg_end");
extern const byte logo_start[] asm("_binary_images_logo_jpg_start");
extern const byte logo_end[] asm("_binary_images_logo_jpg_end");
extern const byte headshot_start [] asm("_binary_images_headshot_jpg_start");
extern const byte headshot_end [] asm("_binary_images_headshot_jpg_end");
#pragma endregion

#endif

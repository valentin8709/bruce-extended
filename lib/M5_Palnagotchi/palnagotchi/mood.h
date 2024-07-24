#if defined(STICK_C_PLUS2)
    #include "M5StickCPlus2.h"
#elif defined(CARDPUTER)
    #include "M5Cardputer.h"
#endif

#define MOOD_BROKEN 19

void setMood(uint8_t mood, String face = "", String phrase = "",
             bool broken = false);
uint8_t getCurrentMoodId();
String getCurrentMoodFace();
String getCurrentMoodPhrase();
bool isCurrentMoodBroken();

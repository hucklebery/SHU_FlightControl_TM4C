#ifndef MIXERSETTINGS_H
#define MIXERSETTINGS_H
#include "common.h"
#define MIXERSETTINGS_THROTTLECURVE1_NUMELEM 5
#define MIXERSETTINGS_THROTTLECURVE2_NUMELEM 5
#define MIXERSETTINGS_MIXER1VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER2VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER3VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER4VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER5VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER6VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER7VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER8VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER9VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER10VECTOR_NUMELEM 5
#define MIXERSETTINGS_MIXER1VECTOR_THROTTLECURVE1 0
#define MIXERSETTINGS_MIXER1VECTOR_THROTTLECURVE2 1
#define MIXERSETTINGS_MIXER1VECTOR_ROLL 2
#define MIXERSETTINGS_MIXER1VECTOR_PITCH 3
#define MIXERSETTINGS_MIXER1VECTOR_YAW 4

struct MixerSettingsData
{
    float MaxAccel;
    float FeedForward;
    float AccelTime;
    float DecelTime;
    float ThrottleCurve1[MIXERSETTINGS_THROTTLECURVE1_NUMELEM];
    enum Curve2Source
    {
      MIXERSETTINGS_CURVE2SOURCE_THROTTLE,
      MIXERSETTINGS_CURVE2SOURCE_ROLL,
      MIXERSETTINGS_CURVE2SOURCE_PITCH,
      MIXERSETTINGS_CURVE2SOURCE_YAW,
      MIXERSETTINGS_CURVE2SOURCE_COLLECTIVE,
      MIXERSETTINGS_CURVE2SOURCE_ACCESSORY0,
      MIXERSETTINGS_CURVE2SOURCE_ACCESSORY1,
      MIXERSETTINGS_CURVE2SOURCE_ACCESSORY2,
      MIXERSETTINGS_CURVE2SOURCE_ACCESSORY3,
      MIXERSETTINGS_CURVE2SOURCE_ACCESSORY4,
      MIXERSETTINGS_CURVE2SOURCE_ACCESSORY5,
    }Curve2Source;
    float ThrottleCurve2[MIXERSETTINGS_THROTTLECURVE2_NUMELEM];
    enum Mixer1Type
    {
      MIXERSETTINGS_MIXER1TYPE_DISABLED,
      MIXERSETTINGS_MIXER1TYPE_MOTOR,
      MIXERSETTINGS_MIXER1TYPE_SERVO,
      MIXERSETTINGS_MIXER1TYPE_CAMERAROLL,
      MIXERSETTINGS_MIXER1TYPE_CAMERAPITCH,
      MIXERSETTINGS_MIXER1TYPE_CAMERAYAW,
      MIXERSETTINGS_MIXER1TYPE_ACCESSORY0,
      MIXERSETTINGS_MIXER1TYPE_ACCESSORY1,
      MIXERSETTINGS_MIXER1TYPE_ACCESSORY2,
      MIXERSETTINGS_MIXER1TYPE_ACCESSORY3,
      MIXERSETTINGS_MIXER1TYPE_ACCESSORY4,
      MIXERSETTINGS_MIXER1TYPE_ACCESSORY5,
      
    }Mixer1Type;
    int8 Mixer1Vector[MIXERSETTINGS_MIXER1VECTOR_NUMELEM];
    int8 Mixer2Vector[MIXERSETTINGS_MIXER2VECTOR_NUMELEM];
    int8 Mixer3Vector[MIXERSETTINGS_MIXER3VECTOR_NUMELEM];
    int8 Mixer4Vector[MIXERSETTINGS_MIXER4VECTOR_NUMELEM];
    int8 Mixer5Vector[MIXERSETTINGS_MIXER5VECTOR_NUMELEM];
    int8 Mixer6Vector[MIXERSETTINGS_MIXER6VECTOR_NUMELEM];
    int8 Mixer7Vector[MIXERSETTINGS_MIXER7VECTOR_NUMELEM];
    int8 Mixer8Vector[MIXERSETTINGS_MIXER8VECTOR_NUMELEM];
    int8 Mixer9Vector[MIXERSETTINGS_MIXER9VECTOR_NUMELEM];
    int8 Mixer10Vector[MIXERSETTINGS_MIXER10VECTOR_NUMELEM];
};
typedef struct MixerSettingsData MixerSettingsData;
#endif // MIXERSETTINGS_H

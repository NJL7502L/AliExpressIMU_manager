#ifndef AliExpressIMU_manager_h
#define AliExpressIMU_manager_h

#include <Arduino.h>
#include <FlexCAN_T4_manager.h>

class AliExpressIMU_manager {
private:
  FlexCAN_T4_manager* canmanager = FlexCAN_T4_manager::getInstance();
  union FtoC{
    float f;
    uint8_t c[4];
  };
  FtoC rawPitch, rawRoll, rawYaw;
public:
  float pitch,roll,yaw;
  void read();
};

#endif

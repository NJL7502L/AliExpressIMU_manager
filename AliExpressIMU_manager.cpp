#include <AliExpressIMU_manager.h>

void AliExpressIMU_manager::read(){
  uint8_t data[8] = {};
  canmanager->getBus3(0x0A,data);
  rawPitch.c[0] = data[0];
  rawPitch.c[1] = data[1];
  rawPitch.c[2] = data[2];
  rawPitch.c[3] = data[3];
  rawRoll.c[0] = data[4];
  rawRoll.c[1] = data[5];
  rawRoll.c[2] = data[6];
  rawRoll.c[3] = data[7];
  canmanager->getBus3(0x0B,data);
  rawYaw.c[0] = data[0];
  rawYaw.c[1] = data[1];
  rawYaw.c[2] = data[2];
  rawYaw.c[3] = data[3];

  pitch = rawPitch.f;
  roll = rawRoll.f;
  yaw = rawYaw.f;
}

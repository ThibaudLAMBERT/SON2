#include <Audio.h>
#include "White_noise_vocoder.h"

White_noise_vocoder white_noise_vocoder;
AudioInputI2S in;
AudioOutputI2S out;
AudioControlSGTL5000 audioShield;
AudioConnection patchCord0(in,0,white_noise_vocoder,0);
AudioConnection patchCord1(white_noise_vocoder,0,out,0);
AudioConnection patchCord2(white_noise_vocoder,1,out,1);


void setup() {
  Serial.begin(9600);
  AudioMemory(4);
  audioShield.enable();
  audioShield.inputSelect(AUDIO_INPUT_MIC);
  audioShield.micGain(5);
  audioShield.volume(0.5);

}

void loop() {
  int AttackValue = analogRead(A3);
  int ReleaseValue = analogRead(A2);
  int VolumeValue = analogRead(A0);
  float Attack = AttackValue * 0.0967;
  float Release = ReleaseValue * 0.0967;
  float Volume = VolumeValue * 0.00097;
  Serial.println(Attack);
  Serial.println(Release);
  Serial.println(Volume);
  white_noise_vocoder.setParamValue("Attack", Attack);
  white_noise_vocoder.setParamValue("Release", Release);
  audioShield.volume(Volume);
}

/*
 * psola.h
 *
 * Created: 3/13/2018 3:54:09 PM
 *  Author: Daniel Gonzalez
 */ 


#ifndef PSOLA_H_
#define PSOLA_H_

#include "asf.h"
#include "DMA_Audio.h"
#include "arm_math.h"

#define PSOLA_SAMPLE_RATE  46503.0f  //46475.0f //46250.0f //46475.0f // 46503.0f 

#define MINIMUM_PITCH 100.0f
#define NO_SHIFT 1.0f 
#define END_OF_SHIFTS -1.0f
#define MAX_NUM_SHIFTS 11 // always doing root (1.0 shift) 

#define WEIRD_OFFSET 465 //650 //1162 //774 //462 //578 //600 // keep playing with this number. 

void PSOLA_init(void); 
void create_harmonies(float* input, float *output, float inputPitch, float *pitch_shifts_in); 

#endif /* PSOLA_H_ */
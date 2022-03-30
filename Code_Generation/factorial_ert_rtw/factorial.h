/*
 * File: factorial.h
 *
 * Code generated for Simulink model 'factorial'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 17:30:48 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_factorial_h_
#define RTW_HEADER_factorial_h_
#ifndef factorial_COMMON_INCLUDES_
#define factorial_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* factorial_COMMON_INCLUDES_ */

#include "factorial_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
} ExtU_factorial_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Output;                     /* '<Root>/Output' */
} ExtY_factorial_T;

/* Real-time Model Data Structure */
struct tag_RTM_factorial_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_factorial_T factorial_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_factorial_T factorial_Y;

/* Model entry point functions */
extern void factorial_initialize(void);
extern void factorial_step(void);
extern void factorial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_factorial_T *const factorial_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'factorial'
 * '<S1>'   : 'factorial/For Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

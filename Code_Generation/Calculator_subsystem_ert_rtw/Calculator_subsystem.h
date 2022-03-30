/*
 * File: Calculator_subsystem.h
 *
 * Code generated for Simulink model 'Calculator_subsystem'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 17:14:27 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calculator_subsystem_h_
#define RTW_HEADER_Calculator_subsystem_h_
#ifndef Calculator_subsystem_COMMON_INCLUDES_
#define Calculator_subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                               /* Calculator_subsystem_COMMON_INCLUDES_ */

#include "Calculator_subsystem_types.h"

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
  uint8_T Input1;                      /* '<Root>/Input1' */
} ExtU_Calculator_subsystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output;                      /* '<Root>/Output' */
  uint8_T Output1;                     /* '<Root>/Output1' */
  uint16_T Output2;                    /* '<Root>/Output2' */
  uint8_T Output3;                     /* '<Root>/Output3' */
} ExtY_Calculator_subsystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_subsystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Calculator_subsystem_T Calculator_subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calculator_subsystem_T Calculator_subsystem_Y;

/* Model entry point functions */
extern void Calculator_subsystem_initialize(void);
extern void Calculator_subsystem_step(void);
extern void Calculator_subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_subsystem_T *const Calculator_subsystem_M;

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
 * '<Root>' : 'Calculator_subsystem'
 * '<S1>'   : 'Calculator_subsystem/Subsystem'
 */
#endif                                 /* RTW_HEADER_Calculator_subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

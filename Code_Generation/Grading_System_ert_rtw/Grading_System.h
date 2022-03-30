/*
 * File: Grading_System.h
 *
 * Code generated for Simulink model 'Grading_System'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 17:00:19 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Grading_System_h_
#define RTW_HEADER_Grading_System_h_
#include <string.h>
#ifndef Grading_System_COMMON_INCLUDES_
#define Grading_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grading_System_COMMON_INCLUDES_ */

#include "Grading_System_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String_n
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_n[256];
} ConstP_Grading_System_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
} ExtU_Grading_System_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Output[256];                  /* '<Root>/Output' */
} ExtY_Grading_System_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grading_System_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Grading_System_T Grading_System_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Grading_System_T Grading_System_Y;

/* Constant parameters (default storage) */
extern const ConstP_Grading_System_T Grading_System_ConstP;

/* Model entry point functions */
extern void Grading_System_initialize(void);
extern void Grading_System_step(void);
extern void Grading_System_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Grading_System_T *const Grading_System_M;

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
 * '<Root>' : 'Grading_System'
 * '<S1>'   : 'Grading_System/If Action Subsystem'
 * '<S2>'   : 'Grading_System/If Action Subsystem1'
 * '<S3>'   : 'Grading_System/If Action Subsystem2'
 * '<S4>'   : 'Grading_System/If Action Subsystem3'
 * '<S5>'   : 'Grading_System/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_Grading_System_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

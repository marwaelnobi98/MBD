/*
 * File: Task_6_factorialStateFlow.h
 *
 * Code generated for Simulink model 'Task_6_factorialStateFlow'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 15:49:38 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task_6_factorialStateFlow_h_
#define RTW_HEADER_Task_6_factorialStateFlow_h_
#ifndef Task_6_factorialStateFlow_COMMON_INCLUDES_
#define Task_6_factorialStateFlow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                          /* Task_6_factorialStateFlow_COMMON_INCLUDES_ */

#include "Task_6_factorialStateFlow_types.h"

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
} ExtU_Task_6_factorialStateFlo_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Output;                     /* '<Root>/Output' */
} ExtY_Task_6_factorialStateFlo_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_6_factorialState_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_6_factorialStateFlo_T Task_6_factorialStateFlow_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task_6_factorialStateFlo_T Task_6_factorialStateFlow_Y;

/* Model entry point functions */
extern void Task_6_factorialStateFlow_initialize(void);
extern void Task_6_factorialStateFlow_step(void);
extern void Task_6_factorialStateFlow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_6_factorialStat_T *const Task_6_factorialStateFlow_M;

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
 * '<Root>' : 'Task_6_factorialStateFlow'
 * '<S1>'   : 'Task_6_factorialStateFlow/Chart'
 */
#endif                             /* RTW_HEADER_Task_6_factorialStateFlow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: traffic_lightMBD.h
 *
 * Code generated for Simulink model 'traffic_lightMBD'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 16:33:28 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_traffic_lightMBD_h_
#define RTW_HEADER_traffic_lightMBD_h_
#ifndef traffic_lightMBD_COMMON_INCLUDES_
#define traffic_lightMBD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* traffic_lightMBD_COMMON_INCLUDES_ */

#include "traffic_lightMBD_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_traffic_lightMBD;/* '<Root>/Chart' */
  uint8_T is_c3_traffic_lightMBD;      /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_traffic_lightMBD_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output;                      /* '<Root>/Output' */
  uint8_T Output1;                     /* '<Root>/Output1' */
  uint8_T Output2;                     /* '<Root>/Output2' */
} ExtY_traffic_lightMBD_T;

/* Real-time Model Data Structure */
struct tag_RTM_traffic_lightMBD_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_traffic_lightMBD_T traffic_lightMBD_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_traffic_lightMBD_T traffic_lightMBD_Y;

/* Model entry point functions */
extern void traffic_lightMBD_initialize(void);
extern void traffic_lightMBD_step(void);
extern void traffic_lightMBD_terminate(void);

/* Real-time Model object */
extern RT_MODEL_traffic_lightMBD_T *const traffic_lightMBD_M;

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
 * '<Root>' : 'traffic_lightMBD'
 * '<S1>'   : 'traffic_lightMBD/Chart'
 */
#endif                                 /* RTW_HEADER_traffic_lightMBD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

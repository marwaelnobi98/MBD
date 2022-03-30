/*
 * File: Grading_System.c
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

#include "Grading_System.h"
#include "Grading_System_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grading_System_T Grading_System_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grading_System_T Grading_System_Y;

/* Real-time model */
static RT_MODEL_Grading_System_T Grading_System_M_;
RT_MODEL_Grading_System_T *const Grading_System_M = &Grading_System_M_;

/* Model step function */
void Grading_System_step(void)
{
  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
   *  ActionPort: '<S5>/Action Port'
   */
  /* If: '<Root>/If' incorporates:
   *  Outport: '<Root>/Output'
   *  StringConstant: '<S5>/String Constant'
   */
  strncpy(&Grading_System_Y.Output[0],
          &Grading_System_ConstP.StringConstant_String_n[0], 255U);

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */

  /* Outport: '<Root>/Output' */
  Grading_System_Y.Output[255] = '\x00';
}

/* Model initialize function */
void Grading_System_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Grading_System_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

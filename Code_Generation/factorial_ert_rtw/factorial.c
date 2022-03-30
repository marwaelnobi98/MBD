/*
 * File: factorial.c
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

#include "factorial.h"
#include "factorial_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_factorial_T factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_factorial_T factorial_Y;

/* Real-time model */
static RT_MODEL_factorial_T factorial_M_;
RT_MODEL_factorial_T *const factorial_M = &factorial_M_;

/* Model step function */
void factorial_step(void)
{
  uint16_T UnitDelay_DSTATE;
  uint8_T s1_iter;
  uint8_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1U;

  /* Inport: '<Root>/Input' */
  tmp = factorial_U.Input;
  if (factorial_U.Input > 254) {
    tmp = 254U;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Output' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    factorial_Y.Output = (uint16_T)((uint32_T)s1_iter * UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    UnitDelay_DSTATE = factorial_Y.Output;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void factorial_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

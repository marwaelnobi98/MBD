/*
 * File: Calculator_subsystem.c
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

#include "Calculator_subsystem.h"
#include "Calculator_subsystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_subsystem_T Calculator_subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_subsystem_T Calculator_subsystem_Y;

/* Real-time model */
static RT_MODEL_Calculator_subsystem_T Calculator_subsystem_M_;
RT_MODEL_Calculator_subsystem_T *const Calculator_subsystem_M =
  &Calculator_subsystem_M_;

/* Model step function */
void Calculator_subsystem_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  Calculator_subsystem_Y.Output = (uint8_T)((uint32_T)
    Calculator_subsystem_U.Input + Calculator_subsystem_U.Input1);

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Subtract'
   */
  Calculator_subsystem_Y.Output1 = (uint8_T)(Calculator_subsystem_U.Input -
    Calculator_subsystem_U.Input1);

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Product'
   */
  Calculator_subsystem_Y.Output2 = (uint16_T)((uint32_T)
    Calculator_subsystem_U.Input * Calculator_subsystem_U.Input1);

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Divide'
   */
  Calculator_subsystem_Y.Output3 = (uint8_T)(Calculator_subsystem_U.Input1 == 0U
    ? MAX_uint32_T : (uint32_T)Calculator_subsystem_U.Input /
    Calculator_subsystem_U.Input1);
}

/* Model initialize function */
void Calculator_subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Calculator_subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

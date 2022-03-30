/*
 * File: Calculator_MBD.c
 *
 * Code generated for Simulink model 'Calculator_MBD'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 17:05:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator_MBD.h"
#include "Calculator_MBD_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_MBD_T Calculator_MBD_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_MBD_T Calculator_MBD_Y;

/* Real-time model */
static RT_MODEL_Calculator_MBD_T Calculator_MBD_M_;
RT_MODEL_Calculator_MBD_T *const Calculator_MBD_M = &Calculator_MBD_M_;

/* Model step function */
void Calculator_MBD_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  Calculator_MBD_Y.Output = (uint8_T)((uint32_T)Calculator_MBD_U.Input +
    Calculator_MBD_U.Input1);

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  Calculator_MBD_Y.Output1 = (uint8_T)(Calculator_MBD_U.Input -
    Calculator_MBD_U.Input1);

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Product'
   */
  Calculator_MBD_Y.Output2 = (uint16_T)((uint32_T)Calculator_MBD_U.Input *
    Calculator_MBD_U.Input1);

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  Calculator_MBD_Y.Output3 = (uint8_T)(Calculator_MBD_U.Input1 == 0U ?
    MAX_uint32_T : (uint32_T)Calculator_MBD_U.Input / Calculator_MBD_U.Input1);
}

/* Model initialize function */
void Calculator_MBD_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Calculator_MBD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

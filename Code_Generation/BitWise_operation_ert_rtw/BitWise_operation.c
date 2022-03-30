/*
 * File: BitWise_operation.c
 *
 * Code generated for Simulink model 'BitWise_operation'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar 30 17:27:35 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BitWise_operation.h"
#include "BitWise_operation_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_BitWise_operation_T BitWise_operation_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BitWise_operation_T BitWise_operation_Y;

/* Real-time model */
static RT_MODEL_BitWise_operation_T BitWise_operation_M_;
RT_MODEL_BitWise_operation_T *const BitWise_operation_M = &BitWise_operation_M_;

/* Model step function */
void BitWise_operation_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  BitWise_operation_Y.Output = (uint8_T)~BitWise_operation_U.Input;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   */
  BitWise_operation_Y.Output1 = (uint8_T)(BitWise_operation_U.Input &
    BitWise_operation_U.Input1);

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR1'
   */
  BitWise_operation_Y.Output2 = (uint8_T)(BitWise_operation_U.Input |
    BitWise_operation_U.Input1);

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR'
   */
  BitWise_operation_Y.Output3 = (uint8_T)(BitWise_operation_U.Input ^
    BitWise_operation_U.Input1);

  /* Outport: '<Root>/Output4' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   */
  BitWise_operation_Y.Output4 = (uint8_T)~BitWise_operation_Y.Output3;

  /* Outport: '<Root>/Output5' incorporates:
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT2'
   */
  BitWise_operation_Y.Output5 = (uint8_T)~BitWise_operation_U.Input1;
}

/* Model initialize function */
void BitWise_operation_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void BitWise_operation_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

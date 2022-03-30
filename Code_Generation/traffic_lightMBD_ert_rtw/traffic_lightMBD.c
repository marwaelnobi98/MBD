/*
 * File: traffic_lightMBD.c
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

#include "traffic_lightMBD.h"
#include "traffic_lightMBD_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define traffic_lightMBD_IN_Pass_      ((uint8_T)1U)
#define traffic_lightMBD_IN_Ready_     ((uint8_T)2U)
#define traffic_lightMBD_IN_Stop_      ((uint8_T)3U)

/* Block states (default storage) */
DW_traffic_lightMBD_T traffic_lightMBD_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_traffic_lightMBD_T traffic_lightMBD_Y;

/* Real-time model */
static RT_MODEL_traffic_lightMBD_T traffic_lightMBD_M_;
RT_MODEL_traffic_lightMBD_T *const traffic_lightMBD_M = &traffic_lightMBD_M_;

/* Model step function */
void traffic_lightMBD_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (traffic_lightMBD_DW.temporalCounter_i1 < 15U) {
    traffic_lightMBD_DW.temporalCounter_i1++;
  }

  if (traffic_lightMBD_DW.is_active_c3_traffic_lightMBD == 0U) {
    traffic_lightMBD_DW.is_active_c3_traffic_lightMBD = 1U;
    traffic_lightMBD_DW.is_c3_traffic_lightMBD = traffic_lightMBD_IN_Stop_;
    traffic_lightMBD_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Output' */
    traffic_lightMBD_Y.Output = 0U;

    /* Outport: '<Root>/Output1' */
    traffic_lightMBD_Y.Output1 = 0U;

    /* Outport: '<Root>/Output2' */
    traffic_lightMBD_Y.Output2 = 1U;
  } else {
    switch (traffic_lightMBD_DW.is_c3_traffic_lightMBD) {
     case traffic_lightMBD_IN_Pass_:
      if (traffic_lightMBD_DW.temporalCounter_i1 >= 15U) {
        traffic_lightMBD_DW.is_c3_traffic_lightMBD = traffic_lightMBD_IN_Stop_;
        traffic_lightMBD_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        traffic_lightMBD_Y.Output = 0U;

        /* Outport: '<Root>/Output1' */
        traffic_lightMBD_Y.Output1 = 0U;

        /* Outport: '<Root>/Output2' */
        traffic_lightMBD_Y.Output2 = 1U;
      } else {
        /* Outport: '<Root>/Output' */
        traffic_lightMBD_Y.Output = 0U;

        /* Outport: '<Root>/Output1' */
        traffic_lightMBD_Y.Output1 = 0U;

        /* Outport: '<Root>/Output2' */
        traffic_lightMBD_Y.Output2 = 1U;
      }
      break;

     case traffic_lightMBD_IN_Ready_:
      if (traffic_lightMBD_DW.temporalCounter_i1 >= 15U) {
        traffic_lightMBD_DW.is_c3_traffic_lightMBD = traffic_lightMBD_IN_Pass_;
        traffic_lightMBD_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        traffic_lightMBD_Y.Output = 0U;

        /* Outport: '<Root>/Output1' */
        traffic_lightMBD_Y.Output1 = 1U;

        /* Outport: '<Root>/Output2' */
        traffic_lightMBD_Y.Output2 = 0U;
      } else {
        /* Outport: '<Root>/Output' */
        traffic_lightMBD_Y.Output = 0U;

        /* Outport: '<Root>/Output1' */
        traffic_lightMBD_Y.Output1 = 1U;

        /* Outport: '<Root>/Output2' */
        traffic_lightMBD_Y.Output2 = 0U;
      }
      break;

     default:
      /* case IN_Stop_: */
      if (traffic_lightMBD_DW.temporalCounter_i1 >= 15U) {
        traffic_lightMBD_DW.is_c3_traffic_lightMBD = traffic_lightMBD_IN_Ready_;
        traffic_lightMBD_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        traffic_lightMBD_Y.Output = 1U;

        /* Outport: '<Root>/Output1' */
        traffic_lightMBD_Y.Output1 = 0U;

        /* Outport: '<Root>/Output2' */
        traffic_lightMBD_Y.Output2 = 0U;
      } else {
        /* Outport: '<Root>/Output' */
        traffic_lightMBD_Y.Output = 1U;

        /* Outport: '<Root>/Output1' */
        traffic_lightMBD_Y.Output1 = 0U;

        /* Outport: '<Root>/Output2' */
        traffic_lightMBD_Y.Output2 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void traffic_lightMBD_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void traffic_lightMBD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

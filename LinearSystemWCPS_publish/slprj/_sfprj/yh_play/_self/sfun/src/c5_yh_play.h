#ifndef __c5_yh_play_h__
#define __c5_yh_play_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc5_yh_playInstanceStruct
#define typedef_SFc5_yh_playInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_sfEvent;
  boolean_T c5_isStable;
  boolean_T c5_doneDoubleBufferReInit;
  uint8_T c5_is_active_c5_yh_play;
  real_T c5_delay1[9];
  boolean_T c5_delay1_not_empty;
  real_T c5_i;
  boolean_T c5_i_not_empty;
  uint32_T (*c5_ydelay_global_address)[15];
  int32_T c5_ydelay_global_index;
} SFc5_yh_playInstanceStruct;

#endif                                 /*typedef_SFc5_yh_playInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_yh_play_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_yh_play_get_check_sum(mxArray *plhs[]);
extern void c5_yh_play_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif

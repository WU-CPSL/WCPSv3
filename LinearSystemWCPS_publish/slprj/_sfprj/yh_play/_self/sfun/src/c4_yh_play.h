#ifndef __c4_yh_play_h__
#define __c4_yh_play_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc4_yh_playInstanceStruct
#define typedef_SFc4_yh_playInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_sfEvent;
  boolean_T c4_isStable;
  boolean_T c4_doneDoubleBufferReInit;
  uint8_T c4_is_active_c4_yh_play;
} SFc4_yh_playInstanceStruct;

#endif                                 /*typedef_SFc4_yh_playInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_yh_play_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_yh_play_get_check_sum(mxArray *plhs[]);
extern void c4_yh_play_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif

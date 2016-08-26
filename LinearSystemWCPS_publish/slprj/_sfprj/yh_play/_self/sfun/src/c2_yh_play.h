#ifndef __c2_yh_play_h__
#define __c2_yh_play_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_struct_1L0b35i9nMnYQagH7Bq10G_tag
#define struct_struct_1L0b35i9nMnYQagH7Bq10G_tag

struct struct_1L0b35i9nMnYQagH7Bq10G_tag
{
  real_T i;
  real_T count;
  real_T yin;
  real_T yin_d;
  real_T delay1[153];
  real_T ranD[5];
};

#endif                                 /*struct_struct_1L0b35i9nMnYQagH7Bq10G_tag*/

#ifndef typedef_c2_struct_1L0b35i9nMnYQagH7Bq10G
#define typedef_c2_struct_1L0b35i9nMnYQagH7Bq10G

typedef struct struct_1L0b35i9nMnYQagH7Bq10G_tag
  c2_struct_1L0b35i9nMnYQagH7Bq10G;

#endif                                 /*typedef_c2_struct_1L0b35i9nMnYQagH7Bq10G*/

#ifndef typedef_SFc2_yh_playInstanceStruct
#define typedef_SFc2_yh_playInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_yh_play;
  c2_struct_1L0b35i9nMnYQagH7Bq10G c2_structure;
  real_T c2_i;
  boolean_T c2_i_not_empty;
  real_T c2_yin_d;
  boolean_T c2_yin_d_not_empty;
  real_T c2_yin;
  boolean_T c2_yin_not_empty;
  real_T c2_delay[9];
  boolean_T c2_delay_not_empty;
  real_T c2_yin_all[100001];
  boolean_T c2_yin_all_not_empty;
  real_T c2_num;
  boolean_T c2_num_not_empty;
} SFc2_yh_playInstanceStruct;

#endif                                 /*typedef_SFc2_yh_playInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_yh_play_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_yh_play_get_check_sum(mxArray *plhs[]);
extern void c2_yh_play_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif

#ifndef __c3_CoupledTanks_WCPS_v2_DoubleSD_h__
#define __c3_CoupledTanks_WCPS_v2_DoubleSD_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_struct_CbZ2Cy8hhEwWOeXy5fCq5C_tag
#define struct_struct_CbZ2Cy8hhEwWOeXy5fCq5C_tag

struct struct_CbZ2Cy8hhEwWOeXy5fCq5C_tag
{
  real_T i;
  real_T count;
  real_T yin[5];
  real_T yin_d[5];
  real_T delay1[20];
  real_T ranD[5];
};

#endif                                 /*struct_struct_CbZ2Cy8hhEwWOeXy5fCq5C_tag*/

#ifndef typedef_c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C
#define typedef_c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C

typedef struct struct_CbZ2Cy8hhEwWOeXy5fCq5C_tag
  c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C;

#endif                                 /*typedef_c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C*/

#ifndef typedef_SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct
#define typedef_SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  boolean_T c3_isStable;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD;
  c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C c3_structure;
  real_T c3_i;
  boolean_T c3_i_not_empty;
  real_T c3_yin_d[5];
  boolean_T c3_yin_d_not_empty;
  real_T c3_yin[5];
  boolean_T c3_yin_not_empty;
  real_T c3_delay_data[15];
  int32_T c3_delay_sizes[2];
  boolean_T c3_delay_not_empty;
  real_T c3_yin_all[500005];
  boolean_T c3_yin_all_not_empty;
  real_T c3_num;
  boolean_T c3_num_not_empty;
} SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct;

#endif                                 /*typedef_SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_CoupledTanks_WCPS_v2_DoubleSD_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(mxArray *plhs[]);
extern void c3_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif

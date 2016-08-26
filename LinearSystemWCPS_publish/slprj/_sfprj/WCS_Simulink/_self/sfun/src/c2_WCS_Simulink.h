#ifndef __c2_WCS_Simulink_h__
#define __c2_WCS_Simulink_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_struct_bSwIGzZEmrXJ0nj6Ancx6_tag
#define struct_struct_bSwIGzZEmrXJ0nj6Ancx6_tag

struct struct_bSwIGzZEmrXJ0nj6Ancx6_tag
{
  real_T i;
  real_T count;
  real_T yin;
  real_T yin_d;
  real_T delay1[753];
  real_T ranD[5];
};

#endif                                 /*struct_struct_bSwIGzZEmrXJ0nj6Ancx6_tag*/

#ifndef typedef_c2_struct_bSwIGzZEmrXJ0nj6Ancx6
#define typedef_c2_struct_bSwIGzZEmrXJ0nj6Ancx6

typedef struct struct_bSwIGzZEmrXJ0nj6Ancx6_tag c2_struct_bSwIGzZEmrXJ0nj6Ancx6;

#endif                                 /*typedef_c2_struct_bSwIGzZEmrXJ0nj6Ancx6*/

#ifndef typedef_SFc2_WCS_SimulinkInstanceStruct
#define typedef_SFc2_WCS_SimulinkInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_WCS_Simulink;
  c2_struct_bSwIGzZEmrXJ0nj6Ancx6 c2_structure;
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
} SFc2_WCS_SimulinkInstanceStruct;

#endif                                 /*typedef_SFc2_WCS_SimulinkInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_WCS_Simulink_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_WCS_Simulink_get_check_sum(mxArray *plhs[]);
extern void c2_WCS_Simulink_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif

#ifndef __c2_CoupledTanks_WCPS_v2_DoubleSD_h__
#define __c2_CoupledTanks_WCPS_v2_DoubleSD_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_struct_4wBdThUxYdNHcanh8uXDkB_tag
#define struct_struct_4wBdThUxYdNHcanh8uXDkB_tag

struct struct_4wBdThUxYdNHcanh8uXDkB_tag
{
  real_T i;
  real_T count;
  real_T yin[5];
  real_T yin_d[5];
  real_T delay1[155];
  real_T ranD[5];
};

#endif                                 /*struct_struct_4wBdThUxYdNHcanh8uXDkB_tag*/

#ifndef typedef_c2_struct_4wBdThUxYdNHcanh8uXDkB
#define typedef_c2_struct_4wBdThUxYdNHcanh8uXDkB

typedef struct struct_4wBdThUxYdNHcanh8uXDkB_tag
  c2_struct_4wBdThUxYdNHcanh8uXDkB;

#endif                                 /*typedef_c2_struct_4wBdThUxYdNHcanh8uXDkB*/

#ifndef typedef_SFc2_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct
#define typedef_SFc2_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_CoupledTanks_WCPS_v2_DoubleSD;
  c2_struct_4wBdThUxYdNHcanh8uXDkB c2_structure;
  real_T c2_i;
  boolean_T c2_i_not_empty;
  real_T c2_yin_d[5];
  boolean_T c2_yin_d_not_empty;
  real_T c2_yin[5];
  boolean_T c2_yin_not_empty;
  real_T c2_delay_data[15];
  int32_T c2_delay_sizes[2];
  boolean_T c2_delay_not_empty;
  real_T c2_yin_all[500005];
  boolean_T c2_yin_all_not_empty;
  real_T c2_num;
  boolean_T c2_num_not_empty;
} SFc2_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct;

#endif                                 /*typedef_SFc2_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c2_CoupledTanks_WCPS_v2_DoubleSD_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(mxArray *plhs[]);
extern void c2_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif

/* Include files */

#include <stddef.h>
#include "blas.h"
#include "CoupledTanks_WCPS_v2_DoubleSD_sfun.h"
#include "c3_CoupledTanks_WCPS_v2_DoubleSD.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "CoupledTanks_WCPS_v2_DoubleSD_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c3_debug_family_names[16] = { "sennum", "step_count", "kk",
  "j", "nargin", "nargout", "yout", "ydelay", "structure", "yout_delay", "i",
  "yin_d", "yin", "delay", "yin_all", "num" };

/* Function Declarations */
static void initialize_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void initialize_params_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void enable_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void disable_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_st);
static void finalize_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void sf_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void initSimStructsc3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void registerMessagesc3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static real_T c3_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_num, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_c_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_yin_all, const char_T *c3_identifier, real_T c3_y[500005]);
static void c3_d_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[500005]);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, real_T
  c3_inData_data[15], int32_T c3_inData_sizes[2]);
static void c3_e_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_delay, const char_T *c3_identifier, real_T c3_y_data[15], int32_T
   c3_y_sizes[2]);
static void c3_f_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y_data[15],
   int32_T c3_y_sizes[2]);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, real_T c3_outData_data[15],
  int32_T c3_outData_sizes[2]);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_g_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_yin, const char_T *c3_identifier, real_T c3_y[5]);
static void c3_h_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5]);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_i_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_yin_d, const char_T *c3_identifier, real_T c3_y[5]);
static void c3_j_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5]);
static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_k_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_i, const char_T *c3_identifier);
static real_T c3_l_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_m_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_yout_delay, const char_T *c3_identifier, real_T c3_y[5]);
static void c3_n_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5]);
static void c3_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_h_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_o_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
   c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C *c3_y);
static real_T c3_p_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_q_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5]);
static void c3_r_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5]);
static void c3_s_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[20]);
static void c3_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_i_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_j_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_k_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_l_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_t_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_j_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static uint8_T c3_u_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD, const char_T
   *c3_identifier);
static uint8_T c3_v_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_i_not_empty = FALSE;
  chartInstance->c3_yin_d_not_empty = FALSE;
  chartInstance->c3_yin_not_empty = FALSE;
  chartInstance->c3_delay_not_empty = FALSE;
  chartInstance->c3_yin_all_not_empty = FALSE;
  chartInstance->c3_num_not_empty = FALSE;
  chartInstance->c3_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD = 0U;
}

static void initialize_params_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  const mxArray *c3_m0 = NULL;
  const mxArray *c3_mxField;
  c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C c3_r0;
  sf_set_error_prefix_string(
    "Error evaluating data 'structure' in the parent workspace.\n");
  c3_m0 = sf_mex_get_sfun_param(chartInstance->S, 0, 1);
  c3_mxField = sf_mex_getfield(c3_m0, "i", "structure", 0);
  sf_mex_import_named("structure", sf_mex_dup(c3_mxField), &c3_r0.i, 1, 0, 0U, 0,
                      0U, 0);
  c3_mxField = sf_mex_getfield(c3_m0, "count", "structure", 0);
  sf_mex_import_named("structure", sf_mex_dup(c3_mxField), &c3_r0.count, 1, 0,
                      0U, 0, 0U, 0);
  c3_mxField = sf_mex_getfield(c3_m0, "yin", "structure", 0);
  sf_mex_import_named("structure", sf_mex_dup(c3_mxField), c3_r0.yin, 1, 0, 0U,
                      1, 0U, 2, 1, 5);
  c3_mxField = sf_mex_getfield(c3_m0, "yin_d", "structure", 0);
  sf_mex_import_named("structure", sf_mex_dup(c3_mxField), c3_r0.yin_d, 1, 0, 0U,
                      1, 0U, 2, 5, 1);
  c3_mxField = sf_mex_getfield(c3_m0, "delay1", "structure", 0);
  sf_mex_import_named("structure", sf_mex_dup(c3_mxField), c3_r0.delay1, 1, 0,
                      0U, 1, 0U, 2, 4, 5);
  c3_mxField = sf_mex_getfield(c3_m0, "ranD", "structure", 0);
  sf_mex_import_named("structure", sf_mex_dup(c3_mxField), c3_r0.ranD, 1, 0, 0U,
                      1, 0U, 2, 1, 5);
  sf_mex_destroy(&c3_m0);
  chartInstance->c3_structure = c3_r0;
  sf_set_error_prefix_string("Stateflow Runtime Error (chart): ");
}

static void enable_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c3_update_debugger_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  int32_T c3_i0;
  real_T c3_u[5];
  const mxArray *c3_b_y = NULL;
  int32_T c3_u_sizes[2];
  int32_T c3_b_u;
  int32_T c3_c_u;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  real_T c3_u_data[15];
  const mxArray *c3_c_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_d_u;
  const mxArray *c3_d_y = NULL;
  real_T c3_b_hoistedGlobal;
  real_T c3_e_u;
  const mxArray *c3_e_y = NULL;
  int32_T c3_i2;
  real_T c3_f_u[5];
  const mxArray *c3_f_y = NULL;
  int32_T c3_i3;
  static real_T c3_g_u[500005];
  const mxArray *c3_g_y = NULL;
  int32_T c3_i4;
  real_T c3_h_u[5];
  const mxArray *c3_h_y = NULL;
  uint8_T c3_c_hoistedGlobal;
  uint8_T c3_i_u;
  const mxArray *c3_i_y = NULL;
  real_T (*c3_yout_delay)[5];
  c3_yout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(8), FALSE);
  for (c3_i0 = 0; c3_i0 < 5; c3_i0++) {
    c3_u[c3_i0] = (*c3_yout_delay)[c3_i0];
  }

  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_u_sizes[0] = 1;
  c3_u_sizes[1] = chartInstance->c3_delay_sizes[1];
  c3_b_u = c3_u_sizes[0];
  c3_c_u = c3_u_sizes[1];
  c3_loop_ub = chartInstance->c3_delay_sizes[0] * chartInstance->c3_delay_sizes
    [1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_u_data[c3_i1] = chartInstance->c3_delay_data[c3_i1];
  }

  c3_c_y = NULL;
  if (!chartInstance->c3_delay_not_empty) {
    sf_mex_assign(&c3_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c3_c_y, sf_mex_create("y", c3_u_data, 0, 0U, 1U, 0U, 2,
      c3_u_sizes[0], c3_u_sizes[1]), FALSE);
  }

  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_hoistedGlobal = chartInstance->c3_i;
  c3_d_u = c3_hoistedGlobal;
  c3_d_y = NULL;
  if (!chartInstance->c3_i_not_empty) {
    sf_mex_assign(&c3_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_d_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_b_hoistedGlobal = chartInstance->c3_num;
  c3_e_u = c3_b_hoistedGlobal;
  c3_e_y = NULL;
  if (!chartInstance->c3_num_not_empty) {
    sf_mex_assign(&c3_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_e_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_setcell(c3_y, 3, c3_e_y);
  for (c3_i2 = 0; c3_i2 < 5; c3_i2++) {
    c3_f_u[c3_i2] = chartInstance->c3_yin[c3_i2];
  }

  c3_f_y = NULL;
  if (!chartInstance->c3_yin_not_empty) {
    sf_mex_assign(&c3_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_f_u, 0, 0U, 1U, 0U, 2, 1, 5),
                  FALSE);
  }

  sf_mex_setcell(c3_y, 4, c3_f_y);
  for (c3_i3 = 0; c3_i3 < 500005; c3_i3++) {
    c3_g_u[c3_i3] = chartInstance->c3_yin_all[c3_i3];
  }

  c3_g_y = NULL;
  if (!chartInstance->c3_yin_all_not_empty) {
    sf_mex_assign(&c3_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_g_u, 0, 0U, 1U, 0U, 2, 100001,
      5), FALSE);
  }

  sf_mex_setcell(c3_y, 5, c3_g_y);
  for (c3_i4 = 0; c3_i4 < 5; c3_i4++) {
    c3_h_u[c3_i4] = chartInstance->c3_yin_d[c3_i4];
  }

  c3_h_y = NULL;
  if (!chartInstance->c3_yin_d_not_empty) {
    sf_mex_assign(&c3_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_h_u, 0, 0U, 1U, 0U, 1, 5),
                  FALSE);
  }

  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_c_hoistedGlobal =
    chartInstance->c3_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD;
  c3_i_u = c3_c_hoistedGlobal;
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y", &c3_i_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 7, c3_i_y);
  sf_mex_assign(&c3_st, c3_y, FALSE);
  return c3_st;
}

static void set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T c3_dv0[5];
  int32_T c3_i5;
  int32_T c3_tmp_sizes[2];
  real_T c3_tmp_data[15];
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_loop_ub;
  int32_T c3_i8;
  real_T c3_dv1[5];
  int32_T c3_i9;
  static real_T c3_dv2[500005];
  int32_T c3_i10;
  real_T c3_dv3[5];
  int32_T c3_i11;
  real_T (*c3_yout_delay)[5];
  c3_yout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c3_doneDoubleBufferReInit = TRUE;
  c3_u = sf_mex_dup(c3_st);
  c3_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 0)),
                        "yout_delay", c3_dv0);
  for (c3_i5 = 0; c3_i5 < 5; c3_i5++) {
    (*c3_yout_delay)[c3_i5] = c3_dv0[c3_i5];
  }

  c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
                        "delay", c3_tmp_data, c3_tmp_sizes);
  chartInstance->c3_delay_sizes[0] = 1;
  chartInstance->c3_delay_sizes[1] = c3_tmp_sizes[1];
  c3_i6 = chartInstance->c3_delay_sizes[0];
  c3_i7 = chartInstance->c3_delay_sizes[1];
  c3_loop_ub = c3_tmp_sizes[0] * c3_tmp_sizes[1] - 1;
  for (c3_i8 = 0; c3_i8 <= c3_loop_ub; c3_i8++) {
    chartInstance->c3_delay_data[c3_i8] = c3_tmp_data[c3_i8];
  }

  chartInstance->c3_i = c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "i");
  chartInstance->c3_num = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 3)), "num");
  c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
                        "yin", c3_dv1);
  for (c3_i9 = 0; c3_i9 < 5; c3_i9++) {
    chartInstance->c3_yin[c3_i9] = c3_dv1[c3_i9];
  }

  c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 5)),
                        "yin_all", c3_dv2);
  for (c3_i10 = 0; c3_i10 < 500005; c3_i10++) {
    chartInstance->c3_yin_all[c3_i10] = c3_dv2[c3_i10];
  }

  c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 6)),
                        "yin_d", c3_dv3);
  for (c3_i11 = 0; c3_i11 < 5; c3_i11++) {
    chartInstance->c3_yin_d[c3_i11] = c3_dv3[c3_i11];
  }

  chartInstance->c3_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD =
    c3_u_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 7)),
    "is_active_c3_CoupledTanks_WCPS_v2_DoubleSD");
  sf_mex_destroy(&c3_u);
  c3_update_debugger_state_c3_CoupledTanks_WCPS_v2_DoubleSD(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void finalize_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void sf_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  int32_T c3_i12;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_i15;
  real_T c3_yout[10];
  int32_T c3_i16;
  real_T c3_ydelay[15];
  c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C c3_b_structure;
  uint32_T c3_debug_family_var_map[16];
  real_T c3_sennum;
  real_T c3_step_count;
  real_T c3_kk;
  real_T c3_j;
  real_T c3_nargin = 3.0;
  real_T c3_nargout = 1.0;
  real_T c3_yout_delay[5];
  int32_T c3_i17;
  int32_T c3_i18;
  int32_T c3_i19;
  int32_T c3_i20;
  real_T c3_dv4[6];
  int32_T c3_i21;
  int32_T c3_i22;
  int32_T c3_i23;
  int32_T c3_i24;
  real_T c3_b_ydelay[15];
  int32_T c3_i25;
  int32_T c3_i26;
  int32_T c3_i27;
  int32_T c3_i28;
  real_T c3_dv5[11];
  int32_T c3_i29;
  int32_T c3_i30;
  int32_T c3_i31;
  int32_T c3_i32;
  int32_T c3_i33;
  int32_T c3_i34;
  int32_T c3_i35;
  int32_T c3_b_kk;
  int32_T c3_b_j;
  int32_T c3_i36;
  int32_T c3_i37;
  int32_T c3_i38;
  real_T (*c3_b_yout_delay)[5];
  real_T (*c3_c_ydelay)[15];
  real_T (*c3_b_yout)[10];
  c3_b_yout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  c3_c_ydelay = (real_T (*)[15])ssGetInputPortSignal(chartInstance->S, 1);
  c3_b_yout = (real_T (*)[10])ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  for (c3_i12 = 0; c3_i12 < 10; c3_i12++) {
    _SFD_DATA_RANGE_CHECK((*c3_b_yout)[c3_i12], 0U);
  }

  for (c3_i13 = 0; c3_i13 < 15; c3_i13++) {
    _SFD_DATA_RANGE_CHECK((*c3_c_ydelay)[c3_i13], 1U);
  }

  for (c3_i14 = 0; c3_i14 < 5; c3_i14++) {
    _SFD_DATA_RANGE_CHECK((*c3_b_yout_delay)[c3_i14], 2U);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  for (c3_i15 = 0; c3_i15 < 10; c3_i15++) {
    c3_yout[c3_i15] = (*c3_b_yout)[c3_i15];
  }

  for (c3_i16 = 0; c3_i16 < 15; c3_i16++) {
    c3_ydelay[c3_i16] = (*c3_c_ydelay)[c3_i16];
  }

  c3_b_structure = chartInstance->c3_structure;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 16U, 16U, c3_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_sennum, 0U, c3_k_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c3_step_count, 1U, c3_k_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_kk, 2U, c3_k_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_j, 3U, c3_k_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 4U, c3_k_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 5U, c3_k_sf_marshallOut,
    c3_i_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_yout, 6U, c3_j_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c3_ydelay, 7U, c3_i_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_structure, 8U, c3_h_sf_marshallOut,
    c3_h_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c3_yout_delay, 9U, c3_g_sf_marshallOut,
    c3_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c3_i, 10U,
    c3_f_sf_marshallOut, c3_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c3_yin_d, 11U,
    c3_e_sf_marshallOut, c3_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c3_yin, 12U,
    c3_d_sf_marshallOut, c3_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_DYN_IMPORTABLE(chartInstance->c3_delay_data, (const
    int32_T *)&chartInstance->c3_delay_sizes, NULL, 1, 13, (void *)
    c3_c_sf_marshallOut, (void *)c3_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c3_yin_all, 14U,
    c3_b_sf_marshallOut, c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c3_num, 15U,
    c3_sf_marshallOut, c3_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 13);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 14);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 15);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 17);
  c3_sennum = 5.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 18);
  c3_step_count = 100000.0;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 21);
  if (CV_EML_IF(0, 1, 0, !chartInstance->c3_yin_not_empty)) {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 22);
    chartInstance->c3_i = c3_b_structure.i;
    chartInstance->c3_i_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 23);
    for (c3_i17 = 0; c3_i17 < 5; c3_i17++) {
      chartInstance->c3_yin[c3_i17] = c3_b_structure.yin[c3_i17];
    }

    chartInstance->c3_yin_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 24);
    for (c3_i18 = 0; c3_i18 < 5; c3_i18++) {
      chartInstance->c3_yin_d[c3_i18] = c3_b_structure.yin_d[c3_i18];
    }

    chartInstance->c3_yin_d_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 25);
    for (c3_i19 = 0; c3_i19 < 500005; c3_i19++) {
      chartInstance->c3_yin_all[c3_i19] = 0.0;
    }

    chartInstance->c3_yin_all_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 27);
    for (c3_i20 = 0; c3_i20 < 6; c3_i20++) {
      c3_dv4[c3_i20] = 0.0;
    }

    chartInstance->c3_delay_sizes[0] = 1;
    chartInstance->c3_delay_sizes[1] = 6;
    c3_i21 = chartInstance->c3_delay_sizes[0];
    c3_i22 = chartInstance->c3_delay_sizes[1];
    for (c3_i23 = 0; c3_i23 < 6; c3_i23++) {
      chartInstance->c3_delay_data[c3_i23] = c3_dv4[c3_i23];
    }

    chartInstance->c3_delay_not_empty = TRUE;
    chartInstance->c3_delay_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 28);
    for (c3_i24 = 0; c3_i24 < 15; c3_i24++) {
      c3_b_ydelay[c3_i24] = c3_ydelay[c3_i24];
    }

    chartInstance->c3_delay_sizes[0] = 1;
    chartInstance->c3_delay_sizes[1] = 15;
    c3_i25 = chartInstance->c3_delay_sizes[0];
    c3_i26 = chartInstance->c3_delay_sizes[1];
    for (c3_i27 = 0; c3_i27 < 15; c3_i27++) {
      chartInstance->c3_delay_data[c3_i27] = c3_b_ydelay[c3_i27];
    }

    chartInstance->c3_delay_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 30);
    chartInstance->c3_num = 0.0;
    chartInstance->c3_num_not_empty = TRUE;
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 33);
  chartInstance->c3_num++;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 36);
  for (c3_i28 = 0; c3_i28 < 11; c3_i28++) {
    c3_dv5[c3_i28] = 0.0;
  }

  chartInstance->c3_delay_sizes[0] = 1;
  chartInstance->c3_delay_sizes[1] = 11;
  c3_i29 = chartInstance->c3_delay_sizes[0];
  c3_i30 = chartInstance->c3_delay_sizes[1];
  for (c3_i31 = 0; c3_i31 < 11; c3_i31++) {
    chartInstance->c3_delay_data[c3_i31] = c3_dv5[c3_i31];
  }

  chartInstance->c3_delay_not_empty = TRUE;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 37);
  for (c3_i32 = 0; c3_i32 < 15; c3_i32++) {
    c3_b_ydelay[c3_i32] = c3_ydelay[c3_i32];
  }

  chartInstance->c3_delay_sizes[0] = 1;
  chartInstance->c3_delay_sizes[1] = 15;
  c3_i33 = chartInstance->c3_delay_sizes[0];
  c3_i34 = chartInstance->c3_delay_sizes[1];
  for (c3_i35 = 0; c3_i35 < 15; c3_i35++) {
    chartInstance->c3_delay_data[c3_i35] = c3_b_ydelay[c3_i35];
  }

  chartInstance->c3_delay_not_empty = TRUE;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 40);
  c3_kk = 1.0;
  c3_b_kk = 0;
  while (c3_b_kk < 5) {
    c3_kk = 1.0 + (real_T)c3_b_kk;
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 41);
    chartInstance->c3_yin_all[((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
      "yin_all", (int32_T)chartInstance->c3_num, 1, 100001, 1, 0) + 100001 *
      ((int32_T)c3_kk - 1)) - 1] = c3_yout[(int32_T)(c3_kk + 5.0) - 1];
    c3_b_kk++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 45);
  c3_j = 1.0;
  c3_b_j = 0;
  while (c3_b_j < 5) {
    c3_j = 1.0 + (real_T)c3_b_j;
    CV_EML_FOR(0, 1, 1, 1);
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 46);
    if (CV_EML_IF(0, 1, 1, chartInstance->c3_delay_data
                  [chartInstance->c3_delay_sizes[0] * ((int32_T)(c3_j + 6.0) - 1)]
                  != 88.0)) {
      _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 47);
      chartInstance->c3_yin[(int32_T)c3_j - 1] = chartInstance->c3_yin_all
        [((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("yin_all", (int32_T)
           chartInstance->c3_num, 1, 100001, 1, 0) + 100001 * ((int32_T)c3_j - 1))
        - 1];
    } else {
      _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 49);
      if (CV_EML_IF(0, 1, 2, chartInstance->c3_num > 1.0)) {
        _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 51);
        chartInstance->c3_yin[(int32_T)c3_j - 1] = chartInstance->c3_yin_all
          [((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("yin_all", (int32_T)
             (chartInstance->c3_num - 1.0), 1, 100001, 1, 0) + 100001 *
            ((int32_T)c3_j - 1)) - 1];
        _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 52);
        chartInstance->c3_yin_all[((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
          "yin_all", (int32_T)chartInstance->c3_num, 1, 100001, 1, 0) + 100001 *
                                   ((int32_T)c3_j - 1)) - 1] =
          chartInstance->c3_yin_all[((int32_T)(real_T)
          _SFD_EML_ARRAY_BOUNDS_CHECK("yin_all", (int32_T)(chartInstance->c3_num
          - 1.0), 1, 100001, 1, 0) + 100001 * ((int32_T)c3_j - 1)) - 1];
      }
    }

    c3_b_j++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 1, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 57);
  for (c3_i36 = 0; c3_i36 < 5; c3_i36++) {
    chartInstance->c3_yin_d[c3_i36] = chartInstance->c3_yin[c3_i36];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 59);
  for (c3_i37 = 0; c3_i37 < 5; c3_i37++) {
    c3_yout_delay[c3_i37] = chartInstance->c3_yin_d[c3_i37];
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 61);
  chartInstance->c3_i++;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, -61);
  _SFD_SYMBOL_SCOPE_POP();
  for (c3_i38 = 0; c3_i38 < 5; c3_i38++) {
    (*c3_b_yout_delay)[c3_i38] = c3_yout_delay[c3_i38];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_CoupledTanks_WCPS_v2_DoubleSDMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
}

static void initSimStructsc3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void registerMessagesc3_CoupledTanks_WCPS_v2_DoubleSD
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  if (!chartInstance->c3_num_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static real_T c3_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_num, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_num), &c3_thisId);
  sf_mex_destroy(&c3_b_num);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_num_not_empty = FALSE;
  } else {
    chartInstance->c3_num_not_empty = TRUE;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
    c3_y = c3_d0;
  }

  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_num;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_num = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_num), &c3_thisId);
  sf_mex_destroy(&c3_b_num);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i39;
  int32_T c3_i40;
  int32_T c3_i41;
  static real_T c3_b_inData[500005];
  int32_T c3_i42;
  int32_T c3_i43;
  int32_T c3_i44;
  static real_T c3_u[500005];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_i39 = 0;
  for (c3_i40 = 0; c3_i40 < 5; c3_i40++) {
    for (c3_i41 = 0; c3_i41 < 100001; c3_i41++) {
      c3_b_inData[c3_i41 + c3_i39] = (*(real_T (*)[500005])c3_inData)[c3_i41 +
        c3_i39];
    }

    c3_i39 += 100001;
  }

  c3_i42 = 0;
  for (c3_i43 = 0; c3_i43 < 5; c3_i43++) {
    for (c3_i44 = 0; c3_i44 < 100001; c3_i44++) {
      c3_u[c3_i44 + c3_i42] = c3_b_inData[c3_i44 + c3_i42];
    }

    c3_i42 += 100001;
  }

  c3_y = NULL;
  if (!chartInstance->c3_yin_all_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 2, 100001, 5),
                  FALSE);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_c_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_yin_all, const char_T *c3_identifier, real_T c3_y[500005])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_yin_all), &c3_thisId,
                        c3_y);
  sf_mex_destroy(&c3_b_yin_all);
}

static void c3_d_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[500005])
{
  static real_T c3_dv6[500005];
  int32_T c3_i45;
  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_yin_all_not_empty = FALSE;
  } else {
    chartInstance->c3_yin_all_not_empty = TRUE;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv6, 1, 0, 0U, 1, 0U, 2,
                  100001, 5);
    for (c3_i45 = 0; c3_i45 < 500005; c3_i45++) {
      c3_y[c3_i45] = c3_dv6[c3_i45];
    }
  }

  sf_mex_destroy(&c3_u);
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_yin_all;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  static real_T c3_y[500005];
  int32_T c3_i46;
  int32_T c3_i47;
  int32_T c3_i48;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_yin_all = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_yin_all), &c3_thisId,
                        c3_y);
  sf_mex_destroy(&c3_b_yin_all);
  c3_i46 = 0;
  for (c3_i47 = 0; c3_i47 < 5; c3_i47++) {
    for (c3_i48 = 0; c3_i48 < 100001; c3_i48++) {
      (*(real_T (*)[500005])c3_outData)[c3_i48 + c3_i46] = c3_y[c3_i48 + c3_i46];
    }

    c3_i46 += 100001;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, real_T
  c3_inData_data[15], int32_T c3_inData_sizes[2])
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_b_inData_sizes[2];
  int32_T c3_loop_ub;
  int32_T c3_i49;
  real_T c3_b_inData_data[15];
  int32_T c3_u_sizes[2];
  int32_T c3_b_loop_ub;
  int32_T c3_i50;
  real_T c3_u_data[15];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_b_inData_sizes[0] = 1;
  c3_b_inData_sizes[1] = c3_inData_sizes[1];
  c3_loop_ub = c3_inData_sizes[1] - 1;
  for (c3_i49 = 0; c3_i49 <= c3_loop_ub; c3_i49++) {
    c3_b_inData_data[c3_b_inData_sizes[0] * c3_i49] =
      c3_inData_data[c3_inData_sizes[0] * c3_i49];
  }

  c3_u_sizes[0] = 1;
  c3_u_sizes[1] = c3_b_inData_sizes[1];
  c3_b_loop_ub = c3_b_inData_sizes[1] - 1;
  for (c3_i50 = 0; c3_i50 <= c3_b_loop_ub; c3_i50++) {
    c3_u_data[c3_u_sizes[0] * c3_i50] = c3_b_inData_data[c3_b_inData_sizes[0] *
      c3_i50];
  }

  c3_y = NULL;
  if (!chartInstance->c3_delay_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_u_data, 0, 0U, 1U, 0U, 2,
      c3_u_sizes[0], c3_u_sizes[1]), FALSE);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_e_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_delay, const char_T *c3_identifier, real_T c3_y_data[15], int32_T
   c3_y_sizes[2])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_delay), &c3_thisId,
                        c3_y_data, c3_y_sizes);
  sf_mex_destroy(&c3_delay);
}

static void c3_f_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y_data[15],
   int32_T c3_y_sizes[2])
{
  int32_T c3_i51;
  uint32_T c3_uv0[2];
  int32_T c3_i52;
  static boolean_T c3_bv0[2] = { FALSE, TRUE };

  boolean_T c3_bv1[2];
  int32_T c3_tmp_sizes[2];
  real_T c3_tmp_data[15];
  int32_T c3_y;
  int32_T c3_b_y;
  int32_T c3_loop_ub;
  int32_T c3_i53;
  for (c3_i51 = 0; c3_i51 < 2; c3_i51++) {
    c3_uv0[c3_i51] = 1U + 14U * (uint32_T)c3_i51;
  }

  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_delay_not_empty = FALSE;
  } else {
    chartInstance->c3_delay_not_empty = TRUE;
    for (c3_i52 = 0; c3_i52 < 2; c3_i52++) {
      c3_bv1[c3_i52] = c3_bv0[c3_i52];
    }

    sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_u), c3_tmp_data, 1, 0, 0U, 1, 0U,
                     2, c3_bv1, c3_uv0, c3_tmp_sizes);
    c3_y_sizes[0] = 1;
    c3_y_sizes[1] = c3_tmp_sizes[1];
    c3_y = c3_y_sizes[0];
    c3_b_y = c3_y_sizes[1];
    c3_loop_ub = c3_tmp_sizes[0] * c3_tmp_sizes[1] - 1;
    for (c3_i53 = 0; c3_i53 <= c3_loop_ub; c3_i53++) {
      c3_y_data[c3_i53] = c3_tmp_data[c3_i53];
    }
  }

  sf_mex_destroy(&c3_u);
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, real_T c3_outData_data[15],
  int32_T c3_outData_sizes[2])
{
  const mxArray *c3_delay;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y_sizes[2];
  real_T c3_y_data[15];
  int32_T c3_loop_ub;
  int32_T c3_i54;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_delay = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_delay), &c3_thisId,
                        c3_y_data, c3_y_sizes);
  sf_mex_destroy(&c3_delay);
  c3_outData_sizes[0] = 1;
  c3_outData_sizes[1] = c3_y_sizes[1];
  c3_loop_ub = c3_y_sizes[1] - 1;
  for (c3_i54 = 0; c3_i54 <= c3_loop_ub; c3_i54++) {
    c3_outData_data[c3_outData_sizes[0] * c3_i54] = c3_y_data[c3_y_sizes[0] *
      c3_i54];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i55;
  real_T c3_b_inData[5];
  int32_T c3_i56;
  real_T c3_u[5];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i55 = 0; c3_i55 < 5; c3_i55++) {
    c3_b_inData[c3_i55] = (*(real_T (*)[5])c3_inData)[c3_i55];
  }

  for (c3_i56 = 0; c3_i56 < 5; c3_i56++) {
    c3_u[c3_i56] = c3_b_inData[c3_i56];
  }

  c3_y = NULL;
  if (!chartInstance->c3_yin_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 2, 1, 5), FALSE);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_g_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_yin, const char_T *c3_identifier, real_T c3_y[5])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_yin), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_yin);
}

static void c3_h_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5])
{
  real_T c3_dv7[5];
  int32_T c3_i57;
  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_yin_not_empty = FALSE;
  } else {
    chartInstance->c3_yin_not_empty = TRUE;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv7, 1, 0, 0U, 1, 0U, 2, 1,
                  5);
    for (c3_i57 = 0; c3_i57 < 5; c3_i57++) {
      c3_y[c3_i57] = c3_dv7[c3_i57];
    }
  }

  sf_mex_destroy(&c3_u);
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_yin;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[5];
  int32_T c3_i58;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_yin = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_yin), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_yin);
  for (c3_i58 = 0; c3_i58 < 5; c3_i58++) {
    (*(real_T (*)[5])c3_outData)[c3_i58] = c3_y[c3_i58];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i59;
  real_T c3_b_inData[5];
  int32_T c3_i60;
  real_T c3_u[5];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i59 = 0; c3_i59 < 5; c3_i59++) {
    c3_b_inData[c3_i59] = (*(real_T (*)[5])c3_inData)[c3_i59];
  }

  for (c3_i60 = 0; c3_i60 < 5; c3_i60++) {
    c3_u[c3_i60] = c3_b_inData[c3_i60];
  }

  c3_y = NULL;
  if (!chartInstance->c3_yin_d_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_i_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_yin_d, const char_T *c3_identifier, real_T c3_y[5])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_yin_d), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_yin_d);
}

static void c3_j_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5])
{
  real_T c3_dv8[5];
  int32_T c3_i61;
  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_yin_d_not_empty = FALSE;
  } else {
    chartInstance->c3_yin_d_not_empty = TRUE;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv8, 1, 0, 0U, 1, 0U, 1, 5);
    for (c3_i61 = 0; c3_i61 < 5; c3_i61++) {
      c3_y[c3_i61] = c3_dv8[c3_i61];
    }
  }

  sf_mex_destroy(&c3_u);
}

static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_yin_d;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[5];
  int32_T c3_i62;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_yin_d = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_yin_d), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_yin_d);
  for (c3_i62 = 0; c3_i62 < 5; c3_i62++) {
    (*(real_T (*)[5])c3_outData)[c3_i62] = c3_y[c3_i62];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  if (!chartInstance->c3_i_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static real_T c3_k_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_i, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_i), &c3_thisId);
  sf_mex_destroy(&c3_b_i);
  return c3_y;
}

static real_T c3_l_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d1;
  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_i_not_empty = FALSE;
  } else {
    chartInstance->c3_i_not_empty = TRUE;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d1, 1, 0, 0U, 0, 0U, 0);
    c3_y = c3_d1;
  }

  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_i;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_i = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_i), &c3_thisId);
  sf_mex_destroy(&c3_b_i);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i63;
  real_T c3_b_inData[5];
  int32_T c3_i64;
  real_T c3_u[5];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i63 = 0; c3_i63 < 5; c3_i63++) {
    c3_b_inData[c3_i63] = (*(real_T (*)[5])c3_inData)[c3_i63];
  }

  for (c3_i64 = 0; c3_i64 < 5; c3_i64++) {
    c3_u[c3_i64] = c3_b_inData[c3_i64];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_m_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_yout_delay, const char_T *c3_identifier, real_T c3_y[5])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_yout_delay), &c3_thisId,
                        c3_y);
  sf_mex_destroy(&c3_yout_delay);
}

static void c3_n_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5])
{
  real_T c3_dv9[5];
  int32_T c3_i65;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv9, 1, 0, 0U, 1, 0U, 1, 5);
  for (c3_i65 = 0; c3_i65 < 5; c3_i65++) {
    c3_y[c3_i65] = c3_dv9[c3_i65];
  }

  sf_mex_destroy(&c3_u);
}

static void c3_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_yout_delay;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y[5];
  int32_T c3_i66;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_yout_delay = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_yout_delay), &c3_thisId,
                        c3_y);
  sf_mex_destroy(&c3_yout_delay);
  for (c3_i66 = 0; c3_i66 < 5; c3_i66++) {
    (*(real_T (*)[5])c3_outData)[c3_i66] = c3_y[c3_i66];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_h_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C c3_u;
  const mxArray *c3_y = NULL;
  real_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  real_T c3_c_u;
  const mxArray *c3_c_y = NULL;
  int32_T c3_i67;
  real_T c3_d_u[5];
  const mxArray *c3_d_y = NULL;
  int32_T c3_i68;
  real_T c3_e_u[5];
  const mxArray *c3_e_y = NULL;
  int32_T c3_i69;
  real_T c3_f_u[20];
  const mxArray *c3_f_y = NULL;
  int32_T c3_i70;
  real_T c3_g_u[5];
  const mxArray *c3_g_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createstruct("structure", 2, 1, 1), FALSE);
  c3_b_u = c3_u.i;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_addfield(c3_y, c3_b_y, "i", "i", 0);
  c3_c_u = c3_u.count;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_addfield(c3_y, c3_c_y, "count", "count", 0);
  for (c3_i67 = 0; c3_i67 < 5; c3_i67++) {
    c3_d_u[c3_i67] = c3_u.yin[c3_i67];
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_d_u, 0, 0U, 1U, 0U, 2, 1, 5),
                FALSE);
  sf_mex_addfield(c3_y, c3_d_y, "yin", "yin", 0);
  for (c3_i68 = 0; c3_i68 < 5; c3_i68++) {
    c3_e_u[c3_i68] = c3_u.yin_d[c3_i68];
  }

  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_e_u, 0, 0U, 1U, 0U, 2, 5, 1),
                FALSE);
  sf_mex_addfield(c3_y, c3_e_y, "yin_d", "yin_d", 0);
  for (c3_i69 = 0; c3_i69 < 20; c3_i69++) {
    c3_f_u[c3_i69] = c3_u.delay1[c3_i69];
  }

  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_f_u, 0, 0U, 1U, 0U, 2, 4, 5),
                FALSE);
  sf_mex_addfield(c3_y, c3_f_y, "delay1", "delay1", 0);
  for (c3_i70 = 0; c3_i70 < 5; c3_i70++) {
    c3_g_u[c3_i70] = c3_u.ranD[c3_i70];
  }

  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_g_u, 0, 0U, 1U, 0U, 2, 1, 5),
                FALSE);
  sf_mex_addfield(c3_y, c3_g_y, "ranD", "ranD", 0);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_o_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
   c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C *c3_y)
{
  emlrtMsgIdentifier c3_thisId;
  static const char * c3_fieldNames[6] = { "i", "count", "yin", "yin_d",
    "delay1", "ranD" };

  c3_thisId.fParent = c3_parentId;
  sf_mex_check_struct(c3_parentId, c3_u, 6, c3_fieldNames, 0U, 0);
  c3_thisId.fIdentifier = "i";
  c3_y->i = c3_p_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c3_u,
    "i", "i", 0)), &c3_thisId);
  c3_thisId.fIdentifier = "count";
  c3_y->count = c3_p_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield
    (c3_u, "count", "count", 0)), &c3_thisId);
  c3_thisId.fIdentifier = "yin";
  c3_q_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c3_u, "yin",
    "yin", 0)), &c3_thisId, c3_y->yin);
  c3_thisId.fIdentifier = "yin_d";
  c3_r_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c3_u, "yin_d",
    "yin_d", 0)), &c3_thisId, c3_y->yin_d);
  c3_thisId.fIdentifier = "delay1";
  c3_s_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c3_u, "delay1",
    "delay1", 0)), &c3_thisId, c3_y->delay1);
  c3_thisId.fIdentifier = "ranD";
  c3_q_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getfield(c3_u, "ranD",
    "ranD", 0)), &c3_thisId, c3_y->ranD);
  sf_mex_destroy(&c3_u);
}

static real_T c3_p_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d2;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d2, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d2;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_q_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5])
{
  real_T c3_dv10[5];
  int32_T c3_i71;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv10, 1, 0, 0U, 1, 0U, 2, 1, 5);
  for (c3_i71 = 0; c3_i71 < 5; c3_i71++) {
    c3_y[c3_i71] = c3_dv10[c3_i71];
  }

  sf_mex_destroy(&c3_u);
}

static void c3_r_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[5])
{
  real_T c3_dv11[5];
  int32_T c3_i72;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv11, 1, 0, 0U, 1, 0U, 2, 5, 1);
  for (c3_i72 = 0; c3_i72 < 5; c3_i72++) {
    c3_y[c3_i72] = c3_dv11[c3_i72];
  }

  sf_mex_destroy(&c3_u);
}

static void c3_s_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, real_T c3_y[20])
{
  real_T c3_dv12[20];
  int32_T c3_i73;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_dv12, 1, 0, 0U, 1, 0U, 2, 4, 5);
  for (c3_i73 = 0; c3_i73 < 20; c3_i73++) {
    c3_y[c3_i73] = c3_dv12[c3_i73];
  }

  sf_mex_destroy(&c3_u);
}

static void c3_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_structure;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C c3_y;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_structure = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_o_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_structure), &c3_thisId,
                        &c3_y);
  sf_mex_destroy(&c3_b_structure);
  *(c3_struct_CbZ2Cy8hhEwWOeXy5fCq5C *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_i_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i74;
  real_T c3_b_inData[15];
  int32_T c3_i75;
  real_T c3_u[15];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i74 = 0; c3_i74 < 15; c3_i74++) {
    c3_b_inData[c3_i74] = (*(real_T (*)[15])c3_inData)[c3_i74];
  }

  for (c3_i75 = 0; c3_i75 < 15; c3_i75++) {
    c3_u[c3_i75] = c3_b_inData[c3_i75];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 1, 15), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static const mxArray *c3_j_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i76;
  real_T c3_b_inData[10];
  int32_T c3_i77;
  real_T c3_u[10];
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i76 = 0; c3_i76 < 10; c3_i76++) {
    c3_b_inData[c3_i76] = (*(real_T (*)[10])c3_inData)[c3_i76];
  }

  for (c3_i77 = 0; c3_i77 < 10; c3_i77++) {
    c3_u[c3_i77] = c3_b_inData[c3_i77];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 0, 0U, 1U, 0U, 1, 10), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static const mxArray *c3_k_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static void c3_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_p_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray
  *sf_c3_CoupledTanks_WCPS_v2_DoubleSD_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), FALSE);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_l_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static int32_T c3_t_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i78;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i78, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i78;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_j_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_t_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static uint8_T c3_u_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_b_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD, const char_T
   *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_v_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD), &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_CoupledTanks_WCPS_v2_DoubleSD);
  return c3_y;
}

static uint8_T c3_v_emlrt_marshallIn
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info
  (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c3_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(883162532U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1679711372U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2618791948U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3742821285U);
}

mxArray *sf_c3_CoupledTanks_WCPS_v2_DoubleSD_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("0iAYAKx6u6OhTBy1AETyaB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(10);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(15);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(13));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(5);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_CoupledTanks_WCPS_v2_DoubleSD_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray *sf_get_sim_state_info_c3_CoupledTanks_WCPS_v2_DoubleSD
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[5],T\"yout_delay\",},{M[4],M[0],T\"delay\",S'l','i','p'{{M1x2[332 337],M[0],}}},{M[4],M[0],T\"i\",S'l','i','p'{{M1x2[308 309],M[0],}}},{M[4],M[0],T\"num\",S'l','i','p'{{M1x2[346 349],M[0],}}},{M[4],M[0],T\"yin\",S'l','i','p'{{M1x2[328 331],M[0],}}},{M[4],M[0],T\"yin_all\",S'l','i','p'{{M1x2[338 345],M[0],}}},{M[4],M[0],T\"yin_d\",S'l','i','p'{{M1x2[310 315],M[0],}}},{M[8],M[0],T\"is_active_c3_CoupledTanks_WCPS_v2_DoubleSD\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
    chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,
           3,
           1,
           1,
           4,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation
            (_CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"yout");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ydelay");
          _SFD_SET_DATA_PROPS(2,2,0,1,"yout_delay");
          _SFD_SET_DATA_PROPS(3,10,0,0,"structure");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,3,0,0,0,2,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1305);
        _SFD_CV_INIT_EML_IF(0,1,0,464,479,-1,722);
        _SFD_CV_INIT_EML_IF(0,1,1,962,981,1036,1255);
        _SFD_CV_INIT_EML_IF(0,1,2,1049,1057,-1,1239);
        _SFD_CV_INIT_EML_FOR(0,1,0,832,845,892);
        _SFD_CV_INIT_EML_FOR(0,1,1,948,958,1259);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 10;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_j_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 15;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_i_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 5;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_g_sf_marshallOut,(MexInFcnForType)
            c3_g_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(3,SF_STRUCT,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_h_sf_marshallOut,(MexInFcnForType)c3_h_sf_marshallIn);

        {
          real_T (*c3_yout)[10];
          real_T (*c3_ydelay)[15];
          real_T (*c3_yout_delay)[5];
          c3_yout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S,
            1);
          c3_ydelay = (real_T (*)[15])ssGetInputPortSignal(chartInstance->S, 1);
          c3_yout = (real_T (*)[10])ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c3_yout);
          _SFD_SET_DATA_VALUE_PTR(1U, *c3_ydelay);
          _SFD_SET_DATA_VALUE_PTR(2U, *c3_yout_delay);
          _SFD_SET_DATA_VALUE_PTR(3U, &chartInstance->c3_structure);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "ZMcQJUJPqrvt9fps0F1q2C";
}

static void sf_opaque_initialize_c3_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
  initialize_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  enable_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  disable_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  sf_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_CoupledTanks_WCPS_v2_DoubleSD();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD(SimStruct*
  S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_CoupledTanks_WCPS_v2_DoubleSD();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD(S);
}

static void sf_opaque_set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD(SimStruct*
  S, const mxArray *st)
{
  sf_internal_set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD(S, st);
}

static void sf_opaque_terminate_c3_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_CoupledTanks_WCPS_v2_DoubleSD_optimization_info();
    }

    finalize_c3_CoupledTanks_WCPS_v2_DoubleSD
      ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_CoupledTanks_WCPS_v2_DoubleSD
      ((SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  /* Actual parameters from chart:
     structure
   */
  const char_T *rtParamNames[] = { "structure" };

  ssSetNumRunTimeParams(S,ssGetSFcnParamsCount(S));
  ssRegDlgParamAsRunTimeParam(S, 0, 0, rtParamNames[0],
    sf_get_param_data_type_id(S,0));
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_CoupledTanks_WCPS_v2_DoubleSD_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,3,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4067690160U));
  ssSetChecksum1(S,(2640726731U));
  ssSetChecksum2(S,(39642117U));
  ssSetChecksum3(S,(2650572095U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c3_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)utMalloc
    (sizeof(SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc3_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c3_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

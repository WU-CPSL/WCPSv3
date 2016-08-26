/* Include files */

#include <stddef.h>
#include "blas.h"
#include "CoupledTanks_WCPS_v2_DoubleSD_sfun.h"
#include "c4_CoupledTanks_WCPS_v2_DoubleSD.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "CoupledTanks_WCPS_v2_DoubleSD_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c4_debug_family_names[14] = { "actnum", "step_count", "kk",
  "j", "nargin", "nargout", "uout", "udelay", "uout_delay", "uin_d", "uin",
  "delay", "uin_all", "numAct" };

/* Function Declarations */
static void initialize_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void initialize_params_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void enable_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void disable_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void c4_update_debugger_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_st);
static void finalize_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void sf_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void initSimStructsc4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void registerMessagesc4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static real_T c4_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_numAct, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_c_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_uin_all, const char_T *c4_identifier, real_T c4_y[200002]);
static void c4_d_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[200002]);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_e_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_delay, const char_T *c4_identifier, real_T c4_y[15]);
static void c4_f_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[15]);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_g_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_uin, const char_T *c4_identifier, real_T c4_y[2]);
static void c4_h_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[2]);
static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_i_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_uin_d, const char_T *c4_identifier, real_T c4_y[2]);
static void c4_j_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[2]);
static void c4_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_f_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_k_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_uout_delay, const char_T *c4_identifier, real_T c4_y[2]);
static void c4_l_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[2]);
static void c4_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_g_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static const mxArray *c4_h_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static real_T c4_m_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_i_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static int32_T c4_n_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static uint8_T c4_o_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD, const char_T
   *c4_identifier);
static uint8_T c4_p_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void init_dsm_address_info
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_i_not_empty = FALSE;
  chartInstance->c4_uin_d_not_empty = FALSE;
  chartInstance->c4_uin_not_empty = FALSE;
  chartInstance->c4_delay_not_empty = FALSE;
  chartInstance->c4_uin_all_not_empty = FALSE;
  chartInstance->c4_numAct_not_empty = FALSE;
  chartInstance->c4_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD = 0U;
}

static void initialize_params_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void enable_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_update_debugger_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  int32_T c4_i0;
  real_T c4_u[2];
  const mxArray *c4_b_y = NULL;
  int32_T c4_i1;
  real_T c4_b_u[15];
  const mxArray *c4_c_y = NULL;
  real_T c4_hoistedGlobal;
  real_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i2;
  real_T c4_d_u[2];
  const mxArray *c4_e_y = NULL;
  int32_T c4_i3;
  static real_T c4_e_u[200002];
  const mxArray *c4_f_y = NULL;
  int32_T c4_i4;
  real_T c4_f_u[2];
  const mxArray *c4_g_y = NULL;
  uint8_T c4_b_hoistedGlobal;
  uint8_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  real_T (*c4_uout_delay)[2];
  c4_uout_delay = (real_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(7), FALSE);
  for (c4_i0 = 0; c4_i0 < 2; c4_i0++) {
    c4_u[c4_i0] = (*c4_uout_delay)[c4_i0];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 1, 2), FALSE);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  for (c4_i1 = 0; c4_i1 < 15; c4_i1++) {
    c4_b_u[c4_i1] = chartInstance->c4_delay[c4_i1];
  }

  c4_c_y = NULL;
  if (!chartInstance->c4_delay_not_empty) {
    sf_mex_assign(&c4_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_u, 0, 0U, 1U, 0U, 2, 1, 15),
                  FALSE);
  }

  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_hoistedGlobal = chartInstance->c4_numAct;
  c4_c_u = c4_hoistedGlobal;
  c4_d_y = NULL;
  if (!chartInstance->c4_numAct_not_empty) {
    sf_mex_assign(&c4_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_setcell(c4_y, 2, c4_d_y);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_d_u[c4_i2] = chartInstance->c4_uin[c4_i2];
  }

  c4_e_y = NULL;
  if (!chartInstance->c4_uin_not_empty) {
    sf_mex_assign(&c4_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_d_u, 0, 0U, 1U, 0U, 2, 1, 2),
                  FALSE);
  }

  sf_mex_setcell(c4_y, 3, c4_e_y);
  for (c4_i3 = 0; c4_i3 < 200002; c4_i3++) {
    c4_e_u[c4_i3] = chartInstance->c4_uin_all[c4_i3];
  }

  c4_f_y = NULL;
  if (!chartInstance->c4_uin_all_not_empty) {
    sf_mex_assign(&c4_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_e_u, 0, 0U, 1U, 0U, 2, 100001,
      2), FALSE);
  }

  sf_mex_setcell(c4_y, 4, c4_f_y);
  for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
    c4_f_u[c4_i4] = chartInstance->c4_uin_d[c4_i4];
  }

  c4_g_y = NULL;
  if (!chartInstance->c4_uin_d_not_empty) {
    sf_mex_assign(&c4_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_f_u, 0, 0U, 1U, 0U, 1, 2),
                  FALSE);
  }

  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_b_hoistedGlobal =
    chartInstance->c4_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD;
  c4_g_u = c4_b_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 6, c4_h_y);
  sf_mex_assign(&c4_st, c4_y, FALSE);
  return c4_st;
}

static void set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T c4_dv0[2];
  int32_T c4_i5;
  real_T c4_dv1[15];
  int32_T c4_i6;
  real_T c4_dv2[2];
  int32_T c4_i7;
  static real_T c4_dv3[200002];
  int32_T c4_i8;
  real_T c4_dv4[2];
  int32_T c4_i9;
  real_T (*c4_uout_delay)[2];
  c4_uout_delay = (real_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_doneDoubleBufferReInit = TRUE;
  c4_u = sf_mex_dup(c4_st);
  c4_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)),
                        "uout_delay", c4_dv0);
  for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
    (*c4_uout_delay)[c4_i5] = c4_dv0[c4_i5];
  }

  c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "delay", c4_dv1);
  for (c4_i6 = 0; c4_i6 < 15; c4_i6++) {
    chartInstance->c4_delay[c4_i6] = c4_dv1[c4_i6];
  }

  chartInstance->c4_numAct = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 2)), "numAct");
  c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 3)),
                        "uin", c4_dv2);
  for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
    chartInstance->c4_uin[c4_i7] = c4_dv2[c4_i7];
  }

  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 4)),
                        "uin_all", c4_dv3);
  for (c4_i8 = 0; c4_i8 < 200002; c4_i8++) {
    chartInstance->c4_uin_all[c4_i8] = c4_dv3[c4_i8];
  }

  c4_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 5)),
                        "uin_d", c4_dv4);
  for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
    chartInstance->c4_uin_d[c4_i9] = c4_dv4[c4_i9];
  }

  chartInstance->c4_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD =
    c4_o_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 6)),
    "is_active_c4_CoupledTanks_WCPS_v2_DoubleSD");
  sf_mex_destroy(&c4_u);
  c4_update_debugger_state_c4_CoupledTanks_WCPS_v2_DoubleSD(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void finalize_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void sf_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  real_T c4_uout[2];
  int32_T c4_i14;
  real_T c4_udelay[15];
  uint32_T c4_debug_family_var_map[14];
  real_T c4_actnum;
  real_T c4_step_count;
  real_T c4_kk;
  real_T c4_j;
  real_T c4_nargin = 2.0;
  real_T c4_nargout = 1.0;
  real_T c4_uout_delay[2];
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_b_kk;
  int32_T c4_b_j;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  real_T (*c4_b_uout_delay)[2];
  real_T (*c4_b_udelay)[15];
  real_T (*c4_b_uout)[2];
  c4_b_udelay = (real_T (*)[15])ssGetInputPortSignal(chartInstance->S, 1);
  c4_b_uout_delay = (real_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_b_uout = (real_T (*)[2])ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
    _SFD_DATA_RANGE_CHECK((*c4_b_uout)[c4_i10], 0U);
  }

  for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
    _SFD_DATA_RANGE_CHECK((*c4_b_uout_delay)[c4_i11], 1U);
  }

  for (c4_i12 = 0; c4_i12 < 15; c4_i12++) {
    _SFD_DATA_RANGE_CHECK((*c4_b_udelay)[c4_i12], 2U);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
    c4_uout[c4_i13] = (*c4_b_uout)[c4_i13];
  }

  for (c4_i14 = 0; c4_i14 < 15; c4_i14++) {
    c4_udelay[c4_i14] = (*c4_b_udelay)[c4_i14];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 14U, 14U, c4_debug_family_names,
    c4_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_actnum, 0U, c4_h_sf_marshallOut,
    c4_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c4_step_count, 1U, c4_h_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_kk, 2U, c4_h_sf_marshallOut,
    c4_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_j, 3U, c4_h_sf_marshallOut,
    c4_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_nargin, 4U, c4_h_sf_marshallOut,
    c4_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_nargout, 5U, c4_h_sf_marshallOut,
    c4_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c4_uout, 6U, c4_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c4_udelay, 7U, c4_g_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c4_uout_delay, 8U, c4_f_sf_marshallOut,
    c4_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c4_uin_d, 9U,
    c4_e_sf_marshallOut, c4_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c4_uin, 10U,
    c4_d_sf_marshallOut, c4_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c4_delay, 11U,
    c4_c_sf_marshallOut, c4_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c4_uin_all, 12U,
    c4_b_sf_marshallOut, c4_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c4_numAct, 13U,
    c4_sf_marshallOut, c4_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 14);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 15);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 16);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 18);
  c4_actnum = 2.0;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 19);
  c4_step_count = 100000.0;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 22);
  if (CV_EML_IF(0, 1, 0, !chartInstance->c4_uin_not_empty)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 24);
    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      chartInstance->c4_uin[c4_i15] = 0.0;
    }

    chartInstance->c4_uin_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 25);
    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      chartInstance->c4_uin_d[c4_i16] = 0.0;
    }

    chartInstance->c4_uin_d_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 26);
    for (c4_i17 = 0; c4_i17 < 200002; c4_i17++) {
      chartInstance->c4_uin_all[c4_i17] = 0.0;
    }

    chartInstance->c4_uin_all_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 28);
    for (c4_i18 = 0; c4_i18 < 15; c4_i18++) {
      chartInstance->c4_delay[c4_i18] = 0.0;
    }

    chartInstance->c4_delay_not_empty = TRUE;
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 29);
    for (c4_i19 = 0; c4_i19 < 15; c4_i19++) {
      chartInstance->c4_delay[c4_i19] = c4_udelay[c4_i19];
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 31);
    chartInstance->c4_numAct = 0.0;
    chartInstance->c4_numAct_not_empty = TRUE;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 37);
  chartInstance->c4_numAct++;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 40);
  for (c4_i20 = 0; c4_i20 < 15; c4_i20++) {
    chartInstance->c4_delay[c4_i20] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 41);
  for (c4_i21 = 0; c4_i21 < 15; c4_i21++) {
    chartInstance->c4_delay[c4_i21] = c4_udelay[c4_i21];
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 44);
  c4_kk = 1.0;
  c4_b_kk = 0;
  while (c4_b_kk < 2) {
    c4_kk = 1.0 + (real_T)c4_b_kk;
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 45);
    chartInstance->c4_uin_all[((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
      "uin_all", (int32_T)_SFD_INTEGER_CHECK("numAct", chartInstance->c4_numAct),
      1, 100001, 1, 0) + 100001 * ((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
      "uin_all", (int32_T)_SFD_INTEGER_CHECK("kk", c4_kk), 1, 2, 2, 0) - 1)) - 1]
      = c4_uout[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("uout", (int32_T)
      _SFD_INTEGER_CHECK("kk", c4_kk), 1, 2, 1, 0) - 1];
    c4_b_kk++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 49);
  c4_j = 1.0;
  c4_b_j = 0;
  while (c4_b_j < 2) {
    c4_j = 1.0 + (real_T)c4_b_j;
    CV_EML_FOR(0, 1, 1, 1);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 50);
    if (CV_EML_IF(0, 1, 1, chartInstance->c4_delay[(int32_T)(real_T)
                  _SFD_EML_ARRAY_BOUNDS_CHECK("delay", (int32_T)
          _SFD_INTEGER_CHECK("j+11", c4_j + 11.0), 1, 15, 2, 0) - 1] != 88.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 51);
      chartInstance->c4_uin[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("uin",
        (int32_T)_SFD_INTEGER_CHECK("j", c4_j), 1, 2, 1, 0) - 1] =
        chartInstance->c4_uin_all[((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
        "uin_all", (int32_T)_SFD_INTEGER_CHECK("numAct",
        chartInstance->c4_numAct), 1, 100001, 1, 0) + 100001 * ((int32_T)(real_T)
        _SFD_EML_ARRAY_BOUNDS_CHECK("uin_all", (int32_T)_SFD_INTEGER_CHECK("j",
        c4_j), 1, 2, 2, 0) - 1)) - 1];
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 53);
      if (CV_EML_IF(0, 1, 2, chartInstance->c4_numAct > 1.0)) {
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 55);
        chartInstance->c4_uin[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("uin",
          (int32_T)_SFD_INTEGER_CHECK("j", c4_j), 1, 2, 1, 0) - 1] =
          chartInstance->c4_uin_all[((int32_T)(real_T)
          _SFD_EML_ARRAY_BOUNDS_CHECK("uin_all", (int32_T)_SFD_INTEGER_CHECK(
          "numAct-1", chartInstance->c4_numAct - 1.0), 1, 100001, 1, 0) + 100001
          * ((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("uin_all", (int32_T)
          _SFD_INTEGER_CHECK("j", c4_j), 1, 2, 2, 0) - 1)) - 1];
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 56);
        chartInstance->c4_uin_all[((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK(
          "uin_all", (int32_T)_SFD_INTEGER_CHECK("numAct",
          chartInstance->c4_numAct), 1, 100001, 1, 0) + 100001 * ((int32_T)
          (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("uin_all", (int32_T)
          _SFD_INTEGER_CHECK("j", c4_j), 1, 2, 2, 0) - 1)) - 1] =
          chartInstance->c4_uin_all[((int32_T)(real_T)
          _SFD_EML_ARRAY_BOUNDS_CHECK("uin_all", (int32_T)_SFD_INTEGER_CHECK(
          "numAct-1", chartInstance->c4_numAct - 1.0), 1, 100001, 1, 0) + 100001
          * ((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("uin_all", (int32_T)
          _SFD_INTEGER_CHECK("j", c4_j), 1, 2, 2, 0) - 1)) - 1];
      }
    }

    c4_b_j++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 1, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 62);
  for (c4_i22 = 0; c4_i22 < 2; c4_i22++) {
    chartInstance->c4_uin_d[c4_i22] = chartInstance->c4_uin[c4_i22];
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 64);
  for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
    c4_uout_delay[c4_i23] = chartInstance->c4_uin_d[c4_i23];
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, -64);
  _SFD_SYMBOL_SCOPE_POP();
  for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
    (*c4_b_uout_delay)[c4_i24] = c4_uout_delay[c4_i24];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_CoupledTanks_WCPS_v2_DoubleSDMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
}

static void initSimStructsc4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void registerMessagesc4_CoupledTanks_WCPS_v2_DoubleSD
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber)
{
}

static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  real_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  if (!chartInstance->c4_numAct_not_empty) {
    sf_mex_assign(&c4_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static real_T c4_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_numAct, const char_T *c4_identifier)
{
  real_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_numAct),
    &c4_thisId);
  sf_mex_destroy(&c4_b_numAct);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d0;
  if (mxIsEmpty(c4_u)) {
    chartInstance->c4_numAct_not_empty = FALSE;
  } else {
    chartInstance->c4_numAct_not_empty = TRUE;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d0, 1, 0, 0U, 0, 0U, 0);
    c4_y = c4_d0;
  }

  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_numAct;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_b_numAct = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_numAct),
    &c4_thisId);
  sf_mex_destroy(&c4_b_numAct);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  static real_T c4_b_inData[200002];
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i30;
  static real_T c4_u[200002];
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_i25 = 0;
  for (c4_i26 = 0; c4_i26 < 2; c4_i26++) {
    for (c4_i27 = 0; c4_i27 < 100001; c4_i27++) {
      c4_b_inData[c4_i27 + c4_i25] = (*(real_T (*)[200002])c4_inData)[c4_i27 +
        c4_i25];
    }

    c4_i25 += 100001;
  }

  c4_i28 = 0;
  for (c4_i29 = 0; c4_i29 < 2; c4_i29++) {
    for (c4_i30 = 0; c4_i30 < 100001; c4_i30++) {
      c4_u[c4_i30 + c4_i28] = c4_b_inData[c4_i30 + c4_i28];
    }

    c4_i28 += 100001;
  }

  c4_y = NULL;
  if (!chartInstance->c4_uin_all_not_empty) {
    sf_mex_assign(&c4_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 2, 100001, 2),
                  FALSE);
  }

  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_c_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_uin_all, const char_T *c4_identifier, real_T c4_y[200002])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_uin_all), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_b_uin_all);
}

static void c4_d_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[200002])
{
  static real_T c4_dv5[200002];
  int32_T c4_i31;
  if (mxIsEmpty(c4_u)) {
    chartInstance->c4_uin_all_not_empty = FALSE;
  } else {
    chartInstance->c4_uin_all_not_empty = TRUE;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv5, 1, 0, 0U, 1, 0U, 2,
                  100001, 2);
    for (c4_i31 = 0; c4_i31 < 200002; c4_i31++) {
      c4_y[c4_i31] = c4_dv5[c4_i31];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_uin_all;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  static real_T c4_y[200002];
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_b_uin_all = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_uin_all), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_b_uin_all);
  c4_i32 = 0;
  for (c4_i33 = 0; c4_i33 < 2; c4_i33++) {
    for (c4_i34 = 0; c4_i34 < 100001; c4_i34++) {
      (*(real_T (*)[200002])c4_outData)[c4_i34 + c4_i32] = c4_y[c4_i34 + c4_i32];
    }

    c4_i32 += 100001;
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i35;
  real_T c4_b_inData[15];
  int32_T c4_i36;
  real_T c4_u[15];
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i35 = 0; c4_i35 < 15; c4_i35++) {
    c4_b_inData[c4_i35] = (*(real_T (*)[15])c4_inData)[c4_i35];
  }

  for (c4_i36 = 0; c4_i36 < 15; c4_i36++) {
    c4_u[c4_i36] = c4_b_inData[c4_i36];
  }

  c4_y = NULL;
  if (!chartInstance->c4_delay_not_empty) {
    sf_mex_assign(&c4_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 2, 1, 15),
                  FALSE);
  }

  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_e_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_delay, const char_T *c4_identifier, real_T c4_y[15])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_delay), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_delay);
}

static void c4_f_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[15])
{
  real_T c4_dv6[15];
  int32_T c4_i37;
  if (mxIsEmpty(c4_u)) {
    chartInstance->c4_delay_not_empty = FALSE;
  } else {
    chartInstance->c4_delay_not_empty = TRUE;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv6, 1, 0, 0U, 1, 0U, 2, 1,
                  15);
    for (c4_i37 = 0; c4_i37 < 15; c4_i37++) {
      c4_y[c4_i37] = c4_dv6[c4_i37];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_delay;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[15];
  int32_T c4_i38;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_b_delay = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_delay), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_delay);
  for (c4_i38 = 0; c4_i38 < 15; c4_i38++) {
    (*(real_T (*)[15])c4_outData)[c4_i38] = c4_y[c4_i38];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i39;
  real_T c4_b_inData[2];
  int32_T c4_i40;
  real_T c4_u[2];
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i39 = 0; c4_i39 < 2; c4_i39++) {
    c4_b_inData[c4_i39] = (*(real_T (*)[2])c4_inData)[c4_i39];
  }

  for (c4_i40 = 0; c4_i40 < 2; c4_i40++) {
    c4_u[c4_i40] = c4_b_inData[c4_i40];
  }

  c4_y = NULL;
  if (!chartInstance->c4_uin_not_empty) {
    sf_mex_assign(&c4_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 2, 1, 2), FALSE);
  }

  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_g_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_uin, const char_T *c4_identifier, real_T c4_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_uin), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_uin);
}

static void c4_h_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[2])
{
  real_T c4_dv7[2];
  int32_T c4_i41;
  if (mxIsEmpty(c4_u)) {
    chartInstance->c4_uin_not_empty = FALSE;
  } else {
    chartInstance->c4_uin_not_empty = TRUE;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv7, 1, 0, 0U, 1, 0U, 2, 1,
                  2);
    for (c4_i41 = 0; c4_i41 < 2; c4_i41++) {
      c4_y[c4_i41] = c4_dv7[c4_i41];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_uin;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[2];
  int32_T c4_i42;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_b_uin = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_uin), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_uin);
  for (c4_i42 = 0; c4_i42 < 2; c4_i42++) {
    (*(real_T (*)[2])c4_outData)[c4_i42] = c4_y[c4_i42];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i43;
  real_T c4_b_inData[2];
  int32_T c4_i44;
  real_T c4_u[2];
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i43 = 0; c4_i43 < 2; c4_i43++) {
    c4_b_inData[c4_i43] = (*(real_T (*)[2])c4_inData)[c4_i43];
  }

  for (c4_i44 = 0; c4_i44 < 2; c4_i44++) {
    c4_u[c4_i44] = c4_b_inData[c4_i44];
  }

  c4_y = NULL;
  if (!chartInstance->c4_uin_d_not_empty) {
    sf_mex_assign(&c4_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 1, 2), FALSE);
  }

  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_i_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_uin_d, const char_T *c4_identifier, real_T c4_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_uin_d), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_uin_d);
}

static void c4_j_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[2])
{
  real_T c4_dv8[2];
  int32_T c4_i45;
  if (mxIsEmpty(c4_u)) {
    chartInstance->c4_uin_d_not_empty = FALSE;
  } else {
    chartInstance->c4_uin_d_not_empty = TRUE;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv8, 1, 0, 0U, 1, 0U, 1, 2);
    for (c4_i45 = 0; c4_i45 < 2; c4_i45++) {
      c4_y[c4_i45] = c4_dv8[c4_i45];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_uin_d;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[2];
  int32_T c4_i46;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_b_uin_d = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_uin_d), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_uin_d);
  for (c4_i46 = 0; c4_i46 < 2; c4_i46++) {
    (*(real_T (*)[2])c4_outData)[c4_i46] = c4_y[c4_i46];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_f_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i47;
  real_T c4_b_inData[2];
  int32_T c4_i48;
  real_T c4_u[2];
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i47 = 0; c4_i47 < 2; c4_i47++) {
    c4_b_inData[c4_i47] = (*(real_T (*)[2])c4_inData)[c4_i47];
  }

  for (c4_i48 = 0; c4_i48 < 2; c4_i48++) {
    c4_u[c4_i48] = c4_b_inData[c4_i48];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 1, 2), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_k_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_uout_delay, const char_T *c4_identifier, real_T c4_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_uout_delay), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_uout_delay);
}

static void c4_l_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[2])
{
  real_T c4_dv9[2];
  int32_T c4_i49;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv9, 1, 0, 0U, 1, 0U, 1, 2);
  for (c4_i49 = 0; c4_i49 < 2; c4_i49++) {
    c4_y[c4_i49] = c4_dv9[c4_i49];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_uout_delay;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[2];
  int32_T c4_i50;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_uout_delay = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_uout_delay), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_uout_delay);
  for (c4_i50 = 0; c4_i50 < 2; c4_i50++) {
    (*(real_T (*)[2])c4_outData)[c4_i50] = c4_y[c4_i50];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_g_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i51;
  real_T c4_b_inData[15];
  int32_T c4_i52;
  real_T c4_u[15];
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i51 = 0; c4_i51 < 15; c4_i51++) {
    c4_b_inData[c4_i51] = (*(real_T (*)[15])c4_inData)[c4_i51];
  }

  for (c4_i52 = 0; c4_i52 < 15; c4_i52++) {
    c4_u[c4_i52] = c4_b_inData[c4_i52];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 1, 15), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static const mxArray *c4_h_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  real_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static real_T c4_m_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d1;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d1, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d1;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_nargout;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_nargout = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nargout), &c4_thisId);
  sf_mex_destroy(&c4_nargout);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

const mxArray
  *sf_c4_CoupledTanks_WCPS_v2_DoubleSD_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), FALSE);
  return c4_nameCaptureInfo;
}

static const mxArray *c4_i_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static int32_T c4_n_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i53;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i53, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i53;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_sfEvent;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_y;
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c4_b_sfEvent = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  *(int32_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static uint8_T c4_o_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_b_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD, const char_T
   *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_p_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_CoupledTanks_WCPS_v2_DoubleSD);
  return c4_y;
}

static uint8_T c4_p_emlrt_marshallIn
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u0, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void init_dsm_address_info
  (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
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

void sf_c4_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3723960546U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2069464094U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3816025024U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1512491779U);
}

mxArray *sf_c4_CoupledTanks_WCPS_v2_DoubleSD_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("dy38S1lc8OySY6YrfvF2oE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
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
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
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

mxArray *sf_c4_CoupledTanks_WCPS_v2_DoubleSD_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray *sf_get_sim_state_info_c4_CoupledTanks_WCPS_v2_DoubleSD
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[5],T\"uout_delay\",},{M[4],M[0],T\"delay\",S'l','i','p'{{M1x2[323 328],M[0],}}},{M[4],M[0],T\"numAct\",S'l','i','p'{{M1x2[337 343],M[0],}}},{M[4],M[0],T\"uin\",S'l','i','p'{{M1x2[319 322],M[0],}}},{M[4],M[0],T\"uin_all\",S'l','i','p'{{M1x2[329 336],M[0],}}},{M[4],M[0],T\"uin_d\",S'l','i','p'{{M1x2[301 306],M[0],}}},{M[8],M[0],T\"is_active_c4_CoupledTanks_WCPS_v2_DoubleSD\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
    chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,
           4,
           1,
           1,
           3,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"uout");
          _SFD_SET_DATA_PROPS(1,2,0,1,"uout_delay");
          _SFD_SET_DATA_PROPS(2,1,1,0,"udelay");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1514);
        _SFD_CV_INIT_EML_IF(0,1,0,460,475,-1,696);
        _SFD_CV_INIT_EML_IF(0,1,1,956,976,1034,1265);
        _SFD_CV_INIT_EML_IF(0,1,2,1047,1058,-1,1249);
        _SFD_CV_INIT_EML_FOR(0,1,0,835,848,886);
        _SFD_CV_INIT_EML_FOR(0,1,1,942,952,1269);
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
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_f_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_f_sf_marshallOut,(MexInFcnForType)
            c4_f_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 15;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_g_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          real_T (*c4_uout)[2];
          real_T (*c4_uout_delay)[2];
          real_T (*c4_udelay)[15];
          c4_udelay = (real_T (*)[15])ssGetInputPortSignal(chartInstance->S, 1);
          c4_uout_delay = (real_T (*)[2])ssGetOutputPortSignal(chartInstance->S,
            1);
          c4_uout = (real_T (*)[2])ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c4_uout);
          _SFD_SET_DATA_VALUE_PTR(1U, *c4_uout_delay);
          _SFD_SET_DATA_VALUE_PTR(2U, *c4_udelay);
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
  return "VjtQEgfXJQvq8eJal2F8p";
}

static void sf_opaque_initialize_c4_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
  initialize_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  enable_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  disable_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  sf_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_CoupledTanks_WCPS_v2_DoubleSD();/* state var info */
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

extern void sf_internal_set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD(SimStruct*
  S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_CoupledTanks_WCPS_v2_DoubleSD();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD(S);
}

static void sf_opaque_set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD(SimStruct*
  S, const mxArray *st)
{
  sf_internal_set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD(S, st);
}

static void sf_opaque_terminate_c4_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_CoupledTanks_WCPS_v2_DoubleSD_optimization_info();
    }

    finalize_c4_CoupledTanks_WCPS_v2_DoubleSD
      ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_CoupledTanks_WCPS_v2_DoubleSD
      ((SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_CoupledTanks_WCPS_v2_DoubleSD_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,4,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,4);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,4,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,4,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3584332118U));
  ssSetChecksum1(S,(3708931499U));
  ssSetChecksum2(S,(1323428382U));
  ssSetChecksum3(S,(1459886483U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c4_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c4_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)utMalloc
    (sizeof(SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc4_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_CoupledTanks_WCPS_v2_DoubleSD;
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

void c4_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

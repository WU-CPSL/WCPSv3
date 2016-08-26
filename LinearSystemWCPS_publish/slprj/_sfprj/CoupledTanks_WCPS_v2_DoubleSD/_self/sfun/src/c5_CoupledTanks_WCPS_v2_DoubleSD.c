/* Include files */

#include <stddef.h>
#include "blas.h"
#include "CoupledTanks_WCPS_v2_DoubleSD_sfun.h"
#include "c5_CoupledTanks_WCPS_v2_DoubleSD.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "CoupledTanks_WCPS_v2_DoubleSD_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c5_debug_family_names[10] = { "ymea", "emergency_instance",
  "i_tb1", "ymea1", "nargin", "nargout", "ydelay", "delay1", "i",
  "ydelay_global" };

/* Function Declarations */
static void initialize_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void initialize_params_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void enable_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void disable_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void c5_update_debugger_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_st);
static void finalize_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void sf_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void initSimStructsc5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void registerMessagesc5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber);
static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData);
static void c5_emlrt_marshallIn(SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  uint32_T c5_y[15]);
static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static real_T c5_b_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_b_i, const char_T *c5_identifier);
static real_T c5_c_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static void c5_d_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_b_delay1, const char_T *c5_identifier, real_T c5_y[15]);
static void c5_e_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[15]);
static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_d_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static void c5_f_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_ydelay, const char_T *c5_identifier, real_T c5_y[15]);
static void c5_g_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[15]);
static void c5_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_e_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static real_T c5_h_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_f_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static void c5_i_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[5]);
static void c5_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_g_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static void c5_j_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[5]);
static void c5_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_h_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static int32_T c5_k_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static uint8_T c5_l_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_b_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD, const char_T
   *c5_identifier);
static uint8_T c5_m_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static uint32_T c5_get_ydelay_global
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, uint32_T
   c5_b);
static void c5_set_ydelay_global
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, uint32_T
   c5_b, uint32_T c5_c);
static uint32_T *c5_access_ydelay_global
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, uint32_T
   c5_b);
static void init_dsm_address_info
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c5_delay1_not_empty = FALSE;
  chartInstance->c5_i_not_empty = FALSE;
  chartInstance->c5_last_emergency_instance_not_empty = FALSE;
  chartInstance->c5_RetransCounter_not_empty = FALSE;
  chartInstance->c5_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD = 0U;
}

static void initialize_params_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void enable_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c5_update_debugger_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  int32_T c5_i0;
  real_T c5_u[15];
  const mxArray *c5_b_y = NULL;
  int32_T c5_i1;
  real_T c5_b_u[15];
  const mxArray *c5_c_y = NULL;
  real_T c5_hoistedGlobal;
  real_T c5_c_u;
  const mxArray *c5_d_y = NULL;
  uint8_T c5_b_hoistedGlobal;
  uint8_T c5_d_u;
  const mxArray *c5_e_y = NULL;
  real_T (*c5_ydelay)[15];
  c5_ydelay = (real_T (*)[15])ssGetOutputPortSignal(chartInstance->S, 1);
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellarray(4), FALSE);
  for (c5_i0 = 0; c5_i0 < 15; c5_i0++) {
    c5_u[c5_i0] = (*c5_ydelay)[c5_i0];
  }

  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 1, 15), FALSE);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  for (c5_i1 = 0; c5_i1 < 15; c5_i1++) {
    c5_b_u[c5_i1] = chartInstance->c5_delay1[c5_i1];
  }

  c5_c_y = NULL;
  if (!chartInstance->c5_delay1_not_empty) {
    sf_mex_assign(&c5_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_u, 0, 0U, 1U, 0U, 1, 15),
                  FALSE);
  }

  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_hoistedGlobal = chartInstance->c5_i;
  c5_c_u = c5_hoistedGlobal;
  c5_d_y = NULL;
  if (!chartInstance->c5_i_not_empty) {
    sf_mex_assign(&c5_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_setcell(c5_y, 2, c5_d_y);
  c5_b_hoistedGlobal =
    chartInstance->c5_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD;
  c5_d_u = c5_b_hoistedGlobal;
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", &c5_d_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c5_y, 3, c5_e_y);
  sf_mex_assign(&c5_st, c5_y, FALSE);
  return c5_st;
}

static void set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_st)
{
  const mxArray *c5_u;
  real_T c5_dv0[15];
  int32_T c5_i2;
  real_T c5_dv1[15];
  int32_T c5_i3;
  real_T (*c5_ydelay)[15];
  c5_ydelay = (real_T (*)[15])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c5_doneDoubleBufferReInit = TRUE;
  c5_u = sf_mex_dup(c5_st);
  c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 0)),
                        "ydelay", c5_dv0);
  for (c5_i2 = 0; c5_i2 < 15; c5_i2++) {
    (*c5_ydelay)[c5_i2] = c5_dv0[c5_i2];
  }

  c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
                        "delay1", c5_dv1);
  for (c5_i3 = 0; c5_i3 < 15; c5_i3++) {
    chartInstance->c5_delay1[c5_i3] = c5_dv1[c5_i3];
  }

  chartInstance->c5_i = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 2)), "i");
  chartInstance->c5_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD =
    c5_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 3)),
    "is_active_c5_CoupledTanks_WCPS_v2_DoubleSD");
  sf_mex_destroy(&c5_u);
  c5_update_debugger_state_c5_CoupledTanks_WCPS_v2_DoubleSD(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void finalize_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void sf_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  int32_T c5_i4;
  uint32_T c5_debug_family_var_map[10];
  real_T c5_ymea[5];
  real_T c5_emergency_instance[5];
  real_T c5_i_tb1;
  real_T c5_ymea1[5];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  real_T c5_ydelay[15];
  int32_T c5_i5;
  int32_T c5_i6;
  static real_T c5_dv2[15] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_b_i_tb1;
  int32_T c5_i9;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  real_T (*c5_b_ydelay)[15];
  c5_b_ydelay = (real_T (*)[15])ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
  for (c5_i4 = 0; c5_i4 < 15; c5_i4++) {
    _SFD_DATA_RANGE_CHECK((*c5_b_ydelay)[c5_i4], 0U);
  }

  chartInstance->c5_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 10U, 10U, c5_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c5_ymea, 0U, c5_f_sf_marshallOut,
    c5_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c5_emergency_instance, 1U,
    c5_g_sf_marshallOut, c5_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_i_tb1, 2U, c5_e_sf_marshallOut,
    c5_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c5_ymea1, 3U, c5_f_sf_marshallOut,
    c5_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 4U, c5_e_sf_marshallOut,
    c5_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 5U, c5_e_sf_marshallOut,
    c5_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c5_ydelay, 6U, c5_d_sf_marshallOut,
    c5_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c5_delay1, 7U,
    c5_c_sf_marshallOut, c5_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c5_i, 8U,
    c5_b_sf_marshallOut, c5_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(*chartInstance->c5_ydelay_global_address,
    9U, c5_sf_marshallOut, c5_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 7);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 8);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 9);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 12);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 13);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 14);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 15);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 16);
  if (CV_EML_IF(0, 1, 0, !chartInstance->c5_i_not_empty)) {
    _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 17);
    chartInstance->c5_i = 0.0;
    chartInstance->c5_i_not_empty = TRUE;
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 19);
  for (c5_i5 = 0; c5_i5 < 5; c5_i5++) {
    c5_ymea[c5_i5] = 1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 23);
  for (c5_i6 = 0; c5_i6 < 15; c5_i6++) {
    c5_ydelay[c5_i6] = c5_dv2[c5_i6];
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 25);
  for (c5_i7 = 0; c5_i7 < 5; c5_i7++) {
    c5_emergency_instance[c5_i7] = c5_ymea[c5_i7];
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 28);
  for (c5_i8 = 0; c5_i8 < 15; c5_i8++) {
    c5_ydelay[c5_i8] = 1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 30);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 31);
  c5_i_tb1 = 1.0;
  c5_b_i_tb1 = 0;
  while (c5_b_i_tb1 < 15) {
    c5_i_tb1 = 1.0 + (real_T)c5_b_i_tb1;
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 32);
    c5_ydelay[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("ydelay", (int32_T)
      _SFD_INTEGER_CHECK("i_tb1", c5_i_tb1), 1, 15, 1, 0) - 1] = (real_T)
      c5_get_ydelay_global(chartInstance, (int32_T)(real_T)
      _SFD_EML_ARRAY_BOUNDS_CHECK("ydelay_global", (int32_T)_SFD_INTEGER_CHECK(
      "i_tb1", c5_i_tb1), 1, 15, 1, 0) - 1);
    c5_b_i_tb1++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 35);
  for (c5_i9 = 0; c5_i9 < 15; c5_i9++) {
    chartInstance->c5_delay1[c5_i9] = c5_ydelay[c5_i9];
  }

  chartInstance->c5_delay1_not_empty = TRUE;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 36);
  chartInstance->c5_i++;
  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 38);
  for (c5_i10 = 0; c5_i10 < 5; c5_i10++) {
    c5_ymea1[c5_i10] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, 39);
  for (c5_i11 = 0; c5_i11 < 5; c5_i11++) {
    c5_ymea1[c5_i11] = c5_ymea[c5_i11];
  }

  _SFD_EML_CALL(0U, chartInstance->c5_sfEvent, -39);
  _SFD_SYMBOL_SCOPE_POP();
  for (c5_i12 = 0; c5_i12 < 15; c5_i12++) {
    (*c5_b_ydelay)[c5_i12] = c5_ydelay[c5_i12];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY
    (_CoupledTanks_WCPS_v2_DoubleSDMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
}

static void initSimStructsc5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void registerMessagesc5_CoupledTanks_WCPS_v2_DoubleSD
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber)
{
}

static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i13;
  uint32_T c5_b_inData[15];
  int32_T c5_i14;
  uint32_T c5_u[15];
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i13 = 0; c5_i13 < 15; c5_i13++) {
    c5_b_inData[c5_i13] = (*(uint32_T (*)[15])c5_inData)[c5_i13];
  }

  for (c5_i14 = 0; c5_i14 < 15; c5_i14++) {
    c5_u[c5_i14] = c5_b_inData[c5_i14];
  }

  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 7, 0U, 1U, 0U, 1, 15), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_emlrt_marshallIn(SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  uint32_T c5_y[15])
{
  uint32_T c5_uv0[15];
  int32_T c5_i15;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_uv0, 1, 7, 0U, 1, 0U, 1, 15);
  for (c5_i15 = 0; c5_i15 < 15; c5_i15++) {
    c5_y[c5_i15] = c5_uv0[c5_i15];
  }

  sf_mex_destroy(&c5_u);
}

static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_ydelay_global;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  uint32_T c5_y[15];
  int32_T c5_i16;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_ydelay_global = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_ydelay_global), &c5_thisId,
                      c5_y);
  sf_mex_destroy(&c5_ydelay_global);
  for (c5_i16 = 0; c5_i16 < 15; c5_i16++) {
    (*(uint32_T (*)[15])c5_outData)[c5_i16] = c5_y[c5_i16];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  if (!chartInstance->c5_i_not_empty) {
    sf_mex_assign(&c5_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static real_T c5_b_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_b_i, const char_T *c5_identifier)
{
  real_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_i), &c5_thisId);
  sf_mex_destroy(&c5_b_i);
  return c5_y;
}

static real_T c5_c_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d0;
  if (mxIsEmpty(c5_u)) {
    chartInstance->c5_i_not_empty = FALSE;
  } else {
    chartInstance->c5_i_not_empty = TRUE;
    sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d0, 1, 0, 0U, 0, 0U, 0);
    c5_y = c5_d0;
  }

  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_i;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_b_i = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_i), &c5_thisId);
  sf_mex_destroy(&c5_b_i);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i17;
  real_T c5_b_inData[15];
  int32_T c5_i18;
  real_T c5_u[15];
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i17 = 0; c5_i17 < 15; c5_i17++) {
    c5_b_inData[c5_i17] = (*(real_T (*)[15])c5_inData)[c5_i17];
  }

  for (c5_i18 = 0; c5_i18 < 15; c5_i18++) {
    c5_u[c5_i18] = c5_b_inData[c5_i18];
  }

  c5_y = NULL;
  if (!chartInstance->c5_delay1_not_empty) {
    sf_mex_assign(&c5_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 1, 15), FALSE);
  }

  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_d_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_b_delay1, const char_T *c5_identifier, real_T c5_y[15])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_delay1), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_b_delay1);
}

static void c5_e_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[15])
{
  real_T c5_dv3[15];
  int32_T c5_i19;
  if (mxIsEmpty(c5_u)) {
    chartInstance->c5_delay1_not_empty = FALSE;
  } else {
    chartInstance->c5_delay1_not_empty = TRUE;
    sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_dv3, 1, 0, 0U, 1, 0U, 1, 15);
    for (c5_i19 = 0; c5_i19 < 15; c5_i19++) {
      c5_y[c5_i19] = c5_dv3[c5_i19];
    }
  }

  sf_mex_destroy(&c5_u);
}

static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_delay1;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y[15];
  int32_T c5_i20;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_b_delay1 = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_delay1), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_b_delay1);
  for (c5_i20 = 0; c5_i20 < 15; c5_i20++) {
    (*(real_T (*)[15])c5_outData)[c5_i20] = c5_y[c5_i20];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_d_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i21;
  real_T c5_b_inData[15];
  int32_T c5_i22;
  real_T c5_u[15];
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i21 = 0; c5_i21 < 15; c5_i21++) {
    c5_b_inData[c5_i21] = (*(real_T (*)[15])c5_inData)[c5_i21];
  }

  for (c5_i22 = 0; c5_i22 < 15; c5_i22++) {
    c5_u[c5_i22] = c5_b_inData[c5_i22];
  }

  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 1, 15), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_f_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_ydelay, const char_T *c5_identifier, real_T c5_y[15])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_ydelay), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_ydelay);
}

static void c5_g_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[15])
{
  real_T c5_dv4[15];
  int32_T c5_i23;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_dv4, 1, 0, 0U, 1, 0U, 1, 15);
  for (c5_i23 = 0; c5_i23 < 15; c5_i23++) {
    c5_y[c5_i23] = c5_dv4[c5_i23];
  }

  sf_mex_destroy(&c5_u);
}

static void c5_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_ydelay;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y[15];
  int32_T c5_i24;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_ydelay = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_ydelay), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_ydelay);
  for (c5_i24 = 0; c5_i24 < 15; c5_i24++) {
    (*(real_T (*)[15])c5_outData)[c5_i24] = c5_y[c5_i24];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_e_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static real_T c5_h_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d1;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d1, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d1;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_nargout;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_nargout = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_nargout), &c5_thisId);
  sf_mex_destroy(&c5_nargout);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_f_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i25;
  real_T c5_b_inData[5];
  int32_T c5_i26;
  real_T c5_u[5];
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i25 = 0; c5_i25 < 5; c5_i25++) {
    c5_b_inData[c5_i25] = (*(real_T (*)[5])c5_inData)[c5_i25];
  }

  for (c5_i26 = 0; c5_i26 < 5; c5_i26++) {
    c5_u[c5_i26] = c5_b_inData[c5_i26];
  }

  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_i_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[5])
{
  real_T c5_dv5[5];
  int32_T c5_i27;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_dv5, 1, 0, 0U, 1, 0U, 1, 5);
  for (c5_i27 = 0; c5_i27 < 5; c5_i27++) {
    c5_y[c5_i27] = c5_dv5[c5_i27];
  }

  sf_mex_destroy(&c5_u);
}

static void c5_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_ymea1;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y[5];
  int32_T c5_i28;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_ymea1 = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_ymea1), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_ymea1);
  for (c5_i28 = 0; c5_i28 < 5; c5_i28++) {
    (*(real_T (*)[5])c5_outData)[c5_i28] = c5_y[c5_i28];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_g_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_i29;
  real_T c5_b_inData[5];
  int32_T c5_i30;
  real_T c5_u[5];
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  for (c5_i29 = 0; c5_i29 < 5; c5_i29++) {
    c5_b_inData[c5_i29] = (*(real_T (*)[5])c5_inData)[c5_i29];
  }

  for (c5_i30 = 0; c5_i30 < 5; c5_i30++) {
    c5_u[c5_i30] = c5_b_inData[c5_i30];
  }

  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_u, 0, 0U, 1U, 0U, 2, 1, 5), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static void c5_j_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId, real_T c5_y[5])
{
  real_T c5_dv6[5];
  int32_T c5_i31;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_dv6, 1, 0, 0U, 1, 0U, 2, 1, 5);
  for (c5_i31 = 0; c5_i31 < 5; c5_i31++) {
    c5_y[c5_i31] = c5_dv6[c5_i31];
  }

  sf_mex_destroy(&c5_u);
}

static void c5_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_emergency_instance;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y[5];
  int32_T c5_i32;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_emergency_instance = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_emergency_instance),
                        &c5_thisId, c5_y);
  sf_mex_destroy(&c5_emergency_instance);
  for (c5_i32 = 0; c5_i32 < 5; c5_i32++) {
    (*(real_T (*)[5])c5_outData)[c5_i32] = c5_y[c5_i32];
  }

  sf_mex_destroy(&c5_mxArrayInData);
}

const mxArray
  *sf_c5_CoupledTanks_WCPS_v2_DoubleSD_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), FALSE);
  return c5_nameCaptureInfo;
}

static const mxArray *c5_h_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(int32_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, FALSE);
  return c5_mxArrayOutData;
}

static int32_T c5_k_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  int32_T c5_y;
  int32_T c5_i33;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_i33, 1, 6, 0U, 0, 0U, 0);
  c5_y = c5_i33;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_sfEvent;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  int32_T c5_y;
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
    chartInstanceVoid;
  c5_b_sfEvent = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_sfEvent),
    &c5_thisId);
  sf_mex_destroy(&c5_b_sfEvent);
  *(int32_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static uint8_T c5_l_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_b_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD, const char_T
   *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_CoupledTanks_WCPS_v2_DoubleSD);
  return c5_y;
}

static uint8_T c5_m_emlrt_marshallIn
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static uint32_T c5_get_ydelay_global
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, uint32_T
   c5_b)
{
  ssReadFromDataStoreElement(chartInstance->S, 0, NULL, c5_b);
  if (chartInstance->c5_ydelay_global_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'ydelay_global\' (#60) in the initialization routine of the chart.\n");
  }

  return (*chartInstance->c5_ydelay_global_address)[c5_b];
}

static void c5_set_ydelay_global
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, uint32_T
   c5_b, uint32_T c5_c)
{
  ssWriteToDataStoreElement(chartInstance->S, 0, NULL, c5_b);
  if (chartInstance->c5_ydelay_global_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'ydelay_global\' (#60) in the initialization routine of the chart.\n");
  }

  (*chartInstance->c5_ydelay_global_address)[c5_b] = c5_c;
}

static uint32_T *c5_access_ydelay_global
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance, uint32_T
   c5_b)
{
  uint32_T *c5_c;
  ssReadFromDataStore(chartInstance->S, 0, NULL);
  if (chartInstance->c5_ydelay_global_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'ydelay_global\' (#60) in the initialization routine of the chart.\n");
  }

  c5_c = *chartInstance->c5_ydelay_global_address;
  if (c5_b == 0) {
    ssWriteToDataStore(chartInstance->S, 0, NULL);
  }

  return c5_c;
}

static void init_dsm_address_info
  (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance)
{
  ssGetSFcnDataStoreNameAddrIdx(chartInstance->S, "ydelay_global", (void **)
    &chartInstance->c5_ydelay_global_address,
    &chartInstance->c5_ydelay_global_index);
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

void sf_c5_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1638396918U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2517039775U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(941071973U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3259477768U);
}

mxArray *sf_c5_CoupledTanks_WCPS_v2_DoubleSD_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("jmsXEwoEjRN1aZB84lRU4B");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxCreateDoubleMatrix(0,0,mxREAL));
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
      pr[0] = (double)(15);
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

mxArray *sf_c5_CoupledTanks_WCPS_v2_DoubleSD_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray *sf_get_sim_state_info_c5_CoupledTanks_WCPS_v2_DoubleSD
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"ydelay\",},{M[4],M[0],T\"delay1\",S'l','i','p'{{M1x2[151 157],M[0],}}},{M[4],M[0],T\"i\",S'l','i','p'{{M1x2[183 184],M[0],}}},{M[8],M[0],T\"is_active_c5_CoupledTanks_WCPS_v2_DoubleSD\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_CoupledTanks_WCPS_v2_DoubleSD_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
    chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _CoupledTanks_WCPS_v2_DoubleSDMachineNumber_,
           5,
           1,
           1,
           2,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"ydelay");
          _SFD_SET_DATA_PROPS(1,11,0,0,"ydelay_global");
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
        _SFD_CV_INIT_EML(0,1,1,1,0,0,0,1,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1058);
        _SFD_CV_INIT_EML_IF(0,1,0,418,431,-1,446);
        _SFD_CV_INIT_EML_FOR(0,1,0,926,943,994);
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
          dimVector[0]= 15;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c5_d_sf_marshallOut,(MexInFcnForType)
            c5_d_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 15;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)
            c5_sf_marshallIn);
        }

        {
          real_T (*c5_ydelay)[15];
          c5_ydelay = (real_T (*)[15])ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, *c5_ydelay);
          _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c5_ydelay_global_address);
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
  return "KyMeNexqYYWCCGzxSvMBBF";
}

static void sf_opaque_initialize_c5_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
  initialize_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c5_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  enable_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  disable_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  sf_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_CoupledTanks_WCPS_v2_DoubleSD();/* state var info */
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

extern void sf_internal_set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD(SimStruct*
  S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_CoupledTanks_WCPS_v2_DoubleSD();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD(S);
}

static void sf_opaque_set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD(SimStruct*
  S, const mxArray *st)
{
  sf_internal_set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD(S, st);
}

static void sf_opaque_terminate_c5_CoupledTanks_WCPS_v2_DoubleSD(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_CoupledTanks_WCPS_v2_DoubleSD_optimization_info();
    }

    finalize_c5_CoupledTanks_WCPS_v2_DoubleSD
      ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_CoupledTanks_WCPS_v2_DoubleSD
    ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_CoupledTanks_WCPS_v2_DoubleSD
      ((SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c5_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_CoupledTanks_WCPS_v2_DoubleSD_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,5,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,5,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,5);
    if (chartIsInlinable) {
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,5,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3689871215U));
  ssSetChecksum1(S,(2562997202U));
  ssSetChecksum2(S,(1082197437U));
  ssSetChecksum3(S,(2181821880U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,0);
}

static void mdlRTW_c5_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c5_CoupledTanks_WCPS_v2_DoubleSD(SimStruct *S)
{
  SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *chartInstance;
  chartInstance = (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct *)utMalloc
    (sizeof(SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc5_CoupledTanks_WCPS_v2_DoubleSDInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_CoupledTanks_WCPS_v2_DoubleSD;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_CoupledTanks_WCPS_v2_DoubleSD;
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

void c5_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_CoupledTanks_WCPS_v2_DoubleSD(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_CoupledTanks_WCPS_v2_DoubleSD_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

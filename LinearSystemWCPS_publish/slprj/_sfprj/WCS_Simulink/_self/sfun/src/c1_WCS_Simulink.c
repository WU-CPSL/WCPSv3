/* Include files */

#include <stddef.h>
#include "blas.h"
#include "WCS_Simulink_sfun.h"
#include "c1_WCS_Simulink.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "WCS_Simulink_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c1_debug_family_names[15] = { "call_count", "rssi",
  "resultz", "end_to_end_delivery_result_aggregated", "delay", "x", "i_yg",
  "nargin", "nargout", "ymea", "ymea1", "ydelay", "delay1", "i", "ydelay_global"
};

/* Function Declarations */
static void initialize_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void initialize_params_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void enable_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void disable_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void c1_update_debugger_state_c1_WCS_Simulink
  (SFc1_WCS_SimulinkInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_WCS_Simulink
  (SFc1_WCS_SimulinkInstanceStruct *chartInstance);
static void set_sim_state_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_st);
static void finalize_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void sf_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct *chartInstance);
static void initSimStructsc1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void registerMessagesc1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static void c1_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, uint32_T c1_y[15]);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static real_T c1_b_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_b_i, const char_T *c1_identifier);
static real_T c1_c_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_d_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_b_delay1, const char_T *c1_identifier, real_T c1_y[9]);
static void c1_e_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[9]);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static real_T c1_f_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_ymea1, const char_T *c1_identifier);
static real_T c1_g_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_h_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_transpose, const char_T *c1_identifier, real_T c1_y[9]);
static void c1_i_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[9]);
static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_j_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint8_T c1_k_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_WCS_Simulink, const char_T
  *c1_identifier);
static uint8_T c1_l_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint32_T c1_get_ydelay_global(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, uint32_T c1_b);
static void c1_set_ydelay_global(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  uint32_T c1_b, uint32_T c1_c);
static uint32_T *c1_access_ydelay_global(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, uint32_T c1_b);
static void init_dsm_address_info(SFc1_WCS_SimulinkInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_delay1_not_empty = FALSE;
  chartInstance->c1_i_not_empty = FALSE;
  chartInstance->c1_is_active_c1_WCS_Simulink = 0U;
}

static void initialize_params_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void enable_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_WCS_Simulink
  (SFc1_WCS_SimulinkInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c1_WCS_Simulink
  (SFc1_WCS_SimulinkInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  int32_T c1_i0;
  real_T c1_u[9];
  const mxArray *c1_b_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  int32_T c1_i1;
  real_T c1_c_u[9];
  const mxArray *c1_d_y = NULL;
  real_T c1_b_hoistedGlobal;
  real_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  uint8_T c1_c_hoistedGlobal;
  uint8_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  real_T *c1_ymea1;
  real_T (*c1_ydelay)[9];
  c1_ydelay = (real_T (*)[9])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_ymea1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(5), FALSE);
  for (c1_i0 = 0; c1_i0 < 9; c1_i0++) {
    c1_u[c1_i0] = (*c1_ydelay)[c1_i0];
  }

  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 9), FALSE);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_hoistedGlobal = *c1_ymea1;
  c1_b_u = c1_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  for (c1_i1 = 0; c1_i1 < 9; c1_i1++) {
    c1_c_u[c1_i1] = chartInstance->c1_delay1[c1_i1];
  }

  c1_d_y = NULL;
  if (!chartInstance->c1_delay1_not_empty) {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_c_u, 0, 0U, 1U, 0U, 1, 9),
                  FALSE);
  }

  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_b_hoistedGlobal = chartInstance->c1_i;
  c1_d_u = c1_b_hoistedGlobal;
  c1_e_y = NULL;
  if (!chartInstance->c1_i_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  FALSE);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_c_hoistedGlobal = chartInstance->c1_is_active_c1_WCS_Simulink;
  c1_e_u = c1_c_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  sf_mex_assign(&c1_st, c1_y, FALSE);
  return c1_st;
}

static void set_sim_state_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv0[9];
  int32_T c1_i2;
  real_T c1_dv1[9];
  int32_T c1_i3;
  real_T *c1_ymea1;
  real_T (*c1_ydelay)[9];
  c1_ydelay = (real_T (*)[9])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_ymea1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c1_doneDoubleBufferReInit = TRUE;
  c1_u = sf_mex_dup(c1_st);
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
                        "ydelay", c1_dv0);
  for (c1_i2 = 0; c1_i2 < 9; c1_i2++) {
    (*c1_ydelay)[c1_i2] = c1_dv0[c1_i2];
  }

  *c1_ymea1 = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 1)), "ymea1");
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)),
                        "delay1", c1_dv1);
  for (c1_i3 = 0; c1_i3 < 9; c1_i3++) {
    chartInstance->c1_delay1[c1_i3] = c1_dv1[c1_i3];
  }

  chartInstance->c1_i = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "i");
  chartInstance->c1_is_active_c1_WCS_Simulink = c1_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
     "is_active_c1_WCS_Simulink");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_WCS_Simulink(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void sf_c1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct *chartInstance)
{
  int32_T c1_i4;
  real_T c1_hoistedGlobal;
  real_T c1_ymea;
  uint32_T c1_debug_family_var_map[15];
  real_T c1_call_count;
  real_T c1_rssi;
  const mxArray *c1_resultz = NULL;
  const mxArray *c1_end_to_end_delivery_result_aggregated = NULL;
  const mxArray *c1_delay = NULL;
  real_T c1_x;
  real_T c1_i_yg;
  real_T c1_nargin = 1.0;
  real_T c1_nargout = 2.0;
  real_T c1_ymea1;
  real_T c1_ydelay[9];
  int32_T c1_i5;
  static real_T c1_dv2[9] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T c1_u;
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  real_T c1_dv3[9];
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_b_i_yg;
  real_T c1_d0;
  uint32_T c1_u0;
  int32_T c1_i8;
  real_T *c1_b_ymea1;
  real_T *c1_b_ymea;
  real_T (*c1_b_ydelay)[9];
  c1_b_ydelay = (real_T (*)[9])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_b_ymea = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_b_ymea1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c1_b_ymea1, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_b_ymea, 1U);
  for (c1_i4 = 0; c1_i4 < 9; c1_i4++) {
    _SFD_DATA_RANGE_CHECK((*c1_b_ydelay)[c1_i4], 2U);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  c1_hoistedGlobal = *c1_b_ymea;
  c1_ymea = c1_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 15U, 15U, c1_debug_family_names,
    c1_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_call_count, 0U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_rssi, 1U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_resultz, 2U, c1_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_end_to_end_delivery_result_aggregated, 3U,
    c1_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_delay, 4U, c1_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_x, 5U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_i_yg, 6U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargin, 7U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargout, 8U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_ymea, 9U, c1_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_ymea1, 10U, c1_e_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_ydelay, 11U, c1_d_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(chartInstance->c1_delay1, 12U,
    c1_c_sf_marshallOut, c1_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c1_i, 13U,
    c1_b_sf_marshallOut, c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(*chartInstance->c1_ydelay_global_address,
    14U, c1_sf_marshallOut, c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 7);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 8);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 9);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 13);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 14);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 15);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 16);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 17);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 18);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 19);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 20);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 22);
  if (CV_EML_IF(0, 1, 0, !chartInstance->c1_i_not_empty)) {
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 23);
    chartInstance->c1_i = 0.0;
    chartInstance->c1_i_not_empty = TRUE;
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 26);
  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_ydelay[c1_i5] = c1_dv2[c1_i5];
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 29);
  c1_call_count = 18.0;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 30);
  c1_rssi = -69.0;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 32);
  c1_u = c1_call_count;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  c1_b_u = c1_rssi;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_resultz, sf_mex_call_debug("ps_aggregation", 1U, 2U, 14,
    c1_y, 14, c1_b_y), FALSE);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 33);
  sf_mex_assign(&c1_end_to_end_delivery_result_aggregated, sf_mex_call_debug(
    "sum", 1U, 1U, 14, sf_mex_dup(c1_resultz)), FALSE);
  sf_mex_printf("%s =\\n", "end_to_end_delivery_result_aggregated");
  sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_dup
                    (c1_end_to_end_delivery_result_aggregated));
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 35);
  sf_mex_printf("%s =\\n", "resultz");
  sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_dup(c1_resultz));
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 37);
  sf_mex_assign(&c1_delay, sf_mex_call_debug("delay_summary", 1U, 1U, 14,
    sf_mex_dup(c1_end_to_end_delivery_result_aggregated)), FALSE);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 39);
  sf_mex_printf("%s =\\n", "delay");
  sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_dup(c1_delay));
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 41);
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_call_debug("transpose", 1U, 1U, 14,
    sf_mex_dup(c1_delay)), "transpose", c1_dv3);
  for (c1_i6 = 0; c1_i6 < 9; c1_i6++) {
    c1_ydelay[c1_i6] = c1_dv3[c1_i6];
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 43);
  for (c1_i7 = 0; c1_i7 < 9; c1_i7++) {
    chartInstance->c1_delay1[c1_i7] = c1_ydelay[c1_i7];
  }

  chartInstance->c1_delay1_not_empty = TRUE;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 44);
  c1_x = c1_ydelay[1];
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 45);
  chartInstance->c1_i++;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 47);
  c1_ymea1 = c1_ymea;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 49);
  c1_i_yg = 1.0;
  c1_b_i_yg = 0;
  while (c1_b_i_yg < 9) {
    c1_i_yg = 1.0 + (real_T)c1_b_i_yg;
    CV_EML_FOR(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 50);
    c1_d0 = muDoubleScalarRound(c1_ydelay[(int32_T)(real_T)
      _SFD_EML_ARRAY_BOUNDS_CHECK("ydelay", (int32_T)_SFD_INTEGER_CHECK("i_yg",
      c1_i_yg), 1, 9, 1, 0) - 1]);
    if (c1_d0 < 4.294967296E+9) {
      if (CV_SATURATION_EVAL(4, 0, 0, 1, c1_d0 >= 0.0)) {
        c1_u0 = (uint32_T)c1_d0;
      } else {
        c1_u0 = 0U;
      }
    } else if (CV_SATURATION_EVAL(4, 0, 0, 0, c1_d0 >= 4.294967296E+9)) {
      c1_u0 = MAX_uint32_T;
    } else {
      c1_u0 = 0U;
    }

    c1_set_ydelay_global(chartInstance, (int32_T)(real_T)
                         _SFD_EML_ARRAY_BOUNDS_CHECK("ydelay_global", (int32_T)
      _SFD_INTEGER_CHECK("i_yg", c1_i_yg), 1, 15, 1, 0) - 1, c1_u0);
    ssUpdateDataStoreLog(chartInstance->S, 0);
    c1_b_i_yg++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -50);
  _SFD_SYMBOL_SCOPE_POP();
  sf_mex_destroy(&c1_resultz);
  sf_mex_destroy(&c1_end_to_end_delivery_result_aggregated);
  sf_mex_destroy(&c1_delay);
  *c1_b_ymea1 = c1_ymea1;
  for (c1_i8 = 0; c1_i8 < 9; c1_i8++) {
    (*c1_b_ydelay)[c1_i8] = c1_ydelay[c1_i8];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_WCS_SimulinkMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void registerMessagesc1_WCS_Simulink(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i9;
  uint32_T c1_b_inData[15];
  int32_T c1_i10;
  uint32_T c1_u[15];
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i9 = 0; c1_i9 < 15; c1_i9++) {
    c1_b_inData[c1_i9] = (*(uint32_T (*)[15])c1_inData)[c1_i9];
  }

  for (c1_i10 = 0; c1_i10 < 15; c1_i10++) {
    c1_u[c1_i10] = c1_b_inData[c1_i10];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 7, 0U, 1U, 0U, 1, 15), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static void c1_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, uint32_T c1_y[15])
{
  uint32_T c1_uv0[15];
  int32_T c1_i11;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv0, 1, 7, 0U, 1, 0U, 1, 15);
  for (c1_i11 = 0; c1_i11 < 15; c1_i11++) {
    c1_y[c1_i11] = c1_uv0[c1_i11];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_ydelay_global;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  uint32_T c1_y[15];
  int32_T c1_i12;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_ydelay_global = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_ydelay_global), &c1_thisId,
                      c1_y);
  sf_mex_destroy(&c1_ydelay_global);
  for (c1_i12 = 0; c1_i12 < 15; c1_i12++) {
    (*(uint32_T (*)[15])c1_outData)[c1_i12] = c1_y[c1_i12];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  if (!chartInstance->c1_i_not_empty) {
    sf_mex_assign(&c1_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  }

  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static real_T c1_b_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_b_i, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_i), &c1_thisId);
  sf_mex_destroy(&c1_b_i);
  return c1_y;
}

static real_T c1_c_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d1;
  if (mxIsEmpty(c1_u)) {
    chartInstance->c1_i_not_empty = FALSE;
  } else {
    chartInstance->c1_i_not_empty = TRUE;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d1, 1, 0, 0U, 0, 0U, 0);
    c1_y = c1_d1;
  }

  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_i;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_b_i = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_i), &c1_thisId);
  sf_mex_destroy(&c1_b_i);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i13;
  real_T c1_b_inData[9];
  int32_T c1_i14;
  real_T c1_u[9];
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i13 = 0; c1_i13 < 9; c1_i13++) {
    c1_b_inData[c1_i13] = (*(real_T (*)[9])c1_inData)[c1_i13];
  }

  for (c1_i14 = 0; c1_i14 < 9; c1_i14++) {
    c1_u[c1_i14] = c1_b_inData[c1_i14];
  }

  c1_y = NULL;
  if (!chartInstance->c1_delay1_not_empty) {
    sf_mex_assign(&c1_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), FALSE);
  } else {
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 9), FALSE);
  }

  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static void c1_d_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_b_delay1, const char_T *c1_identifier, real_T c1_y[9])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_delay1), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_delay1);
}

static void c1_e_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[9])
{
  real_T c1_dv4[9];
  int32_T c1_i15;
  if (mxIsEmpty(c1_u)) {
    chartInstance->c1_delay1_not_empty = FALSE;
  } else {
    chartInstance->c1_delay1_not_empty = TRUE;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv4, 1, 0, 0U, 1, 0U, 1, 9);
    for (c1_i15 = 0; c1_i15 < 9; c1_i15++) {
      c1_y[c1_i15] = c1_dv4[c1_i15];
    }
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_delay1;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[9];
  int32_T c1_i16;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_b_delay1 = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_delay1), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_delay1);
  for (c1_i16 = 0; c1_i16 < 9; c1_i16++) {
    (*(real_T (*)[9])c1_outData)[c1_i16] = c1_y[c1_i16];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i17;
  real_T c1_b_inData[9];
  int32_T c1_i18;
  real_T c1_u[9];
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i17 = 0; c1_i17 < 9; c1_i17++) {
    c1_b_inData[c1_i17] = (*(real_T (*)[9])c1_inData)[c1_i17];
  }

  for (c1_i18 = 0; c1_i18 < 9; c1_i18++) {
    c1_u[c1_i18] = c1_b_inData[c1_i18];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 9), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_transpose;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[9];
  int32_T c1_i19;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_transpose = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_transpose), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_transpose);
  for (c1_i19 = 0; c1_i19 < 9; c1_i19++) {
    (*(real_T (*)[9])c1_outData)[c1_i19] = c1_y[c1_i19];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static real_T c1_f_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_ymea1, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_ymea1), &c1_thisId);
  sf_mex_destroy(&c1_ymea1);
  return c1_y;
}

static real_T c1_g_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d2;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d2, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d2;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_ymea1;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_ymea1 = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_ymea1), &c1_thisId);
  sf_mex_destroy(&c1_ymea1);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  const mxArray *c1_u;
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = sf_mex_dup(*(const mxArray **)c1_inData);
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe(&c1_u), FALSE);
  sf_mex_destroy(&c1_u);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

const mxArray *sf_c1_WCS_Simulink_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo;
  c1_ResolvedFunctionInfo c1_info[1];
  c1_ResolvedFunctionInfo (*c1_b_info)[1];
  const mxArray *c1_m0 = NULL;
  int32_T c1_i20;
  c1_ResolvedFunctionInfo *c1_r0;
  c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  c1_b_info = (c1_ResolvedFunctionInfo (*)[1])c1_info;
  (*c1_b_info)[0].context = "";
  (*c1_b_info)[0].name = "sum";
  (*c1_b_info)[0].dominantType = "mxArray";
  (*c1_b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  (*c1_b_info)[0].fileTimeLo = 1314761812U;
  (*c1_b_info)[0].fileTimeHi = 0U;
  (*c1_b_info)[0].mFileTimeLo = 0U;
  (*c1_b_info)[0].mFileTimeHi = 0U;
  sf_mex_assign(&c1_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1), FALSE);
  for (c1_i20 = 0; c1_i20 < 1; c1_i20++) {
    c1_r0 = &c1_info[c1_i20];
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->context)), "context", "nameCaptureInfo",
                    c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c1_r0->name)), "name", "nameCaptureInfo", c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c1_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->resolved)), "resolved", "nameCaptureInfo",
                    c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c1_i20);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c1_i20);
  }

  sf_mex_assign(&c1_nameCaptureInfo, c1_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static void c1_h_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_transpose, const char_T *c1_identifier, real_T c1_y[9])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_transpose), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_transpose);
}

static void c1_i_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[9])
{
  real_T c1_dv5[9];
  int32_T c1_i21;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv5, 1, 0, 0U, 1, 0U, 1, 9);
  for (c1_i21 = 0; c1_i21 < 9; c1_i21++) {
    c1_y[c1_i21] = c1_dv5[c1_i21];
  }

  sf_mex_destroy(&c1_u);
}

static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static int32_T c1_j_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i22;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i22, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i22;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint8_T c1_k_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_WCS_Simulink, const char_T
  *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_WCS_Simulink), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_WCS_Simulink);
  return c1_y;
}

static uint8_T c1_l_emlrt_marshallIn(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u1;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u1, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u1;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint32_T c1_get_ydelay_global(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, uint32_T c1_b)
{
  ssReadFromDataStoreElement(chartInstance->S, 0, NULL, c1_b);
  if (chartInstance->c1_ydelay_global_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'ydelay_global\' (#64) in the initialization routine of the chart.\n");
  }

  return (*chartInstance->c1_ydelay_global_address)[c1_b];
}

static void c1_set_ydelay_global(SFc1_WCS_SimulinkInstanceStruct *chartInstance,
  uint32_T c1_b, uint32_T c1_c)
{
  ssWriteToDataStoreElement(chartInstance->S, 0, NULL, c1_b);
  if (chartInstance->c1_ydelay_global_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'ydelay_global\' (#64) in the initialization routine of the chart.\n");
  }

  (*chartInstance->c1_ydelay_global_address)[c1_b] = c1_c;
}

static uint32_T *c1_access_ydelay_global(SFc1_WCS_SimulinkInstanceStruct
  *chartInstance, uint32_T c1_b)
{
  uint32_T *c1_c;
  ssReadFromDataStore(chartInstance->S, 0, NULL);
  if (chartInstance->c1_ydelay_global_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'ydelay_global\' (#64) in the initialization routine of the chart.\n");
  }

  c1_c = *chartInstance->c1_ydelay_global_address;
  if (c1_b == 0) {
    ssWriteToDataStore(chartInstance->S, 0, NULL);
  }

  return c1_c;
}

static void init_dsm_address_info(SFc1_WCS_SimulinkInstanceStruct *chartInstance)
{
  ssGetSFcnDataStoreNameAddrIdx(chartInstance->S, "ydelay_global", (void **)
    &chartInstance->c1_ydelay_global_address,
    &chartInstance->c1_ydelay_global_index);
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

void sf_c1_WCS_Simulink_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2574455887U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2519386887U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(992172753U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2588440705U);
}

mxArray *sf_c1_WCS_Simulink_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("y5yIRkojAy63gqMFcrFxiG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(9);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_WCS_Simulink_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray *sf_get_sim_state_info_c1_WCS_Simulink(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[5],T\"ydelay\",},{M[1],M[7],T\"ymea1\",},{M[4],M[0],T\"delay1\",S'l','i','p'{{M1x2[165 171],M[0],}}},{M[4],M[0],T\"i\",S'l','i','p'{{M1x2[197 198],M[0],}}},{M[8],M[0],T\"is_active_c1_WCS_Simulink\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_WCS_Simulink_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_WCS_SimulinkInstanceStruct *chartInstance;
    chartInstance = (SFc1_WCS_SimulinkInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _WCS_SimulinkMachineNumber_,
           1,
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
          init_script_number_translation(_WCS_SimulinkMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_WCS_SimulinkMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _WCS_SimulinkMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"ymea1");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ymea");
          _SFD_SET_DATA_PROPS(2,2,0,1,"ydelay");
          _SFD_SET_DATA_PROPS(3,11,0,0,"ydelay_global");
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
        _SFD_CV_INIT_EML(0,1,1,1,0,1,0,1,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1022);
        _SFD_CV_INIT_EML_SATURATION(0,1,0,976,-1,1016);
        _SFD_CV_INIT_EML_IF(0,1,0,508,521,-1,536);
        _SFD_CV_INIT_EML_FOR(0,1,0,957,972,1021);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_e_sf_marshallOut,(MexInFcnForType)c1_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_e_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 9;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_d_sf_marshallOut,(MexInFcnForType)
            c1_d_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 15;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)
            c1_sf_marshallIn);
        }

        {
          real_T *c1_ymea1;
          real_T *c1_ymea;
          real_T (*c1_ydelay)[9];
          c1_ydelay = (real_T (*)[9])ssGetOutputPortSignal(chartInstance->S, 2);
          c1_ymea = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c1_ymea1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_ymea1);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_ymea);
          _SFD_SET_DATA_VALUE_PTR(2U, *c1_ydelay);
          _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c1_ydelay_global_address);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _WCS_SimulinkMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "8c5hcW7iVDruT4b4rZuYDB";
}

static void sf_opaque_initialize_c1_WCS_Simulink(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_WCS_SimulinkInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*)
    chartInstanceVar);
  initialize_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_WCS_Simulink(void *chartInstanceVar)
{
  enable_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_WCS_Simulink(void *chartInstanceVar)
{
  disable_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_WCS_Simulink(void *chartInstanceVar)
{
  sf_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c1_WCS_Simulink(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_WCS_Simulink
    ((SFc1_WCS_SimulinkInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_WCS_Simulink();/* state var info */
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

extern void sf_internal_set_sim_state_c1_WCS_Simulink(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_WCS_Simulink();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c1_WCS_Simulink(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_WCS_Simulink(S);
}

static void sf_opaque_set_sim_state_c1_WCS_Simulink(SimStruct* S, const mxArray *
  st)
{
  sf_internal_set_sim_state_c1_WCS_Simulink(S, st);
}

static void sf_opaque_terminate_c1_WCS_Simulink(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_WCS_SimulinkInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_WCS_Simulink_optimization_info();
    }

    finalize_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_WCS_Simulink(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_WCS_Simulink((SFc1_WCS_SimulinkInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_WCS_Simulink(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_WCS_Simulink_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,1,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3581641521U));
  ssSetChecksum1(S,(608956485U));
  ssSetChecksum2(S,(3626558253U));
  ssSetChecksum3(S,(3499420583U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,0);
}

static void mdlRTW_c1_WCS_Simulink(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_WCS_Simulink(SimStruct *S)
{
  SFc1_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc1_WCS_SimulinkInstanceStruct *)utMalloc(sizeof
    (SFc1_WCS_SimulinkInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_WCS_SimulinkInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_WCS_Simulink;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_WCS_Simulink;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c1_WCS_Simulink;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_WCS_Simulink;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_WCS_Simulink;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_WCS_Simulink;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_WCS_Simulink;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_WCS_Simulink;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_WCS_Simulink;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_WCS_Simulink;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_WCS_Simulink;
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

void c1_WCS_Simulink_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_WCS_Simulink(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_WCS_Simulink(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_WCS_Simulink(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_WCS_Simulink_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

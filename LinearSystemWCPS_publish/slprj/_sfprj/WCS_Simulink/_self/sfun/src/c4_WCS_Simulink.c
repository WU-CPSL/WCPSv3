/* Include files */

#include <stddef.h>
#include "blas.h"
#include "WCS_Simulink_sfun.h"
#include "c4_WCS_Simulink.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "WCS_Simulink_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c4_debug_family_names[10] = { "delay", "j", "uoutt_delay",
  "tracea", "nargin", "nargout", "uout", "udelay", "uout_delay", "trace2" };

/* Function Declarations */
static void initialize_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void initialize_params_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void enable_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void disable_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void c4_update_debugger_state_c4_WCS_Simulink
  (SFc4_WCS_SimulinkInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_WCS_Simulink
  (SFc4_WCS_SimulinkInstanceStruct *chartInstance);
static void set_sim_state_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_st);
static void finalize_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void sf_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct *chartInstance);
static void initSimStructsc4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void registerMessagesc4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static real_T c4_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_trace2, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_c_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_uout_delay, const char_T *c4_identifier, real_T c4_y[5]);
static void c4_d_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[5]);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_e_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[9]);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static int32_T c4_f_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static uint8_T c4_g_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_WCS_Simulink, const char_T
  *c4_identifier);
static uint8_T c4_h_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void init_dsm_address_info(SFc4_WCS_SimulinkInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
{
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_is_active_c4_WCS_Simulink = 0U;
}

static void initialize_params_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void enable_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_update_debugger_state_c4_WCS_Simulink
  (SFc4_WCS_SimulinkInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c4_WCS_Simulink
  (SFc4_WCS_SimulinkInstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  real_T c4_hoistedGlobal;
  real_T c4_u;
  const mxArray *c4_b_y = NULL;
  int32_T c4_i0;
  real_T c4_b_u[5];
  const mxArray *c4_c_y = NULL;
  uint8_T c4_b_hoistedGlobal;
  uint8_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  real_T *c4_trace2;
  real_T (*c4_uout_delay)[5];
  c4_trace2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_uout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(3), FALSE);
  c4_hoistedGlobal = *c4_trace2;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  for (c4_i0 = 0; c4_i0 < 5; c4_i0++) {
    c4_b_u[c4_i0] = (*c4_uout_delay)[c4_i0];
  }

  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_b_hoistedGlobal = chartInstance->c4_is_active_c4_WCS_Simulink;
  c4_c_u = c4_b_hoistedGlobal;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 2, c4_d_y);
  sf_mex_assign(&c4_st, c4_y, FALSE);
  return c4_st;
}

static void set_sim_state_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T c4_dv0[5];
  int32_T c4_i1;
  real_T *c4_trace2;
  real_T (*c4_uout_delay)[5];
  c4_trace2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_uout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_doneDoubleBufferReInit = TRUE;
  c4_u = sf_mex_dup(c4_st);
  *c4_trace2 = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    0)), "trace2");
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "uout_delay", c4_dv0);
  for (c4_i1 = 0; c4_i1 < 5; c4_i1++) {
    (*c4_uout_delay)[c4_i1] = c4_dv0[c4_i1];
  }

  chartInstance->c4_is_active_c4_WCS_Simulink = c4_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)),
     "is_active_c4_WCS_Simulink");
  sf_mex_destroy(&c4_u);
  c4_update_debugger_state_c4_WCS_Simulink(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void finalize_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void sf_c4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct *chartInstance)
{
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  real_T c4_uout[5];
  int32_T c4_i6;
  real_T c4_udelay[9];
  uint32_T c4_debug_family_var_map[10];
  real_T c4_delay[9];
  real_T c4_j;
  real_T c4_uoutt_delay[5];
  real_T c4_tracea;
  real_T c4_nargin = 2.0;
  real_T c4_nargout = 2.0;
  real_T c4_uout_delay[5];
  real_T c4_trace2;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  real_T *c4_b_trace2;
  real_T (*c4_b_uout_delay)[5];
  real_T (*c4_b_udelay)[9];
  real_T (*c4_b_uout)[5];
  c4_b_trace2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_udelay = (real_T (*)[9])ssGetInputPortSignal(chartInstance->S, 1);
  c4_b_uout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_b_uout = (real_T (*)[5])ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
  for (c4_i2 = 0; c4_i2 < 5; c4_i2++) {
    _SFD_DATA_RANGE_CHECK((*c4_b_uout)[c4_i2], 0U);
  }

  for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
    _SFD_DATA_RANGE_CHECK((*c4_b_uout_delay)[c4_i3], 1U);
  }

  for (c4_i4 = 0; c4_i4 < 9; c4_i4++) {
    _SFD_DATA_RANGE_CHECK((*c4_b_udelay)[c4_i4], 2U);
  }

  _SFD_DATA_RANGE_CHECK(*c4_b_trace2, 3U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
  for (c4_i5 = 0; c4_i5 < 5; c4_i5++) {
    c4_uout[c4_i5] = (*c4_b_uout)[c4_i5];
  }

  for (c4_i6 = 0; c4_i6 < 9; c4_i6++) {
    c4_udelay[c4_i6] = (*c4_b_udelay)[c4_i6];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 10U, 10U, c4_debug_family_names,
    c4_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c4_delay, 0U, c4_d_sf_marshallOut,
    c4_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c4_j, 1U, c4_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c4_uoutt_delay, 2U, c4_b_sf_marshallOut,
    c4_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_tracea, 3U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_nargin, 4U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_nargout, 5U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c4_uout, 6U, c4_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c4_udelay, 7U, c4_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c4_uout_delay, 8U, c4_b_sf_marshallOut,
    c4_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_trace2, 9U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 13);
  for (c4_i7 = 0; c4_i7 < 9; c4_i7++) {
    c4_delay[c4_i7] = c4_udelay[c4_i7];
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 15);
  c4_j = 1.0;
  CV_EML_FOR(0, 1, 0, 1);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 16);
  if (CV_EML_IF(0, 1, 0, c4_delay[1] != 88.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 17);
    for (c4_i8 = 0; c4_i8 < 5; c4_i8++) {
      c4_uoutt_delay[c4_i8] = c4_uout[c4_i8];
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 18);
    c4_tracea = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 20);
    for (c4_i9 = 0; c4_i9 < 5; c4_i9++) {
      c4_uoutt_delay[c4_i9] = 0.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 21);
    c4_tracea = 0.0;
  }

  CV_EML_FOR(0, 1, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 25);
  for (c4_i10 = 0; c4_i10 < 5; c4_i10++) {
    c4_uout_delay[c4_i10] = c4_uoutt_delay[c4_i10];
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 26);
  c4_trace2 = c4_tracea;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, -26);
  _SFD_SYMBOL_SCOPE_POP();
  for (c4_i11 = 0; c4_i11 < 5; c4_i11++) {
    (*c4_b_uout_delay)[c4_i11] = c4_uout_delay[c4_i11];
  }

  *c4_b_trace2 = c4_trace2;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_WCS_SimulinkMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
{
}

static void registerMessagesc4_WCS_Simulink(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance)
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
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static real_T c4_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_trace2, const char_T *c4_identifier)
{
  real_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_trace2), &c4_thisId);
  sf_mex_destroy(&c4_trace2);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d0, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_trace2;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_trace2 = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_trace2), &c4_thisId);
  sf_mex_destroy(&c4_trace2);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i12;
  real_T c4_b_inData[5];
  int32_T c4_i13;
  real_T c4_u[5];
  const mxArray *c4_y = NULL;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i12 = 0; c4_i12 < 5; c4_i12++) {
    c4_b_inData[c4_i12] = (*(real_T (*)[5])c4_inData)[c4_i12];
  }

  for (c4_i13 = 0; c4_i13 < 5; c4_i13++) {
    c4_u[c4_i13] = c4_b_inData[c4_i13];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 1, 5), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_c_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_uout_delay, const char_T *c4_identifier, real_T c4_y[5])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_uout_delay), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_uout_delay);
}

static void c4_d_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[5])
{
  real_T c4_dv1[5];
  int32_T c4_i14;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv1, 1, 0, 0U, 1, 0U, 1, 5);
  for (c4_i14 = 0; c4_i14 < 5; c4_i14++) {
    c4_y[c4_i14] = c4_dv1[c4_i14];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_uout_delay;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[5];
  int32_T c4_i15;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_uout_delay = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_uout_delay), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_uout_delay);
  for (c4_i15 = 0; c4_i15 < 5; c4_i15++) {
    (*(real_T (*)[5])c4_outData)[c4_i15] = c4_y[c4_i15];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i16;
  real_T c4_b_inData[9];
  int32_T c4_i17;
  real_T c4_u[9];
  const mxArray *c4_y = NULL;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i16 = 0; c4_i16 < 9; c4_i16++) {
    c4_b_inData[c4_i16] = (*(real_T (*)[9])c4_inData)[c4_i16];
  }

  for (c4_i17 = 0; c4_i17 < 9; c4_i17++) {
    c4_u[c4_i17] = c4_b_inData[c4_i17];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 1, 9), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i18;
  real_T c4_b_inData[9];
  int32_T c4_i19;
  real_T c4_u[9];
  const mxArray *c4_y = NULL;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i18 = 0; c4_i18 < 9; c4_i18++) {
    c4_b_inData[c4_i18] = (*(real_T (*)[9])c4_inData)[c4_i18];
  }

  for (c4_i19 = 0; c4_i19 < 9; c4_i19++) {
    c4_u[c4_i19] = c4_b_inData[c4_i19];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 2, 1, 9), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_e_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[9])
{
  real_T c4_dv2[9];
  int32_T c4_i20;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv2, 1, 0, 0U, 1, 0U, 2, 1, 9);
  for (c4_i20 = 0; c4_i20 < 9; c4_i20++) {
    c4_y[c4_i20] = c4_dv2[c4_i20];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_delay;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[9];
  int32_T c4_i21;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_delay = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_delay), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_delay);
  for (c4_i21 = 0; c4_i21 < 9; c4_i21++) {
    (*(real_T (*)[9])c4_outData)[c4_i21] = c4_y[c4_i21];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

const mxArray *sf_c4_WCS_Simulink_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), FALSE);
  return c4_nameCaptureInfo;
}

static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static int32_T c4_f_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i22;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i22, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i22;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_sfEvent;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_y;
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)chartInstanceVoid;
  c4_b_sfEvent = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  *(int32_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static uint8_T c4_g_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_WCS_Simulink, const char_T
  *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_WCS_Simulink), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_WCS_Simulink);
  return c4_y;
}

static uint8_T c4_h_emlrt_marshallIn(SFc4_WCS_SimulinkInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u0, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void init_dsm_address_info(SFc4_WCS_SimulinkInstanceStruct *chartInstance)
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

void sf_c4_WCS_Simulink_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3608416844U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(771869485U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3189070589U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1924768373U);
}

mxArray *sf_c4_WCS_Simulink_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("uA3LhtbVokYxAiGIe9ecpG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
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

mxArray *sf_c4_WCS_Simulink_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray *sf_get_sim_state_info_c4_WCS_Simulink(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[18],T\"trace2\",},{M[1],M[5],T\"uout_delay\",},{M[8],M[0],T\"is_active_c4_WCS_Simulink\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_WCS_Simulink_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_WCS_SimulinkInstanceStruct *chartInstance;
    chartInstance = (SFc4_WCS_SimulinkInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _WCS_SimulinkMachineNumber_,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"uout");
          _SFD_SET_DATA_PROPS(1,2,0,1,"uout_delay");
          _SFD_SET_DATA_PROPS(2,1,1,0,"udelay");
          _SFD_SET_DATA_PROPS(3,2,0,1,"trace2");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,520);
        _SFD_CV_INIT_EML_IF(0,1,0,328,347,399,471);
        _SFD_CV_INIT_EML_FOR(0,1,0,315,323,476);
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
          dimVector[0]= 5;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 5;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)
            c4_b_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 9;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);

        {
          real_T *c4_trace2;
          real_T (*c4_uout)[5];
          real_T (*c4_uout_delay)[5];
          real_T (*c4_udelay)[9];
          c4_trace2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c4_udelay = (real_T (*)[9])ssGetInputPortSignal(chartInstance->S, 1);
          c4_uout_delay = (real_T (*)[5])ssGetOutputPortSignal(chartInstance->S,
            1);
          c4_uout = (real_T (*)[5])ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c4_uout);
          _SFD_SET_DATA_VALUE_PTR(1U, *c4_uout_delay);
          _SFD_SET_DATA_VALUE_PTR(2U, *c4_udelay);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_trace2);
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
  return "pAWIHaCDe7UXB2OSY8Un2F";
}

static void sf_opaque_initialize_c4_WCS_Simulink(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc4_WCS_SimulinkInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*)
    chartInstanceVar);
  initialize_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_WCS_Simulink(void *chartInstanceVar)
{
  enable_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_WCS_Simulink(void *chartInstanceVar)
{
  disable_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_WCS_Simulink(void *chartInstanceVar)
{
  sf_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c4_WCS_Simulink(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_WCS_Simulink
    ((SFc4_WCS_SimulinkInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_WCS_Simulink();/* state var info */
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

extern void sf_internal_set_sim_state_c4_WCS_Simulink(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_WCS_Simulink();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c4_WCS_Simulink(SimStruct* S)
{
  return sf_internal_get_sim_state_c4_WCS_Simulink(S);
}

static void sf_opaque_set_sim_state_c4_WCS_Simulink(SimStruct* S, const mxArray *
  st)
{
  sf_internal_set_sim_state_c4_WCS_Simulink(S, st);
}

static void sf_opaque_terminate_c4_WCS_Simulink(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_WCS_SimulinkInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_WCS_Simulink_optimization_info();
    }

    finalize_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_WCS_Simulink(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_WCS_Simulink((SFc4_WCS_SimulinkInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_WCS_Simulink(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_WCS_Simulink_optimization_info();
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
        infoStruct,4,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
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
  ssSetChecksum0(S,(1632142970U));
  ssSetChecksum1(S,(3559100693U));
  ssSetChecksum2(S,(877080763U));
  ssSetChecksum3(S,(2398823077U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c4_WCS_Simulink(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c4_WCS_Simulink(SimStruct *S)
{
  SFc4_WCS_SimulinkInstanceStruct *chartInstance;
  chartInstance = (SFc4_WCS_SimulinkInstanceStruct *)utMalloc(sizeof
    (SFc4_WCS_SimulinkInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc4_WCS_SimulinkInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_WCS_Simulink;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_WCS_Simulink;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c4_WCS_Simulink;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_WCS_Simulink;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_WCS_Simulink;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c4_WCS_Simulink;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c4_WCS_Simulink;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_WCS_Simulink;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_WCS_Simulink;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_WCS_Simulink;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_WCS_Simulink;
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

void c4_WCS_Simulink_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_WCS_Simulink(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_WCS_Simulink(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_WCS_Simulink(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_WCS_Simulink_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

/**
 * Generated on Wed, 19 Jun 2024 07:44:30 +0200.
 *
 * This file contains the function prototypes for the RV32IMACFDV_zvl1024b core architecture.
 */

#ifndef __RV32IMACFDV_zvl1024b_FUNCS_H
#define __RV32IMACFDV_zvl1024b_FUNCS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "RV32IMACFDV_zvl1024b.h"
#include "etiss/jit/CPU.h"
#include "etiss/jit/System.h"
#include "etiss/jit/ReturnCode.h"
#include "etiss/jit/Coverage.h"


void leave(etiss_int32 priv_lvl);

void wait(etiss_int32 flag);

etiss_uint8 RV32IMACFDV_zvl1024b_extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension);

etiss_uint8 vtype_extractSEW(etiss_uint16);

etiss_uint8 vtype_extractLMUL(etiss_uint16);

etiss_uint8 vtype_extractTA(etiss_uint16);

etiss_uint8 vtype_extractMA(etiss_uint16);

etiss_uint16 vcfg_concatEEW(etiss_uint8 mew, etiss_uint8 width);

etiss_uint8 etiss_vload_encoded_unitstride(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8* pV, etiss_uint16 pVTYPE, etiss_uint8 pVm, etiss_uint16 pEEW, etiss_uint8 pVd, etiss_uint16 pVSTART, etiss_uint16 pVLEN, etiss_uint16 pVL, etiss_uint64 pMSTART);
etiss_uint8 etiss_vload_encoded_unitstride(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8* pV, etiss_uint16 pVTYPE, etiss_uint8 pVm, etiss_uint16 pEEW, etiss_uint8 pVd, etiss_uint16 pVSTART, etiss_uint16 pVLEN, etiss_uint16 pVL, etiss_uint64 pMSTART);
etiss_uint8 etiss_vstore_encoded_unitstride(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8* pV, etiss_uint16 pVTYPE, etiss_uint8 pVm, etiss_uint16 pEEW, etiss_uint8 pVd, etiss_uint16 pVSTART, etiss_uint16 pVLEN, etiss_uint16 pVL, etiss_uint64 pMSTART);

etiss_uint32 fadd_s(etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint32 fsub_s(etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint32 fmul_s(etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint32 fdiv_s(etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint32 fmadd_s(etiss_uint32, etiss_uint32, etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint32 fsel_s(etiss_uint32, etiss_uint32, etiss_uint32);

etiss_uint32 fsqrt_s(etiss_uint32, etiss_uint8);

etiss_uint32 fcmp_s(etiss_uint32, etiss_uint32, etiss_uint32);

etiss_uint32 fcvt_s(etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint64 fcvt_32_64(etiss_uint32, etiss_uint32, etiss_uint8);

etiss_uint32 fcvt_64_32(etiss_uint64, etiss_uint32, etiss_uint8);

etiss_uint32 unbox_s(etiss_uint64);

etiss_uint32 fclass_s(etiss_uint32);

etiss_uint32 fget_flags();

etiss_uint8 RV32IMACFDV_zvl1024b_get_rm(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8 rm);

etiss_uint64 fadd_d(etiss_uint64, etiss_uint64, etiss_uint8);

etiss_uint64 fsub_d(etiss_uint64, etiss_uint64, etiss_uint8);

etiss_uint64 fmul_d(etiss_uint64, etiss_uint64, etiss_uint8);

etiss_uint64 fdiv_d(etiss_uint64, etiss_uint64, etiss_uint8);

etiss_uint64 fmadd_d(etiss_uint64, etiss_uint64, etiss_uint64, etiss_uint32, etiss_uint8);

etiss_uint64 fsel_d(etiss_uint64, etiss_uint64, etiss_uint32);

etiss_uint64 fsqrt_d(etiss_uint64, etiss_uint8);

etiss_uint64 fcmp_d(etiss_uint64, etiss_uint64, etiss_uint32);

etiss_uint64 fcvt_d(etiss_uint64, etiss_uint32, etiss_uint8);

etiss_uint32 fconv_d2f(etiss_uint64, etiss_uint8);

etiss_uint64 fconv_f2d(etiss_uint32, etiss_uint8);

etiss_uint64 unbox_d(etiss_uint64);

etiss_uint64 fclass_d(etiss_uint64);

etiss_uint64 etiss_get_cycles(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

etiss_uint64 etiss_get_time();

etiss_uint64 etiss_get_instret(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

etiss_uint32 RV32IMACFDV_zvl1024b_sstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

etiss_uint32 RV32IMACFDV_zvl1024b_mstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

etiss_uint32 RV32IMACFDV_zvl1024b_csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr);

void RV32IMACFDV_zvl1024b_csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint32 val);

etiss_uint64 RV32IMACFDV_zvl1024b_get_field(etiss_uint64 reg, etiss_uint64 mask);

etiss_uint64 RV32IMACFDV_zvl1024b_set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val);

etiss_uint8 RV32IMACFDV_zvl1024b_ctz(etiss_uint64 val);

void RV32IMACFDV_zvl1024b_raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_uint32 mcause);

void RV32IMACFDV_zvl1024b_translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause);

etiss_uint32 RV32IMACFDV_zvl1024b_calc_irq_mcause(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

void RV32IMACFDV_zvl1024b_check_irq(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);

etiss_uint8 etiss_semihost_enabled();

etiss_int64 etiss_semihost(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 XLEN, etiss_uint64 operation, etiss_uint64 parameter);

#ifdef __cplusplus
}
#endif

#endif

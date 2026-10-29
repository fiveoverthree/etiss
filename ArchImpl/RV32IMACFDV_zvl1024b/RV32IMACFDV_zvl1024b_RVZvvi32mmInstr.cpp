// clang-format off
/**
 * Generated on Fri, 18 Sep 2026 18:47:46 +0200.
 *
 * This file contains the instruction behavior models of the RVZvvi32mm
 * instruction set for the RV32IMACFDV_zvl1024b core architecture.
 */

#include "RV32IMACFDV_zvl1024bArch.h"
#include "RV32IMACFDV_zvl1024bFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// VSETVLI ---------------------------------------------------------------------
static InstructionDefinition vsetvli_rd_rs1_zimm (
	ISA32_RV32IMACFDV_zvl1024b,
	"vsetvli",
	(uint64_t) 0x007057,
	(uint64_t) 0x8000707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 zimm = 0;
static BitArrayRange R_zimm_0(30, 20);
zimm += R_zimm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSETVLI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 sew = (vtype_extractSEW(" + std::to_string(zimm) + "ULL)) & 0x7ULL;\n";
cp.code() += "etiss_uint8 lmul = (vtype_extractLMUL(" + std::to_string(zimm) + "ULL)) & 0x7ULL;\n";
cp.code() += "etiss_uint8 vta = (vtype_extractTA(" + std::to_string(zimm) + "ULL)) & 0x1ULL;\n";
cp.code() += "etiss_uint8 vma = (vtype_extractMA(" + std::to_string(zimm) + "ULL)) & 0x1ULL;\n";
cp.code() += "etiss_uint32 vtype_result = " + std::to_string(zimm) + "ULL;\n";
cp.code() += "etiss_uint32 _vlmax = 0LL;\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "if (sew == 3ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = 2147483648ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (lmul & 4ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (lmul == 6ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) / 4ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 7ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) / 2ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = 2147483648ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (lmul == 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) * 2ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 2ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) * 4ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 3ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) * 8ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 _avl = 0LL;\n";
if (rs1 != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "_avl = *((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
 else if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "_avl = -1LL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "_avl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "etiss_uint32 _vl = 0LL;\n";
cp.code() += "if (_avl <= _vlmax) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _avl;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (_avl >= (2ULL * _vlmax)) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _vlmax;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _vlmax;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 L = (vlen / (8ULL << sew));\n";
cp.code() += "etiss_uint8 lambda = ((*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL] >> 28ULL) & 7ULL) & 0x7ULL;\n";
cp.code() += "etiss_uint32 emulc = (L >> (lambda - 1ULL)) >> (lambda - 1ULL);\n";
cp.code() += "if (lambda != 0LL && emulc >= 1ULL && emulc <= 16ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | lambda << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((L & (L - 1ULL)) == 0LL) && L < 8192ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 i = (1ULL) & 0x7ULL;\n";
cp.code() += "while (L >= 4ULL)\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "L = L >> 2ULL;\n";
cp.code() += "i = (i + 1ULL) & 0x7ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | i << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL] = _vl;\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL] = vtype_result;\n";
if (rd != 0LL) { // conditional
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rd) + "ULL] = _vl;\n";
} // conditional
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 zimm = 0;
static BitArrayRange R_zimm_0(30, 20);
zimm += R_zimm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsetvli" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | zimm=" + std::to_string(zimm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSETIVLI --------------------------------------------------------------------
static InstructionDefinition vsetivli_rd_uimm_vtypei (
	ISA32_RV32IMACFDV_zvl1024b,
	"vsetivli",
	(uint64_t) 0xc0007057,
	(uint64_t) 0xc000707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_0(19, 15);
uimm += R_uimm_0.read(ba) << 0;
etiss_uint16 vtypei = 0;
static BitArrayRange R_vtypei_0(29, 20);
vtypei += R_vtypei_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSETIVLI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 sew = (vtype_extractSEW(" + std::to_string(vtypei) + "ULL)) & 0x7ULL;\n";
cp.code() += "etiss_uint8 lmul = (vtype_extractLMUL(" + std::to_string(vtypei) + "ULL)) & 0x7ULL;\n";
cp.code() += "etiss_uint8 vta = (vtype_extractTA(" + std::to_string(vtypei) + "ULL)) & 0x1ULL;\n";
cp.code() += "etiss_uint8 vma = (vtype_extractMA(" + std::to_string(vtypei) + "ULL)) & 0x1ULL;\n";
cp.code() += "etiss_uint32 _vlmax = 0LL;\n";
cp.code() += "etiss_uint32 vtype_result = " + std::to_string(vtypei) + "ULL;\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "if (sew == 3ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = 2147483648ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (lmul & 4ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (lmul == 6ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) / 4ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 7ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) / 2ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = 2147483648ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (lmul == 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) * 2ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 2ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) * 4ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 3ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = vlen / (8ULL << sew) * 8ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
etiss_uint32 _avl = uimm;
cp.code() += "etiss_uint32 _vl = 0LL;\n";
cp.code() += "if (" + std::to_string(_avl) + "ULL <= _vlmax) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = " + std::to_string(_avl) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (" + std::to_string(_avl) + "ULL >= (2ULL * _vlmax)) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _vlmax;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _vlmax;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 L = (vlen / (8ULL << sew));\n";
cp.code() += "etiss_uint8 lambda = ((*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL] >> 28ULL) & 7ULL) & 0x7ULL;\n";
cp.code() += "etiss_uint32 emulc = (L >> (lambda - 1ULL)) >> (lambda - 1ULL);\n";
cp.code() += "if (lambda != 0LL && emulc >= 1ULL && emulc <= 16ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | lambda << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((L & (L - 1ULL)) == 0LL) && L < 8192ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 i = (1ULL) & 0x7ULL;\n";
cp.code() += "while (L >= 4ULL)\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "L = L >> 2ULL;\n";
cp.code() += "i = (i + 1ULL) & 0x7ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | i << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL] = _vl;\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL] = vtype_result;\n";
if (rd != 0LL) { // conditional
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rd) + "ULL] = _vl;\n";
} // conditional
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_0(19, 15);
uimm += R_uimm_0.read(ba) << 0;
etiss_uint16 vtypei = 0;
static BitArrayRange R_vtypei_0(29, 20);
vtypei += R_vtypei_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsetivli" << " # " << ba << (" [rd=" + std::to_string(rd) + " | uimm=" + std::to_string(uimm) + " | vtypei=" + std::to_string(vtypei) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSETVL ----------------------------------------------------------------------
static InstructionDefinition vsetvl_rd_rs1_rs2 (
	ISA32_RV32IMACFDV_zvl1024b,
	"vsetvl",
	(uint64_t) 0x80007057,
	(uint64_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSETVL\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 zimm = *((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_uint8 sew = (vtype_extractSEW(zimm)) & 0x7ULL;\n";
cp.code() += "etiss_uint8 lmul = (vtype_extractLMUL(zimm)) & 0x7ULL;\n";
cp.code() += "etiss_uint8 vta = (vtype_extractTA(zimm)) & 0x1ULL;\n";
cp.code() += "etiss_uint8 vma = (vtype_extractMA(zimm)) & 0x1ULL;\n";
cp.code() += "etiss_uint8 lambda = ((zimm >> 28ULL) & 7ULL) & 0x7ULL;\n";
cp.code() += "etiss_uint32 _vlmax = 0LL;\n";
cp.code() += "etiss_uint32 vtype_result = zimm;\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "if (sew == 3ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = 2147483648ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (lmul & 4ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (lmul == 6ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = _vlen / (8ULL << sew) / 4ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 7ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = _vlen / (8ULL << sew) / 2ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = 2147483648ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (lmul == 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = _vlen / (8ULL << sew);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = _vlen / (8ULL << sew) * 2ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 2ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = _vlen / (8ULL << sew) * 4ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (lmul == 3ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vlmax = _vlen / (8ULL << sew) * 8ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 _avl = 0LL;\n";
if (rs1 != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "_avl = *((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
 else if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "_avl = -1LL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "_avl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "etiss_uint32 _vl = 0LL;\n";
cp.code() += "if (_avl <= _vlmax) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _avl;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += " else if (_avl >= (2ULL * _vlmax)) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _vlmax;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "_vl = _vlmax;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint8 old_lambda = ((*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL] >> 28ULL) & 7ULL) & 0x7ULL;\n";
cp.code() += "etiss_uint32 L = (_vlen / (8ULL << sew));\n";
cp.code() += "etiss_uint32 emulc = (L >> (old_lambda - 1ULL)) >> (old_lambda - 1ULL);\n";
cp.code() += "if (lambda == 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (emulc >= 1ULL && emulc <= 16ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | old_lambda << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((L & (L - 1ULL)) == 0LL) && L < 8192ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 i = (1ULL) & 0x7ULL;\n";
cp.code() += "while (L >= 4ULL)\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "L = L >> 2ULL;\n";
cp.code() += "i = (i + 1ULL) & 0x7ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | i << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((L & (L - 1ULL)) == 0LL) && L < 8192ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 i = (1ULL) & 0x7ULL;\n";
cp.code() += "while (L >= 4ULL && !((i >= lambda && L <= 16ULL)))\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "L = L >> 2ULL;\n";
cp.code() += "i = (i + 1ULL) & 0x7ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "vtype_result = vtype_result | i << 28ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "vtype_result = vtype_result & -1879048193LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL] = _vl;\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL] = vtype_result;\n";
if (rd != 0LL) { // conditional
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rd) + "ULL] = _vl;\n";
} // conditional
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsetvl" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMMACC_VV -------------------------------------------------------------------
static InstructionDefinition vmmacc_vv_vd_vs1_vs2 (
	ISA32_RV32IMACFDV_zvl1024b,
	"vmmacc_vv",
	(uint64_t) 0xe2000057,
	(uint64_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMMACC_VV\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 vtype = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_uint32 vstart = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_uint32 vl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = vmmacc_vv(((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, vstart, vlen, vl);\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VWMMACC_VV ------------------------------------------------------------------
static InstructionDefinition vwmmacc_vv_vd_vs1_vs2 (
	ISA32_RV32IMACFDV_zvl1024b,
	"vwmmacc_vv",
	(uint64_t) 0xe6000057,
	(uint64_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VWMMACC_VV\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 vtype = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_uint32 vstart = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_uint32 vl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = vwmmacc_vv(((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, vstart, vlen, vl);\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vwmmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VQWMMACC_VV -----------------------------------------------------------------
static InstructionDefinition vqwmmacc_vv_vd_vs1_vs2 (
	ISA32_RV32IMACFDV_zvl1024b,
	"vqwmmacc_vv",
	(uint64_t) 0xea000057,
	(uint64_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VQWMMACC_VV\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 vtype = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_uint32 vstart = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_uint32 vl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = vqwmmacc_vv(((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, vstart, vlen, vl);\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vqwmmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMTL_V ----------------------------------------------------------------------
static InstructionDefinition vmtl_v_vd_rs1_rs2_vm_llambda (
	ISA32_RV32IMACFDV_zvl1024b,
	"vmtl_v",
	(uint64_t) 0x10007007,
	(uint64_t) 0x1c00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 llambda = 0;
static BitArrayRange R_llambda_0(31, 29);
llambda += R_llambda_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMTL_V\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 vtype = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_uint32 vstart = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_uint32 vl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = etiss_vmtl_v(cpu, system, plugin_pointers, ((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(llambda) + "ULL, (etiss_uint32)(*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs2) + "ULL]), vstart, vlen, vl, (etiss_uint64)(*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 llambda = 0;
static BitArrayRange R_llambda_0(31, 29);
llambda += R_llambda_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmtl_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | vm=" + std::to_string(vm) + " | llambda=" + std::to_string(llambda) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMTS_V ----------------------------------------------------------------------
static InstructionDefinition vmts_v_vd_rs1_rs2_vm_llambda (
	ISA32_RV32IMACFDV_zvl1024b,
	"vmts_v",
	(uint64_t) 0x10007027,
	(uint64_t) 0x1c00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 llambda = 0;
static BitArrayRange R_llambda_0(31, 29);
llambda += R_llambda_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMTS_V\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 vtype = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_uint32 vstart = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_uint32 vl = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = etiss_vmts_v(cpu, system, plugin_pointers, ((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(llambda) + "ULL, (etiss_uint32)(*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs2) + "ULL]), vstart, vlen, vl, (etiss_uint64)(*((RV32IMACFDV_zvl1024b*)cpu)->X[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "*((RV32IMACFDV_zvl1024b*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 llambda = 0;
static BitArrayRange R_llambda_0(31, 29);
llambda += R_llambda_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmts_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | vm=" + std::to_string(vm) + " | llambda=" + std::to_string(llambda) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on

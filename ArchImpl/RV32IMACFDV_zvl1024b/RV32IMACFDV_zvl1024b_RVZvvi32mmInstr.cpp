// clang-format off
/**
 * Generated on Tue, 04 Aug 2026 12:42:35 +0200.
 *
 * This file contains the instruction behavior models of the RVZvvi32mm
 * instruction set for the RV32IMACFDV_zvl1024b core architecture.
 */

#include "RV32IMACFDV_zvl1024bArch.h"
#include "RV32IMACFDV_zvl1024bFuncs.h"

using namespace etiss;
using namespace etiss::instr;

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
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = vmmacc_vv(((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, vstart, vlen);\n";
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
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = vwmmacc_vv(((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, vstart, vlen);\n";
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
cp.code() += "etiss_uint32 vlen = *((RV32IMACFDV_zvl1024b*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_uint32 ret = vqwmmacc_vv(((RV32IMACFDV_zvl1024b*)cpu)->V, vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, vstart, vlen);\n";
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
// clang-format on

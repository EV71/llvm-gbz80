//===-- GBZ80MCTargetDesc.h - GBZ80 Target Descriptions ---------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides Cpu0 specific target descriptions.
//
//===----------------------------------------------------------------------===//

#ifndef GBZ80MCTARGETDESC_H
#define GBZ80MCTARGETDESC_H

#include "llvm/Support/DataTypes.h"

namespace llvm {
    class Target;

    extern Target TheGBZ80Target;
}

#define GET_REGINFO_ENUM
#include "GBZ80GenRegisterInfo.inc"

#define GET_INSTRINFO_ENUM
#include "GBZ80GenInstrInfo.inc"

#endif // GBZ80MCTARGETDESC_H

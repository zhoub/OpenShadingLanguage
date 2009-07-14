/*****************************************************************************
 *
 *             Copyright (c) 2009 Sony Pictures Imageworks, Inc.
 *                            All rights reserved.
 *
 *  This material contains the confidential and proprietary information
 *  of Sony Pictures Imageworks, Inc. and may not be disclosed, copied or
 *  duplicated in any form, electronic or hardcopy, in whole or in part,
 *  without the express prior written consent of Sony Pictures Imageworks,
 *  Inc. This copyright notice does not imply publication.
 *
 *****************************************************************************/

#ifndef OSLOPS_H
#define OSLOPS_H

#include "OpenImageIO/typedesc.h"

#include "oslexec.h"
#include "osl_pvt.h"
#include "oslexec_pvt.h"


namespace OSL {
namespace pvt {


/// Macro that defines the arguments to shading opcode implementations
///
#define OPARGSDECL     ShadingExecution *exec, int nargs, const int *args, \
                       Runflag *runflags, int beginpoint, int endpoint

/// Macro that defines the full declaration of a shading opcode
/// implementation
#define DECLOP(name)   void name (OPARGSDECL)


// Declarations of all our shader opcodes follow:

//DECLOP (OP_aastep);
//DECLOP (OP_aassign);
//DECLOP (OP_acos);
DECLOP (OP_add);
//DECLOP (OP_ambient);
//DECLOP (OP_and);
//DECLOP (OP_area);
//DECLOP (OP_aref);
//DECLOP (OP_arraylength);
//DECLOP (OP_asin);
//DECLOP (OP_atan);
//DECLOP (OP_atan2);
DECLOP (OP_assign);
//DECLOP (OP_bitand);
//DECLOP (OP_bitor);
//DECLOP (OP_bump);
//DECLOP (OP_calculatenormal);
//DECLOP (OP_ceil);
//DECLOP (OP_cellnoise);
//DECLOP (OP_clamp);
//DECLOP (OP_color);
//DECLOP (OP_compassign);
//DECLOP (OP_compl);
//DECLOP (OP_compref);
//DECLOP (OP_concat);
//DECLOP (OP_cooktorrance);
//DECLOP (OP_cos);
//DECLOP (OP_cosh);
//DECLOP (OP_cross);
//DECLOP (OP_decr);
//DECLOP (OP_degrees);
//DECLOP (OP_deltau);
//DECLOP (OP_deltav);
//DECLOP (OP_determinant);
//DECLOP (OP_diffuse);
//DECLOP (OP_displace);
//DECLOP (OP_distance);
DECLOP (OP_div);
//DECLOP (OP_do);
//DECLOP (OP_dot);
//DECLOP (OP_Du);
//DECLOP (OP_Dv);
//DECLOP (OP_emission);
//DECLOP (OP_environment);
DECLOP (OP_end);
//DECLOP (OP_erf);
//DECLOP (OP_erfc);
//DECLOP (OP_error);
//DECLOP (OP_exit);
//DECLOP (OP_exp);
//DECLOP (OP_exp2);
//DECLOP (OP_expm1);
//DECLOP (OP_eq);
//DECLOP (OP_fabs);
//DECLOP (OP_faceforward);
//DECLOP (OP_filterwidth);
//DECLOP (OP_fmod);
//DECLOP (OP_floor);
//DECLOP (OP_for);
//DECLOP (OP_format);
//DECLOP (OP_fprintf);
//DECLOP (OP_fresnel);
//DECLOP (OP_ge);
//DECLOP (OP_getattribute);
//DECLOP (OP_getmessage);
//DECLOP (OP_gettextureinfo);
//DECLOP (OP_gt);
//DECLOP (OP_hash);
//DECLOP (OP_hypot);
//DECLOP (OP_if);
//DECLOP (OP_incr);
//DECLOP (OP_inversespline);
//DECLOP (OP_inversesqrt);
//DECLOP (OP_isnan);
//DECLOP (OP_isinf);
//DECLOP (OP_isindirectray);
//DECLOP (OP_isfinite);
//DECLOP (OP_isshadowray);
//DECLOP (OP_le);
//DECLOP (OP_length);
//DECLOP (OP_log);
//DECLOP (OP_log2);
//DECLOP (OP_log10);
//DECLOP (OP_logb);
//DECLOP (OP_lt);
//DECLOP (OP_luminance);
//DECLOP (OP_matrix);
//DECLOP (OP_max);
//DECLOP (OP_min);
//DECLOP (OP_mix);
//DECLOP (OP_mxcompassign);
//DECLOP (OP_mxcompref);
//DECLOP (OP_mod);
DECLOP (OP_mul);
//DECLOP (OP_neq);
DECLOP (OP_neg);
//DECLOP (OP_noise);
//DECLOP (OP_normal);
//DECLOP (OP_normalize);
//DECLOP (OP_not);
//DECLOP (OP_or);
//DECLOP (OP_orennayar);
//DECLOP (OP_point);
DECLOP (OP_printf);
//DECLOP (OP_pow);
//DECLOP (OP_psnoise);
//DECLOP (OP_radians);
//DECLOP (OP_random);
//DECLOP (OP_reflect);
//DECLOP (OP_reflection);
//DECLOP (OP_refract);
//DECLOP (OP_refraction);
//DECLOP (OP_raylevel);
//DECLOP (OP_regex_match);
//DECLOP (OP_regex_search);
//DECLOP (OP_rotate);
//DECLOP (OP_round);
//DECLOP (OP_setattribute);
//DECLOP (OP_setmessage);
//DECLOP (OP_shadow);
//DECLOP (OP_shl);
//DECLOP (OP_shr);
//DECLOP (OP_sign);
//DECLOP (OP_sin);
//DECLOP (OP_sinh);
//DECLOP (OP_smoothstep);
//DECLOP (OP_snoise);
//DECLOP (OP_spline);
//DECLOP (OP_sqrt);
//DECLOP (OP_step);
DECLOP (OP_sub);
//DECLOP (OP_substr);
//DECLOP (OP_subsurface);
//DECLOP (OP_tan);
//DECLOP (OP_tanh);
//DECLOP (OP_texture);
//DECLOP (OP_transform);
//DECLOP (OP_transformc);
//DECLOP (OP_transformu);
//DECLOP (OP_transpose);
//DECLOP (OP_translucence);
//DECLOP (OP_trunc);
//DECLOP (OP_vector);
//DECLOP (OP_ward);
//DECLOP (OP_xor);

DECLOP (OP_missing);



// Heavy lifting of the math and other binary ops, this is a templated
// version that knows the types of the arguments and the operation to
// perform (given by a functor).
template <class RET, class ATYPE, class BTYPE, class FUNCTION>
DECLOP (binary_op)
{
    // Get references to the symbols this op accesses
    Symbol &Result (exec->sym (args[0]));
    Symbol &A (exec->sym (args[1]));
    Symbol &B (exec->sym (args[2]));

    // Adjust the result's uniform/varying status
    exec->adjust_varying (Result, A.is_varying() | B.is_varying(),
                          A.data() == Result.data() || B.data() == Result.data());

    // Loop over points, do the operation
    VaryingRef<RET> result ((RET *)Result.data(), Result.step());
    VaryingRef<ATYPE> a ((ATYPE *)A.data(), A.step());
    VaryingRef<BTYPE> b ((BTYPE *)B.data(), B.step());
    FUNCTION function;
    if (result.is_uniform()) {
        // Uniform case
        *result = function (*a, *b);
    } else if (A.is_uniform() && B.is_uniform()) {
        // Operands are uniform but we're assigning to a varying (it can
        // happen if we're in a conditional).  Take a shortcut by doing
        // the operation only once.
        RET r = function (*a, *b);
        for (int i = beginpoint;  i < endpoint;  ++i)
            if (runflags[i])
                result[i] = r;
    } else {
        // Fully varying case
        for (int i = beginpoint;  i < endpoint;  ++i)
            if (runflags[i])
                result[i] = function (a[i], b[i]);
    }
}



// Heavy lifting of the math and other unary ops, this is a templated
// version that knows the types of the arguments and the operation to
// perform (given by a functor).
template <class RET, class ATYPE, class FUNCTION>
DECLOP (unary_op)
{
    // Get references to the symbols this op accesses
    Symbol &Result (exec->sym (args[0]));
    Symbol &A (exec->sym (args[1]));

    // Adjust the result's uniform/varying status
    exec->adjust_varying (Result, A.is_varying(), A.data() == Result.data());

    // Loop over points, do the operation
    VaryingRef<RET> result ((RET *)Result.data(), Result.step());
    VaryingRef<ATYPE> a ((ATYPE *)A.data(), A.step());
    FUNCTION function;
    if (result.is_uniform()) {
        // Uniform case
        *result = function (*a);
    } else if (A.is_uniform()) {
        // Operands are uniform but we're assigning to a varying (it can
        // happen if we're in a conditional).  Take a shortcut by doing
        // the operation only once.
        RET r = function (*a);
        for (int i = beginpoint;  i < endpoint;  ++i)
            if (runflags[i])
                result[i] = r;
    } else {
        // Fully varying case
        for (int i = beginpoint;  i < endpoint;  ++i)
            if (runflags[i])
                result[i] = function (a[i]);
    }
}





}; // namespace pvt
}; // namespace OSL


#endif /* OSLOPS_H */
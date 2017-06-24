//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.
/*
 *  \addtogroup Warnings
 *  \brief Pop error suppression.
 */

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must have pushed before popping error suppression.
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   pragma clang diagnostic pop
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic pop
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(pop)
#endif

// CLEANUP
// -------

#undef WARNINGS_PUSH
#undef WARNINGS_ARC_BRIDGE_CASTS_DISALLOWED_IN_NONARC
#undef WARNINGS_ARC_REPEATED_USE_OF_WEAK
#undef WARNINGS_ASSIGN_BASE_INACCESSIBLE
#undef WARNINGS_ASSIGN_COULD_NOT_BE_GENERATED
#undef WARNINGS_AUTOMATIC_INLINE
#undef WARNINGS_BEHAVIOR_CHANGE
#undef WARNINGS_BOOL_CONVERSION
#undef WARNINGS_CXX11_EXTENSIONS
#undef WARNINGS_CXX98_COMPAT
#undef WARNINGS_CXX98_COMPAT_PEDANTIC
#undef WARNINGS_CAST_ALIGN
#undef WARNINGS_CATCH_SEMANTIC_CHANGED
#undef WARNINGS_CONDITIONAL_UNINITIALIZED
#undef WARNINGS_CONSTANT_CONDITIONAL
#undef WARNINGS_CONSTANT_CONVERSION
#undef WARNINGS_CONVERSION
#undef WARNINGS_CONVERSION_LOSS
#undef WARNINGS_CONVERSION_SIGN_EXTENDED
#undef WARNINGS_COPY_CTOR_COULD_NOT_BE_GENERATED
#undef WARNINGS_DEPRECATED
#undef WARNINGS_DEPRECATED_DECLARATIONS
#undef WARNINGS_DEPRECATED_IMPLEMENTATIONS
//#undef LEATHERS_DFLT_CTOR_BASE_INACCESSIBLE_
//#undef LEATHERS_DFLT_CTOR_COULD_NOT_BE_GENERATED_
//#undef LEATHERS_USER_CTOR_REQUIRED_
//#undef LEATHERS_FORCE_NOT_INLINED_
//#undef LEATHERS_NOT_INLINED_
//#undef LEATHERS_UNREFERENCED_INLINE_
//#undef LEATHERS_COVERED_SWITCH_DEFAULT_
//#undef LEATHERS_DEPRECATED_OBJC_ISA_USAGE_
//#undef LEATHERS_DEPRECATED_REGISTER_
//#undef LEATHERS_DIGRAPHS_NOT_SUPPORTED_
//#undef LEATHERS_DISABLED_MACRO_EXPANSION_
//#undef LEATHERS_DOCUMENTATION_
//#undef LEATHERS_DOCUMENTATION_UNKNOWN_COMMAND_
//#undef LEATHERS_EMPTY_BODY_
//#undef LEATHERS_ENUM_CONVERSION_
//#undef LEATHERS_EXIT_TIME_DESTRUCTORS_
//#undef LEATHERS_EXTRA_SEMI_
//#undef LEATHERS_FORMAT_
//#undef LEATHERS_FOUR_CHAR_CONSTANTS_
//#undef LEATHERS_GLOBAL_CONSTRUCTORS_
//#undef LEATHERS_ILL_FORMED_COMMA_EXPR_
//#undef LEATHERS_IMPLICIT_FALLTHROUGH_
//#undef LEATHERS_INHERITS_VIA_DOMINANCE_
//#undef LEATHERS_INT_CONVERSION_
//#undef LEATHERS_INVALID_OFFSETOF_
//#undef LEATHERS_IS_DEFINED_TO_BE_
//#undef LEATHERS_LAYOUT_CHANGED_
//#undef LEATHERS_MISSING_BRACES_
//#undef LEATHERS_MISSING_FIELD_INITIALIZERS_
//#undef LEATHERS_MISSING_NORETURN_
//#undef LEATHERS_MISSING_PROTOTYPES_
//#undef LEATHERS_NAME_LENGTH_EXCEEDED_
//#undef LEATHERS_NEWLINE_EOF_
//#undef LEATHERS_NO_SUCH_WARNING_
//#undef LEATHERS_NON_VIRTUAL_DTOR_
//#undef LEATHERS_OBJECT_LAYOUT_CHANGE_
//#undef LEATHERS_OLD_STYLE_CAST_
//#undef LEATHERS_OVERLOADED_VIRTUAL_
//#undef LEATHERS_PADDED_
//#undef LEATHERS_PARENTHESES_
//#undef LEATHERS_PEDANTIC_
//#undef LEATHERS_POINTER_SIGN_
//#undef LEATHERS_RETURN_TYPE_
//#undef LEATHERS_SHADOW_
//#undef LEATHERS_SHIFT_SIGN_OVERFLOW_
//#undef LEATHERS_SHORTEN_64_TO_32_
//#undef LEATHERS_SIGN_COMPARE_
//#undef LEATHERS_SIGN_CONVERSION_
//#undef LEATHERS_SIGNED_UNSIGNED_COMPARE_
//#undef LEATHERS_STATIC_CTOR_NOT_THREAD_SAFE_
//#undef LEATHERS_SWITCH_
//#undef LEATHERS_SWITCH_ENUM_
//#undef LEATHERS_THIS_USED_IN_INIT_
//#undef LEATHERS_UNDEF_
//#undef LEATHERS_UNINITIALIZED_
//#undef LEATHERS_UNKNOWN_PRAGMAS_
//#undef LEATHERS_UNREACHABLE_CODE_
//#undef LEATHERS_UNREACHABLE_CODE_RETURN_
//#undef LEATHERS_UNSAFE_CONVERSION_
//#undef LEATHERS_UNUSED_BUT_SET_VARIABLE_
//#undef LEATHERS_UNUSED_FUNCTION_
//#undef LEATHERS_UNUSED_LABEL_
//#undef LEATHERS_UNUSED_PARAMETER_
//#undef LEATHERS_UNUSED_VALUE_
//#undef LEATHERS_UNUSED_VARIABLE_
//#undef LEATHERS_USED_BUT_MARKED_UNUSED_
//#undef LEATHERS_WEAK_VTABLES_
//#undef LEATHERS_DUPLICATE_METHOD_MATCH_
//#undef LEATHERS_EXPLICIT_OWNERSHIP_TYPE_
//#undef LEATHERS_IMPLICIT_ATOMIC_PROPERTIES_
//#undef LEATHERS_IMPLICIT_RETAIN_SELF_
//#undef LEATHERS_OBJC_MISSING_PROPERTY_SYNTHESIS_
//#undef LEATHERS_OBJC_ROOT_CLASS_
//#undef LEATHERS_PROTOCOL_
//#undef LEATHERS_RECEIVER_IS_WEAK_
//#undef LEATHERS_SELECTOR_
//#undef LEATHERS_STRICT_SELECTOR_MATCH_
//#undef LEATHERS_UNDECLARED_SELECTOR_

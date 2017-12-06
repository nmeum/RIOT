/**
 * @addtogroup  core_util
 *
 * @{
 * @file
 * @brief       Wrappers for keywords used by the Checked C extension
 *
 * @details     If *ENABLE_CHECKEDC* is defined all keywords of the
 *              Checked C language extension are enabled causing code
 *              using them to be compiled with bounds checks. This header
 *              file provides the same macros as the `stdchecked.h`,
 *              with the exception that the macros are ignored when
 *              *ENABLE_CHECKEDC* is not defined and maybe used
 *              differently. For all available keywords refer to
 *              section 2.1 of the Checked C language specification.
 *
 * @author      Sören Tempel <tempel@uni-bremen.de>
 */

#ifndef CHECKEDC_H
#define CHECKEDC_H

/**
 * @def array_ptr
 *
 * @brief Declare a pointer to an element of an array of
 *        type @p t values.
 *
 * Use this macro whenever you define a pointer namend @p n to an array
 * of @p t values. The bounds expression @p e is only used if
 * *USE_CHECKEDC* is defined, otherwise it is entirly ignored. Please
 * refer to section 2.2 of the Checked C language specification for more
 * information on array pointers.
 */
#ifdef USE_CHECKEDC
#define array_ptr(n, t, e) _Array_ptr<t> n: e
#else
#define array_ptr(n, t, e) ptr(n, t)
#endif

/**
 * @def checked
 *
 * @brief Declare an unchecked program scope.
 *
 * Use this macro to define a checked program scpoe. When *USE_CHECKEDC*
 * is unset this macro doesn't have any effect. Refer to section 2.8 of
 * the Checked C language specification for more information on program
 * scopes.
 */
#ifdef USE_CHECKEDC
#define checked _Checked
#else
#define checked
#endif

/**
 * @def dynamic_check
 *
 * @brief Insert a custom dynamic check.
 *
 * Use this macro to check a boolean condition @p c and generate a
 * runtime error if it fails. This macro has no effect when
 * *USE_CHECKEDC* is not defined. Refer to section 2.9 of the Checked C
 * language specification for more information on dynamic checks.
 */
#ifdef USE_CHECKEDC
#define dynamic_check _Dynamic_Check
#else
#define dynamic_check
#endif

/**
 * @def nt_array_ptr
 *
 * @brief Declare a pointer to an element of a null-terminated
 *        array of type @p t values.
 *
 * Use this macro whenever you define a pointer named @p n to a
 * null-terminated array of @p t values. The bounds expression @p e is
 * only used if *USE_CHECKEDC* is defined, otherwise it is entirly
 * ignored. Please refer to section 2.4 of the Checked C language
 * specification for more information on array pointers.
 */
#ifdef USE_CHECKEDC
#define nt_array_ptr(n, t, e) _Nt_array_ptr<t> n: e
#else
#define nt_array_ptr(n, t, e) ptr(n, t)
#endif

/**
 * @def nt_checked
 *
 * @brief Declare a null-terminated array.
 *
 * Use this macro whenever you define a null-terminated array. When
 * *USE_CHECKEDC* is defined all accesses to that array are subject to
 * bounds checks. Refer to section 2.4 of the Checked C language
 * specification for more information on null-terminated checked arrays.
 */
#ifdef USE_CHECKEDC
#define nt_checked _Nt_checked
#else
#define nt_checked
#endif

/**
 * @def ptr
 *
 * @brief Declare a pointer to a value of type @p t.
 *
 * Use this macro whenever you define a pointer named @p n to a value of
 * type @p t.
 */
#ifdef USE_CHECKEDC
#define ptr(n, t) _Ptr<t> n
#else
#define ptr(n, t) t *n
#endif

/* TODO _Where */

/**
 * @def unchecked
 *
 * @brief Declare an unchecked program scope.
 *
 * Use this macro to define an unchecked program scope. When
 * *USE_CHECKEDC* is unset this macro doesn't have any effect if it is
 * set it can be used in all places where the ::checked macro can be
 * used. Refer to section 2.8 of the Checked C language specification
 * for more information on program scopes.
 */
#ifdef USE_CHECKEDC
#define unchecked _Unchecked
#else
#define unchecked
#endif

#endif

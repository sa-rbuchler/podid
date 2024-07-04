#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef IDWALLTOOLKIT_SWIFT_H
#define IDWALLTOOLKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="IDwallToolkit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)





typedef SWIFT_ENUM(NSInteger, IDDocInputType, open) {
  IDDocInputTypePrinted = 0,
  IDDocInputTypeDigital = 1,
};

typedef SWIFT_ENUM(NSInteger, IDDocSide, open) {
  IDDocSideFront = 0,
  IDDocSideBack = 1,
};

typedef SWIFT_ENUM(NSUInteger, IDDocumentType, open) {
  IDDocumentTypeRG = 0,
  IDDocumentTypeCNH = 1,
  IDDocumentTypeTypified = 2,
  IDDocumentTypeCRLV = 3,
  IDDocumentTypeRNE = 4,
  IDDocumentTypeCRNM = 5,
  IDDocumentTypeCIN = 6,
};

typedef SWIFT_ENUM(NSInteger, IDFlowType, open) {
  IDFlowTypeDocument = 0,
  IDFlowTypeLiveness = 1,
  IDFlowTypeComplete = 2,
};

typedef SWIFT_ENUM(NSInteger, IDLoggingLevel, open) {
  IDLoggingLevelMinimal = 0,
  IDLoggingLevelRegular = 1,
  IDLoggingLevelVerbose = 2,
};

typedef SWIFT_ENUM(NSInteger, IDWallSend, open) {
  IDWallSendDocument = 0,
  IDWallSendLiveness = 1,
  IDWallSendAll = 2,
};

@class NSString;

SWIFT_CLASS("_TtC13IDwallToolkit11IDwallEvent")
@interface IDwallEvent : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSDictionary * _Nonnull properties;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13IDwallToolkit18IDwallEventManager")
@interface IDwallEventManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP13IDwallToolkit19IDwallEventsHandler_")
@protocol IDwallEventsHandler
- (void)onEvent:(IDwallEvent * _Nonnull)event;
@end


SWIFT_CLASS("_TtC13IDwallToolkit20IDwallToolkitManager")
@interface IDwallToolkitManager : NSObject
+ (IDwallToolkitManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)startFlow:(enum IDFlowType)flowType withDocuments:(NSArray<NSString *> * _Nonnull)documents andInputOptions:(NSArray<NSString *> * _Nonnull)inputOptions onComplete:(void (^ _Nullable)(NSDictionary * _Nullable, NSError * _Nullable))callback;
- (void)requestDocumentWithDocument:(NSString * _Nonnull)documentOption inputOption:(NSString * _Nonnull)inputOption documentSide:(NSString * _Nullable)documentSide callback:(void (^ _Nullable)(BOOL, NSError * _Nullable))callback;
- (void)requestLivenessOnComplete:(void (^ _Nullable)(BOOL, NSError * _Nullable))callback;
- (void)sendWithType:(enum IDWallSend)type onComplete:(void (^ _Nullable)(NSDictionary * _Nullable, NSError * _Nullable))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;
@class UIColor;

SWIFT_CLASS("_TtC13IDwallToolkit21IDwallToolkitSettings")
@interface IDwallToolkitSettings : NSObject
+ (IDwallToolkitSettings * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (BOOL)initWithAuthKey:(NSString * _Nonnull)authKey SWIFT_METHOD_FAMILY(none);
- (void)setupIDWallPublicKey:(NSArray<NSString *> * _Nonnull)publicKeys behaviorKey:(NSString * _Nullable)behaviorKey;
- (void)setOnboardingDataWith:(NSData * _Nullable)data;
- (void)setEventHandler:(id <IDwallEventsHandler> _Nonnull)handler;
- (void)enableDeveloperMode:(BOOL)isEnabled;
- (void)faceFallbackActivated:(BOOL)flag;
- (void)setLoggingLevel:(enum IDLoggingLevel)level;
- (void)setDocumentTutorialEnabled:(BOOL)isEnabled;
- (void)setLivenessTutorialEnabled:(BOOL)isEnabled;
- (void)setPrimaryColor:(UIColor * _Nonnull)color;
- (void)hideOptionsMessageBox:(BOOL)isHidden;
- (void)setUserExternalId:(NSString * _Nonnull)externalId;
- (NSString * _Nonnull)getSDKVersion SWIFT_WARN_UNUSED_RESULT;
- (void)setSdkType:(NSString * _Nonnull)type;
- (void)setBridgeVersion:(NSString * _Nonnull)version;
- (NSString * _Nonnull)getSDKEnvironment SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13IDwallToolkit9IqConfigs")
@interface IqConfigs : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nonnull configs_version;
@property (nonatomic, copy) NSString * _Nonnull document_type;
@property (nonatomic) NSInteger document_detection_method;
@property (nonatomic) float geom_doc_max_corner_delta;
@property (nonatomic) float geom_doc_max_delta;
@property (nonatomic) float geom_doc_mean_ratio;
@property (nonatomic) float geom_image_border_exclude;
@property (nonatomic) float geom_image_margins;
@property (nonatomic) float geom_image_max_side;
@property (nonatomic) float geom_image_min_side;
@property (nonatomic) float light_max_mean_threshold;
@property (nonatomic) float light_min_mean_threshold;
@property (nonatomic) float reflex_doc_margins;
@property (nonatomic) float reflex_min_area;
@property (nonatomic) float reflex_threshold;
@property (nonatomic) float sharp_threshold;
@end


SWIFT_CLASS("_TtC13IDwallToolkit8IqResult")
@interface IqResult : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) NSInteger config_document_detection_method;
@property (nonatomic, copy) NSString * _Nonnull config_document_type;
@property (nonatomic, copy) NSString * _Nonnull version_platform;
@property (nonatomic) NSInteger all_bin_flags;
@property (nonatomic) double analysis_geometry;
@property (nonatomic) double analysis_lightness;
@property (nonatomic) double analysis_reflection;
@property (nonatomic) double analysis_sharpness;
@property (nonatomic) double config_geom_doc_max_corner_delta;
@property (nonatomic) double config_geom_doc_max_delta;
@property (nonatomic) double config_geom_doc_mean_ratio;
@property (nonatomic) double config_geom_image_border_exclude;
@property (nonatomic) double config_geom_image_margins;
@property (nonatomic) double config_geom_image_max_side;
@property (nonatomic) double config_geom_image_min_side;
@property (nonatomic) double config_light_max_mean_threshold;
@property (nonatomic) double config_light_min_mean_threshold;
@property (nonatomic) double config_reflex_doc_margins;
@property (nonatomic) double config_reflex_min_area;
@property (nonatomic) double config_reflex_threshold;
@property (nonatomic) double config_sharp_threshold;
@property (nonatomic) NSInteger statistic_img_cols;
@property (nonatomic) NSInteger statistic_img_rows;
@property (nonatomic) NSInteger statistic_n_frames;
@property (nonatomic) NSInteger statistic_n_frames_ok;
@property (nonatomic) NSInteger statistic_n_frames_ok_ma;
@property (nonatomic) NSInteger statistic_n_locked_calls;
@property (nonatomic) NSInteger statistic_n_zero_images;
@property (nonatomic) BOOL flag_all_is_ok;
@property (nonatomic) BOOL flag_image_geometry_fails;
@property (nonatomic) BOOL flag_image_lightness_fails;
@property (nonatomic) BOOL flag_image_reflections_fails;
@property (nonatomic) BOOL flag_image_sharpness_fails;
@property (nonatomic) BOOL flag_document_is_small;
@property (nonatomic) BOOL flag_document_ratio_fails;
@property (nonatomic) BOOL flag_this_is_better;
@property (nonatomic) BOOL flag_this_is_big;
@property (nonatomic) BOOL flag_this_is_small;
@property (nonatomic) BOOL flag_this_is_too_bright;
@property (nonatomic) BOOL flag_this_is_too_dark;
@end
























#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif

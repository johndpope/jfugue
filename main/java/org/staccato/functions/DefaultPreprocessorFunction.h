//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/functions/DefaultPreprocessorFunction.java
//

#ifndef _OrgStaccatoFunctionsDefaultPreprocessorFunction_H_
#define _OrgStaccatoFunctionsDefaultPreprocessorFunction_H_

@class IOSObjectArray;
@class OrgStaccatoStaccatoParserContext;

#import "JreEmulation.h"
#include "org/staccato/PreprocessorFunction.h"

@interface OrgStaccatoFunctionsDefaultPreprocessorFunction : NSObject < OrgStaccatoPreprocessorFunction > {
 @public
  IOSObjectArray *NAMES_;
}

- (instancetype)init;

+ (OrgStaccatoFunctionsDefaultPreprocessorFunction *)getInstance;

- (NSString *)applyWithNSString:(NSString *)parameters
withOrgStaccatoStaccatoParserContext:(OrgStaccatoStaccatoParserContext *)context;

- (IOSObjectArray *)getNames;

- (void)copyAllFieldsTo:(OrgStaccatoFunctionsDefaultPreprocessorFunction *)other;

@end

__attribute__((always_inline)) inline void OrgStaccatoFunctionsDefaultPreprocessorFunction_init() {}

J2OBJC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, NAMES_, IOSObjectArray *)
FOUNDATION_EXPORT OrgStaccatoFunctionsDefaultPreprocessorFunction *OrgStaccatoFunctionsDefaultPreprocessorFunction_getInstance();

FOUNDATION_EXPORT OrgStaccatoFunctionsDefaultPreprocessorFunction *OrgStaccatoFunctionsDefaultPreprocessorFunction_instance_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, instance_, OrgStaccatoFunctionsDefaultPreprocessorFunction *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, instance_, OrgStaccatoFunctionsDefaultPreprocessorFunction *)

FOUNDATION_EXPORT NSString *OrgStaccatoFunctionsDefaultPreprocessorFunction_OCTAVE_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, OCTAVE_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, OCTAVE_, NSString *)

FOUNDATION_EXPORT NSString *OrgStaccatoFunctionsDefaultPreprocessorFunction_BASE_OCTAVE_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, BASE_OCTAVE_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, BASE_OCTAVE_, NSString *)

FOUNDATION_EXPORT NSString *OrgStaccatoFunctionsDefaultPreprocessorFunction_DURATION_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, DURATION_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, DURATION_, NSString *)

FOUNDATION_EXPORT NSString *OrgStaccatoFunctionsDefaultPreprocessorFunction_ATTACK_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, ATTACK_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, ATTACK_, NSString *)

FOUNDATION_EXPORT NSString *OrgStaccatoFunctionsDefaultPreprocessorFunction_DECAY_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, DECAY_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsDefaultPreprocessorFunction, DECAY_, NSString *)

#endif // _OrgStaccatoFunctionsDefaultPreprocessorFunction_H_

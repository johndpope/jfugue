//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/functions/PitchWheelFunction.java
//

#ifndef _OrgStaccatoFunctionsPitchWheelFunction_H_
#define _OrgStaccatoFunctionsPitchWheelFunction_H_

@class IOSObjectArray;
@class OrgStaccatoStaccatoParserContext;

#import "JreEmulation.h"
#include "org/staccato/SubparserFunction.h"

@interface OrgStaccatoFunctionsPitchWheelFunction : NSObject < OrgStaccatoSubparserFunction > {
}

+ (OrgStaccatoFunctionsPitchWheelFunction *)getInstance;

- (instancetype)init;

- (IOSObjectArray *)getNames;

- (void)applyWithNSString:(NSString *)parameters
withOrgStaccatoStaccatoParserContext:(OrgStaccatoStaccatoParserContext *)context;

@end

FOUNDATION_EXPORT BOOL OrgStaccatoFunctionsPitchWheelFunction_initialized;
J2OBJC_STATIC_INIT(OrgStaccatoFunctionsPitchWheelFunction)
FOUNDATION_EXPORT OrgStaccatoFunctionsPitchWheelFunction *OrgStaccatoFunctionsPitchWheelFunction_getInstance();

FOUNDATION_EXPORT OrgStaccatoFunctionsPitchWheelFunction *OrgStaccatoFunctionsPitchWheelFunction_instance_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsPitchWheelFunction, instance_, OrgStaccatoFunctionsPitchWheelFunction *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsPitchWheelFunction, instance_, OrgStaccatoFunctionsPitchWheelFunction *)

FOUNDATION_EXPORT IOSObjectArray *OrgStaccatoFunctionsPitchWheelFunction_NAMES_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsPitchWheelFunction, NAMES_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsPitchWheelFunction, NAMES_, IOSObjectArray *)

#endif // _OrgStaccatoFunctionsPitchWheelFunction_H_
//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/functions/ControllerFunction.java
//

#ifndef _OrgStaccatoFunctionsControllerFunction_H_
#define _OrgStaccatoFunctionsControllerFunction_H_

@class IOSObjectArray;
@class OrgStaccatoStaccatoParserContext;

#import "JreEmulation.h"
#include "org/staccato/SubparserFunction.h"

@interface OrgStaccatoFunctionsControllerFunction : NSObject < OrgStaccatoSubparserFunction > {
}

+ (OrgStaccatoFunctionsControllerFunction *)getInstance;

- (instancetype)init;

- (IOSObjectArray *)getNames;

- (void)applyWithNSString:(NSString *)parameters
withOrgStaccatoStaccatoParserContext:(OrgStaccatoStaccatoParserContext *)context;

@end

FOUNDATION_EXPORT BOOL OrgStaccatoFunctionsControllerFunction_initialized;
J2OBJC_STATIC_INIT(OrgStaccatoFunctionsControllerFunction)
FOUNDATION_EXPORT OrgStaccatoFunctionsControllerFunction *OrgStaccatoFunctionsControllerFunction_getInstance();

FOUNDATION_EXPORT OrgStaccatoFunctionsControllerFunction *OrgStaccatoFunctionsControllerFunction_instance_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsControllerFunction, instance_, OrgStaccatoFunctionsControllerFunction *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsControllerFunction, instance_, OrgStaccatoFunctionsControllerFunction *)

FOUNDATION_EXPORT IOSObjectArray *OrgStaccatoFunctionsControllerFunction_NAMES_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsControllerFunction, NAMES_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsControllerFunction, NAMES_, IOSObjectArray *)

#endif // _OrgStaccatoFunctionsControllerFunction_H_

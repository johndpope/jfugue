//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/functions/ArpeggiatedChordFunction.java
//

#ifndef _OrgStaccatoFunctionsArpeggiatedChordFunction_H_
#define _OrgStaccatoFunctionsArpeggiatedChordFunction_H_

@class IOSObjectArray;
@class OrgStaccatoStaccatoParserContext;

#import "JreEmulation.h"
#include "org/staccato/PreprocessorFunction.h"

@interface OrgStaccatoFunctionsArpeggiatedChordFunction : NSObject < OrgStaccatoPreprocessorFunction > {
}

- (instancetype)init;

+ (OrgStaccatoFunctionsArpeggiatedChordFunction *)getInstance;

- (NSString *)applyWithNSString:(NSString *)parameters
withOrgStaccatoStaccatoParserContext:(OrgStaccatoStaccatoParserContext *)context;

- (IOSObjectArray *)getNames;

@end

__attribute__((always_inline)) inline void OrgStaccatoFunctionsArpeggiatedChordFunction_init() {}
FOUNDATION_EXPORT OrgStaccatoFunctionsArpeggiatedChordFunction *OrgStaccatoFunctionsArpeggiatedChordFunction_getInstance();

FOUNDATION_EXPORT OrgStaccatoFunctionsArpeggiatedChordFunction *OrgStaccatoFunctionsArpeggiatedChordFunction_instance_;
J2OBJC_STATIC_FIELD_GETTER(OrgStaccatoFunctionsArpeggiatedChordFunction, instance_, OrgStaccatoFunctionsArpeggiatedChordFunction *)
J2OBJC_STATIC_FIELD_SETTER(OrgStaccatoFunctionsArpeggiatedChordFunction, instance_, OrgStaccatoFunctionsArpeggiatedChordFunction *)

#endif // _OrgStaccatoFunctionsArpeggiatedChordFunction_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/invocation/DescribedInvocation.java
//

#ifndef _OrgMockitoInvocationDescribedInvocation_H_
#define _OrgMockitoInvocationDescribedInvocation_H_

@protocol OrgMockitoInvocationLocation;

#import "JreEmulation.h"
#include "org/mockito/exceptions/PrintableInvocation.h"

@protocol OrgMockitoInvocationDescribedInvocation < OrgMockitoExceptionsPrintableInvocation, NSObject, JavaObject >
- (NSString *)description;

- (id<OrgMockitoInvocationLocation>)getLocation;

@end

__attribute__((always_inline)) inline void OrgMockitoInvocationDescribedInvocation_init() {}

#endif // _OrgMockitoInvocationDescribedInvocation_H_
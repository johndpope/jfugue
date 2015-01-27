//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/VerboseMockInvocationLogger.java
//

#ifndef _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_
#define _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_

@class JavaIoPrintStream;
@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoListenersMethodInvocationReport;

#import "JreEmulation.h"
#include "org/mockito/listeners/InvocationListener.h"

@interface OrgMockitoInternalDebuggingVerboseMockInvocationLogger : NSObject < OrgMockitoListenersInvocationListener > {
 @public
  JavaIoPrintStream *printStream_;
  jint mockInvocationsCounter_;
}

- (instancetype)init;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)printStream;

- (void)reportInvocationWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

- (void)printReturnedValueOrThrowableWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

- (void)printStubInfoWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

- (void)printHeader;

- (void)printInvocationWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)invocation;

- (void)printFooter;

- (void)printlnIndentedWithNSString:(NSString *)message;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalDebuggingVerboseMockInvocationLogger *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalDebuggingVerboseMockInvocationLogger_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger, printStream_, JavaIoPrintStream *)

#endif // _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_

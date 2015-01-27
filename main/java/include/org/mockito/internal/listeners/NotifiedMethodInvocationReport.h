//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/listeners/NotifiedMethodInvocationReport.java
//

#ifndef _OrgMockitoInternalListenersNotifiedMethodInvocationReport_H_
#define _OrgMockitoInternalListenersNotifiedMethodInvocationReport_H_

@class JavaLangThrowable;
@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationInvocation;

#import "JreEmulation.h"
#include "org/mockito/listeners/MethodInvocationReport.h"

@interface OrgMockitoInternalListenersNotifiedMethodInvocationReport : NSObject < OrgMockitoListenersMethodInvocationReport > {
 @public
  id<OrgMockitoInvocationInvocation> invocation_;
  id returnedValue_;
  JavaLangThrowable *throwable_;
}

- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                                withId:(id)returnedValue;

- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                 withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (id<OrgMockitoInvocationDescribedInvocation>)getInvocation;

- (id)getReturnedValue;

- (JavaLangThrowable *)getThrowable;

- (jboolean)threwException;

- (NSString *)getLocationOfStubbing;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalListenersNotifiedMethodInvocationReport *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalListenersNotifiedMethodInvocationReport_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalListenersNotifiedMethodInvocationReport, invocation_, id<OrgMockitoInvocationInvocation>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalListenersNotifiedMethodInvocationReport, returnedValue_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalListenersNotifiedMethodInvocationReport, throwable_, JavaLangThrowable *)

#endif // _OrgMockitoInternalListenersNotifiedMethodInvocationReport_H_

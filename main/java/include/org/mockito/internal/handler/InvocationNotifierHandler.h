//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/InvocationNotifierHandler.java
//

#ifndef _OrgMockitoInternalHandlerInvocationNotifierHandler_H_
#define _OrgMockitoInternalHandlerInvocationNotifierHandler_H_

@class JavaLangThrowable;
@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

#import "JreEmulation.h"
#include "org/mockito/internal/InternalMockHandler.h"
#include "org/mockito/invocation/MockHandler.h"

@interface OrgMockitoInternalHandlerInvocationNotifierHandler : NSObject < OrgMockitoInvocationMockHandler, OrgMockitoInternalInternalMockHandler > {
 @public
  id<JavaUtilList> invocationListeners_;
  id<OrgMockitoInternalInternalMockHandler> mockHandler_;
}

- (instancetype)initWithOrgMockitoInternalInternalMockHandler:(id<OrgMockitoInternalInternalMockHandler>)mockHandler
                       withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)notifyMethodCallWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                                    withId:(id)returnValue;

- (void)notifyMethodCallExceptionWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                              withJavaLangThrowable:(JavaLangThrowable *)exception;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalHandlerInvocationNotifierHandler *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalHandlerInvocationNotifierHandler_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerInvocationNotifierHandler, invocationListeners_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerInvocationNotifierHandler, mockHandler_, id<OrgMockitoInternalInternalMockHandler>)

#endif // _OrgMockitoInternalHandlerInvocationNotifierHandler_H_

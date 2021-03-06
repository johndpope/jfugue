//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/ios/InvocationHandlerAdapter.java
//

#ifndef _OrgMockitoInternalCreationIosInvocationHandlerAdapter_H_
#define _OrgMockitoInternalCreationIosInvocationHandlerAdapter_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;
@class OrgMockitoInternalUtilObjectMethodsGuru;
@protocol OrgMockitoInvocationMockHandler;

#import "JreEmulation.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "org/mockito/internal/invocation/MockitoMethod.h"
#include "org/mockito/internal/invocation/realmethod/RealMethod.h"

@interface OrgMockitoInternalCreationIosInvocationHandlerAdapter : NSObject < JavaLangReflectInvocationHandler > {
 @public
  id<OrgMockitoInvocationMockHandler> handler_;
  OrgMockitoInternalUtilObjectMethodsGuru *objectMethodsGuru_;
}

- (instancetype)initWithOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (id)invokeWithId:(id)proxy
withJavaLangReflectMethod:(JavaLangReflectMethod *)method
 withNSObjectArray:(IOSObjectArray *)args;

- (id<OrgMockitoInvocationMockHandler>)getHandler;

- (void)setHandlerWithOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalCreationIosInvocationHandlerAdapter *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalCreationIosInvocationHandlerAdapter_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationIosInvocationHandlerAdapter, handler_, id<OrgMockitoInvocationMockHandler>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationIosInvocationHandlerAdapter, objectMethodsGuru_, OrgMockitoInternalUtilObjectMethodsGuru *)

@interface OrgMockitoInternalCreationIosInvocationHandlerAdapter_ProxiedMethod : NSObject < OrgMockitoInternalInvocationMockitoMethod, OrgMockitoInternalInvocationRealmethodRealMethod > {
 @public
  JavaLangReflectMethod *method_;
}

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (NSString *)getName;

- (IOSClass *)getReturnType;

- (IOSObjectArray *)getParameterTypes;

- (IOSObjectArray *)getExceptionTypes;

- (jboolean)isVarArgs;

- (JavaLangReflectMethod *)getJavaMethod;

- (id)invokeWithId:(id)target
 withNSObjectArray:(IOSObjectArray *)arguments;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalCreationIosInvocationHandlerAdapter_ProxiedMethod *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalCreationIosInvocationHandlerAdapter_ProxiedMethod_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationIosInvocationHandlerAdapter_ProxiedMethod, method_, JavaLangReflectMethod *)

#endif // _OrgMockitoInternalCreationIosInvocationHandlerAdapter_H_

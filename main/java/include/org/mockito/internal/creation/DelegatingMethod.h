//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/DelegatingMethod.java
//

#ifndef _OrgMockitoInternalCreationDelegatingMethod_H_
#define _OrgMockitoInternalCreationDelegatingMethod_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;

#import "JreEmulation.h"
#include "org/mockito/internal/invocation/MockitoMethod.h"

@interface OrgMockitoInternalCreationDelegatingMethod : NSObject < OrgMockitoInternalInvocationMockitoMethod > {
 @public
  JavaLangReflectMethod *method_;
}

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (IOSObjectArray *)getExceptionTypes;

- (JavaLangReflectMethod *)getJavaMethod;

- (NSString *)getName;

- (IOSObjectArray *)getParameterTypes;

- (IOSClass *)getReturnType;

- (jboolean)isVarArgs;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalCreationDelegatingMethod *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalCreationDelegatingMethod_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationDelegatingMethod, method_, JavaLangReflectMethod *)

#endif // _OrgMockitoInternalCreationDelegatingMethod_H_

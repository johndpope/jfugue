//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/RegisteredInvocations.java
//

#ifndef _OrgMockitoInternalVerificationRegisteredInvocations_H_
#define _OrgMockitoInternalVerificationRegisteredInvocations_H_

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/util/collections/ListUtil.h"

#define OrgMockitoInternalVerificationRegisteredInvocations_serialVersionUID -2674402327380736290LL

@interface OrgMockitoInternalVerificationRegisteredInvocations : NSObject < JavaIoSerializable > {
 @public
  id<JavaUtilList> invocations_;
}

- (void)addWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)removeLast;

- (id<JavaUtilList>)getAll;

- (jboolean)isEmpty;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationRegisteredInvocations *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationRegisteredInvocations_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationRegisteredInvocations, invocations_, id<JavaUtilList>)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalVerificationRegisteredInvocations, serialVersionUID, jlong)

@interface OrgMockitoInternalVerificationRegisteredInvocations_RemoveToString : NSObject < OrgMockitoInternalUtilCollectionsListUtil_Filter > {
}

- (jboolean)isOutWithId:(id<OrgMockitoInvocationInvocation>)invocation;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationRegisteredInvocations_RemoveToString_init() {}

#endif // _OrgMockitoInternalVerificationRegisteredInvocations_H_

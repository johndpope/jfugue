//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsEmptyValues.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_H_
#define _OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_H_

@class IOSClass;
@class OrgMockitoInternalUtilObjectMethodsGuru;
@protocol OrgMockitoInvocationInvocationOnMock;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_serialVersionUID 1998191268711234347LL

@interface OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  OrgMockitoInternalUtilObjectMethodsGuru *methodsGuru_;
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (id)returnValueForWithIOSClass:(IOSClass *)type;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues, methodsGuru_, OrgMockitoInternalUtilObjectMethodsGuru *)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues, serialVersionUID, jlong)

#endif // _OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_H_

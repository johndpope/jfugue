//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsMocks.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersReturnsMocks_H_
#define _OrgMockitoInternalStubbingDefaultanswersReturnsMocks_H_

@class IOSClass;
@class OrgMockitoInternalMockitoCore;
@protocol OrgMockitoInvocationInvocationOnMock;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingDefaultanswersReturnsMocks_serialVersionUID -6755257986994634579LL

@interface OrgMockitoInternalStubbingDefaultanswersReturnsMocks : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  OrgMockitoInternalMockitoCore *mockitoCore_;
  id<OrgMockitoStubbingAnswer> delegate_;
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (id)returnValueForWithIOSClass:(IOSClass *)clazz;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingDefaultanswersReturnsMocks *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingDefaultanswersReturnsMocks_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsMocks, mockitoCore_, OrgMockitoInternalMockitoCore *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsMocks, delegate_, id<OrgMockitoStubbingAnswer>)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingDefaultanswersReturnsMocks, serialVersionUID, jlong)

#endif // _OrgMockitoInternalStubbingDefaultanswersReturnsMocks_H_

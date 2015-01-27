//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/ReturnsArgumentAt.java
//

#ifndef _OrgMockitoInternalStubbingAnswersReturnsArgumentAt_H_
#define _OrgMockitoInternalStubbingAnswersReturnsArgumentAt_H_

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingAnswersReturnsArgumentAt_LAST_ARGUMENT -1
#define OrgMockitoInternalStubbingAnswersReturnsArgumentAt_serialVersionUID -589315085166295101LL

@interface OrgMockitoInternalStubbingAnswersReturnsArgumentAt : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  jint wantedArgumentPosition__;
}

- (instancetype)initWithInt:(jint)wantedArgumentPosition;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (jint)actualArgumentPositionWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (jboolean)returningLastArg;

- (jint)argumentIndexOfWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (jint)lastArgumentIndexOfWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (jint)checkWithinAllowedRangeWithInt:(jint)argumentPosition;

- (jint)wantedArgumentPosition;

- (void)validateIndexWithinInvocationRangeWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (jboolean)argumentPositionInRangeWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (IOSClass *)returnedTypeOnSignatureWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingAnswersReturnsArgumentAt *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingAnswersReturnsArgumentAt_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingAnswersReturnsArgumentAt, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingAnswersReturnsArgumentAt, LAST_ARGUMENT, jint)

#endif // _OrgMockitoInternalStubbingAnswersReturnsArgumentAt_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsSmartNulls.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_H_
#define _OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_H_

@protocol OrgMockitoInvocationInvocationOnMock;
@protocol OrgMockitoInvocationLocation;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_serialVersionUID 7618312406617949441LL

@interface OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  id<OrgMockitoStubbingAnswer> delegate_;
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls, delegate_, id<OrgMockitoStubbingAnswer>)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls, serialVersionUID, jlong)

@interface OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_ThrowsSmartNullPointer : NSObject < OrgMockitoStubbingAnswer > {
 @public
  id<OrgMockitoInvocationInvocationOnMock> unstubbedInvocation_;
  id<OrgMockitoInvocationLocation> location_;
}

- (instancetype)initWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)unstubbedInvocation
                            withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)location;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)currentInvocation;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_ThrowsSmartNullPointer *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_ThrowsSmartNullPointer_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_ThrowsSmartNullPointer, unstubbedInvocation_, id<OrgMockitoInvocationInvocationOnMock>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_ThrowsSmartNullPointer, location_, id<OrgMockitoInvocationLocation>)

#endif // _OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_H_

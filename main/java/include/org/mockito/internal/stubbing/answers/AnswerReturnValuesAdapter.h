//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswerReturnValuesAdapter.java
//

#ifndef _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_
#define _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_

@protocol OrgMockitoInvocationInvocationOnMock;
@protocol OrgMockitoReturnValues;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_serialVersionUID 1418158596876713469LL

@interface OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  id<OrgMockitoReturnValues> returnValues_;
}

- (instancetype)initWithOrgMockitoReturnValues:(id<OrgMockitoReturnValues>)returnValues;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter, returnValues_, id<OrgMockitoReturnValues>)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter, serialVersionUID, jlong)

#endif // _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_

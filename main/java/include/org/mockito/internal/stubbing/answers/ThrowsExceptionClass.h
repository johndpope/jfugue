//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/stubbing/answers/ThrowsExceptionClass.java
//

#ifndef _OrgMockitoInternalStubbingAnswersThrowsExceptionClass_H_
#define _OrgMockitoInternalStubbingAnswersThrowsExceptionClass_H_

@class IOSClass;
@class OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter;
@protocol OrgMockitoInvocationInvocationOnMock;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

@interface OrgMockitoInternalStubbingAnswersThrowsExceptionClass : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  IOSClass *throwableClass_;
  OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *filter_;
}

- (instancetype)initWithIOSClass:(IOSClass *)throwableClass;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (IOSClass *)getThrowableClass;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingAnswersThrowsExceptionClass *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingAnswersThrowsExceptionClass_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingAnswersThrowsExceptionClass, throwableClass_, IOSClass *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingAnswersThrowsExceptionClass, filter_, OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *)

#endif // _OrgMockitoInternalStubbingAnswersThrowsExceptionClass_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NumberOfInvocationsInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

#import "JreEmulation.h"

@interface OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker : NSObject {
 @public
  OrgMockitoExceptionsReporter *reporter_;
  OrgMockitoInternalInvocationInvocationsFinder *finder_;
  OrgMockitoInternalInvocationInvocationMarker *invocationMarker_;
}

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker, reporter_, OrgMockitoExceptionsReporter *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker, finder_, OrgMockitoInternalInvocationInvocationsFinder *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker, invocationMarker_, OrgMockitoInternalInvocationInvocationMarker *)

#endif // _OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_H_

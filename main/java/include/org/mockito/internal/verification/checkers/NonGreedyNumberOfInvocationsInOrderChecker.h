//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NonGreedyNumberOfInvocationsInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

#import "JreEmulation.h"

@interface OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker : NSObject {
 @public
  OrgMockitoInternalInvocationInvocationsFinder *finder_;
  OrgMockitoExceptionsReporter *reporter_;
  OrgMockitoInternalInvocationInvocationMarker *marker_;
}

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter
                     withOrgMockitoInternalInvocationInvocationMarker:(OrgMockitoInternalInvocationInvocationMarker *)marker;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker, finder_, OrgMockitoInternalInvocationInvocationsFinder *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker, reporter_, OrgMockitoExceptionsReporter *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker, marker_, OrgMockitoInternalInvocationInvocationMarker *)

#endif // _OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_H_

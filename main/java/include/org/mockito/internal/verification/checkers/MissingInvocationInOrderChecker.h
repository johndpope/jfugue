//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/MissingInvocationInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoVerificationVerificationMode;

#import "JreEmulation.h"

@interface OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker : NSObject {
 @public
  OrgMockitoExceptionsReporter *reporter_;
  OrgMockitoInternalInvocationInvocationsFinder *finder_;
}

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker, reporter_, OrgMockitoExceptionsReporter *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker, finder_, OrgMockitoInternalInvocationInvocationsFinder *)

#endif // _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_

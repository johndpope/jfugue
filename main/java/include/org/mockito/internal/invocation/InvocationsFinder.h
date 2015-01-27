//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationsFinder.java
//

#ifndef _OrgMockitoInternalInvocationInvocationsFinder_H_
#define _OrgMockitoInternalInvocationInvocationsFinder_H_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationLocation;

#import "JreEmulation.h"
#include "org/mockito/internal/util/collections/ListUtil.h"

@interface OrgMockitoInternalInvocationInvocationsFinder : NSObject {
}

- (id<JavaUtilList>)findInvocationsWithJavaUtilList:(id<JavaUtilList>)invocations
  withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)findAllMatchingUnverifiedChunksWithJavaUtilList:(id<JavaUtilList>)invocations
                  withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (id<JavaUtilList>)findMatchingChunkWithJavaUtilList:(id<JavaUtilList>)invocations
    withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                              withInt:(jint)wantedCount
  withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<JavaUtilList>)getFirstMatchingChunkWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                                                          withJavaUtilList:(id<JavaUtilList>)unverified;

- (id<OrgMockitoInvocationInvocation>)findFirstMatchingUnverifiedInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                                          withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                        withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findSimilarInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                          withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations;

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations
                                                                   withId:(id)mock;

- (id<OrgMockitoInvocationLocation>)getLastLocationWithJavaUtilList:(id<JavaUtilList>)invocations;

- (id<OrgMockitoInvocationInvocation>)findPreviousVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)invocations
                              withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<JavaUtilList>)removeVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)invocations
      withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedInOrderWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context
                                                                                                   withJavaUtilList:(id<JavaUtilList>)orderedInvocations;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationInvocationsFinder_init() {}

@interface OrgMockitoInternalInvocationInvocationsFinder_RemoveNotMatching : NSObject < OrgMockitoInternalUtilCollectionsListUtil_Filter > {
 @public
  OrgMockitoInternalInvocationInvocationMatcher *wanted_;
}

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)outer$
                    withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (jboolean)isOutWithId:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalInvocationInvocationsFinder_RemoveNotMatching *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationInvocationsFinder_RemoveNotMatching_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalInvocationInvocationsFinder_RemoveNotMatching, wanted_, OrgMockitoInternalInvocationInvocationMatcher *)

@interface OrgMockitoInternalInvocationInvocationsFinder_RemoveUnverifiedInOrder : NSObject < OrgMockitoInternalUtilCollectionsListUtil_Filter > {
 @public
  id<OrgMockitoInternalVerificationApiInOrderContext> orderingContext_;
}

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)outer$
                  withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (jboolean)isOutWithId:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalInvocationInvocationsFinder_RemoveUnverifiedInOrder *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationInvocationsFinder_RemoveUnverifiedInOrder_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalInvocationInvocationsFinder_RemoveUnverifiedInOrder, orderingContext_, id<OrgMockitoInternalVerificationApiInOrderContext>)

#endif // _OrgMockitoInternalInvocationInvocationsFinder_H_
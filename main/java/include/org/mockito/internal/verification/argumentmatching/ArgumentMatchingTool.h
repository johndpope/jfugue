//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/argumentmatching/ArgumentMatchingTool.java
//

#ifndef _OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_H_
#define _OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_H_

@class IOSObjectArray;
@protocol JavaUtilList;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"

@interface OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool : NSObject {
}

- (IOSObjectArray *)getSuspiciouslyNotMatchingArgsIndexesWithJavaUtilList:(id<JavaUtilList>)matchers
                                                        withNSObjectArray:(IOSObjectArray *)arguments;

- (jboolean)safelyMatchesWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)m
                                         withId:(id)arg;

- (jboolean)toStringEqualsWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)m
                                          withId:(id)arg;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_init() {}

#endif // _OrgMockitoInternalVerificationArgumentmatchingArgumentMatchingTool_H_

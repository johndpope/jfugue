//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/NoMoreInteractions.java
//

#ifndef _OrgMockitoInternalVerificationNoMoreInteractions_H_
#define _OrgMockitoInternalVerificationNoMoreInteractions_H_

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

#import "JreEmulation.h"
#include "org/mockito/internal/verification/api/VerificationInOrderMode.h"
#include "org/mockito/verification/VerificationMode.h"

@interface OrgMockitoInternalVerificationNoMoreInteractions : NSObject < OrgMockitoVerificationVerificationMode, OrgMockitoInternalVerificationApiVerificationInOrderMode > {
}

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationNoMoreInteractions_init() {}

#endif // _OrgMockitoInternalVerificationNoMoreInteractions_H_

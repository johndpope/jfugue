//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/InOrderWrapper.java
//

#ifndef _OrgMockitoInternalVerificationInOrderWrapper_H_
#define _OrgMockitoInternalVerificationInOrderWrapper_H_

@class OrgMockitoInternalInOrderImpl;
@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationInOrderMode;

#import "JreEmulation.h"
#include "org/mockito/verification/VerificationMode.h"

@interface OrgMockitoInternalVerificationInOrderWrapper : NSObject < OrgMockitoVerificationVerificationMode > {
 @public
  id<OrgMockitoInternalVerificationApiVerificationInOrderMode> mode_;
  OrgMockitoInternalInOrderImpl *inOrder_;
}

- (instancetype)initWithOrgMockitoInternalVerificationApiVerificationInOrderMode:(id<OrgMockitoInternalVerificationApiVerificationInOrderMode>)mode
                                               withOrgMockitoInternalInOrderImpl:(OrgMockitoInternalInOrderImpl *)inOrder;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationInOrderWrapper *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationInOrderWrapper_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationInOrderWrapper, mode_, id<OrgMockitoInternalVerificationApiVerificationInOrderMode>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationInOrderWrapper, inOrder_, OrgMockitoInternalInOrderImpl *)

#endif // _OrgMockitoInternalVerificationInOrderWrapper_H_
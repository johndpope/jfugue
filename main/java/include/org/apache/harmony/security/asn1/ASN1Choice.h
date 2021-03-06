//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Choice.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Choice_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Choice_H_

@class IOSObjectArray;
@class JavaUtilTreeMap;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

#import "JreEmulation.h"
#include "org/apache/harmony/security/asn1/ASN1Type.h"

@interface OrgApacheHarmonySecurityAsn1ASN1Choice : OrgApacheHarmonySecurityAsn1ASN1Type {
 @public
  IOSObjectArray *type_;
}

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray:(IOSObjectArray *)type;

- (jboolean)checkTagWithInt:(jint)identifier;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (jint)getIndexWithId:(id)object;

- (id)getObjectToEncodeWithId:(id)object;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityAsn1ASN1Choice_init() {}

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1ASN1Choice, type_, IOSObjectArray *)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Choice_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Explicit.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Explicit_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Explicit_H_

@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

#import "JreEmulation.h"
#include "org/apache/harmony/security/asn1/ASN1Constructed.h"

@interface OrgApacheHarmonySecurityAsn1ASN1Explicit : OrgApacheHarmonySecurityAsn1ASN1Constructed {
 @public
  OrgApacheHarmonySecurityAsn1ASN1Type *type_;
}

- (instancetype)initWithInt:(jint)tagNumber
withOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)type;

- (instancetype)initWithInt:(jint)tagClass
                    withInt:(jint)tagNumber
withOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)type;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityAsn1ASN1Explicit_init() {}

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1ASN1Explicit, type_, OrgApacheHarmonySecurityAsn1ASN1Type *)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Explicit_H_

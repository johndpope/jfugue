//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/BerOutputStream.java
//

#ifndef _OrgApacheHarmonySecurityAsn1BerOutputStream_H_
#define _OrgApacheHarmonySecurityAsn1BerOutputStream_H_

@class IOSByteArray;
@class OrgApacheHarmonySecurityAsn1ASN1Choice;
@class OrgApacheHarmonySecurityAsn1ASN1Explicit;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@class OrgApacheHarmonySecurityAsn1ASN1SequenceOf;
@class OrgApacheHarmonySecurityAsn1ASN1Set;
@class OrgApacheHarmonySecurityAsn1ASN1SetOf;

#import "JreEmulation.h"

@interface OrgApacheHarmonySecurityAsn1BerOutputStream : NSObject {
 @public
  IOSByteArray *encoded_;
  jint offset_;
  jint length_;
  id content_;
}

- (void)encodeTagWithInt:(jint)tag;

- (void)encodeANY;

- (void)encodeBitString;

- (void)encodeBoolean;

- (void)encodeChoiceWithOrgApacheHarmonySecurityAsn1ASN1Choice:(OrgApacheHarmonySecurityAsn1ASN1Choice *)choice;

- (void)encodeExplicitWithOrgApacheHarmonySecurityAsn1ASN1Explicit:(OrgApacheHarmonySecurityAsn1ASN1Explicit *)explicit_;

- (void)encodeGeneralizedTime;

- (void)encodeUTCTime;

- (void)encodeInteger;

- (void)encodeOctetString;

- (void)encodeOID;

- (void)encodeSequenceWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

- (void)encodeSequenceOfWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequenceOf;

- (void)encodeSetWithOrgApacheHarmonySecurityAsn1ASN1Set:(OrgApacheHarmonySecurityAsn1ASN1Set *)set;

- (void)encodeSetOfWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

- (void)encodeString;

- (void)getChoiceLengthWithOrgApacheHarmonySecurityAsn1ASN1Choice:(OrgApacheHarmonySecurityAsn1ASN1Choice *)choice;

- (void)getExplicitLengthWithOrgApacheHarmonySecurityAsn1ASN1Explicit:(OrgApacheHarmonySecurityAsn1ASN1Explicit *)sequence;

- (void)getSequenceLengthWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

- (void)getSequenceOfLengthWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequence;

- (void)getSetLengthWithOrgApacheHarmonySecurityAsn1ASN1Set:(OrgApacheHarmonySecurityAsn1ASN1Set *)set;

- (void)getSetOfLengthWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityAsn1BerOutputStream_init() {}

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1BerOutputStream, encoded_, IOSByteArray *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1BerOutputStream, content_, id)

#endif // _OrgApacheHarmonySecurityAsn1BerOutputStream_H_

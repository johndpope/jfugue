//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/parsers/SAXParserFactoryImpl.java
//

#ifndef _OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_H_
#define _OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_H_

@class JavaxXmlParsersSAXParser;
@protocol JavaUtilMap;

#import "JreEmulation.h"
#include "javax/xml/parsers/SAXParserFactory.h"

@interface OrgApacheHarmonyXmlParsersSAXParserFactoryImpl : JavaxXmlParsersSAXParserFactory {
}

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (JavaxXmlParsersSAXParser *)newSAXParser OBJC_METHOD_FAMILY_NONE;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (void)setNamespaceAwareWithBoolean:(jboolean)value;

- (void)setValidatingWithBoolean:(jboolean)value;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_init() {}

FOUNDATION_EXPORT NSString *OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_NAMESPACES_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonyXmlParsersSAXParserFactoryImpl, NAMESPACES_, NSString *)

FOUNDATION_EXPORT NSString *OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_VALIDATION_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonyXmlParsersSAXParserFactoryImpl, VALIDATION_, NSString *)

#endif // _OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_H_

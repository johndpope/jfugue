//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/SAXParserFactory.java
//

#ifndef _JavaxXmlParsersSAXParserFactory_H_
#define _JavaxXmlParsersSAXParserFactory_H_

@class JavaLangClassLoader;
@class JavaxXmlParsersSAXParser;
@class JavaxXmlValidationSchema;

#import "JreEmulation.h"

@interface JavaxXmlParsersSAXParserFactory : NSObject {
}

- (instancetype)init;

+ (JavaxXmlParsersSAXParserFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

+ (JavaxXmlParsersSAXParserFactory *)newInstanceWithNSString:(NSString *)factoryClassName
                                     withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

- (JavaxXmlParsersSAXParser *)newSAXParser OBJC_METHOD_FAMILY_NONE;

- (void)setNamespaceAwareWithBoolean:(jboolean)awareness;

- (void)setValidatingWithBoolean:(jboolean)validating;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (JavaxXmlValidationSchema *)getSchema;

- (void)setSchemaWithJavaxXmlValidationSchema:(JavaxXmlValidationSchema *)schema;

- (void)setXIncludeAwareWithBoolean:(jboolean)state;

- (jboolean)isXIncludeAware;

@end

__attribute__((always_inline)) inline void JavaxXmlParsersSAXParserFactory_init() {}
FOUNDATION_EXPORT JavaxXmlParsersSAXParserFactory *JavaxXmlParsersSAXParserFactory_newInstance();
FOUNDATION_EXPORT JavaxXmlParsersSAXParserFactory *JavaxXmlParsersSAXParserFactory_newInstanceWithNSString_withJavaLangClassLoader_(NSString *factoryClassName, JavaLangClassLoader *classLoader);

#endif // _JavaxXmlParsersSAXParserFactory_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/Attributes.java
//

#ifndef _OrgXmlSaxAttributes_H_
#define _OrgXmlSaxAttributes_H_

#import "JreEmulation.h"

@protocol OrgXmlSaxAttributes < NSObject, JavaObject >

- (jint)getLength;

- (NSString *)getURIWithInt:(jint)index;

- (NSString *)getLocalNameWithInt:(jint)index;

- (NSString *)getQNameWithInt:(jint)index;

- (NSString *)getTypeWithInt:(jint)index;

- (NSString *)getValueWithInt:(jint)index;

- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localName;

- (jint)getIndexWithNSString:(NSString *)qName;

- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

- (NSString *)getTypeWithNSString:(NSString *)qName;

- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

- (NSString *)getValueWithNSString:(NSString *)qName;

@end

__attribute__((always_inline)) inline void OrgXmlSaxAttributes_init() {}

#endif // _OrgXmlSaxAttributes_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/DTDHandler.java
//

#ifndef _OrgXmlSaxDTDHandler_H_
#define _OrgXmlSaxDTDHandler_H_

#import "JreEmulation.h"

@protocol OrgXmlSaxDTDHandler < NSObject, JavaObject >

- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

@end

__attribute__((always_inline)) inline void OrgXmlSaxDTDHandler_init() {}

#endif // _OrgXmlSaxDTDHandler_H_
//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/jmock/ClassImposterizer.java
//

#ifndef _OrgMockitoInternalCreationJmockClassImposterizer_H_
#define _OrgMockitoInternalCreationJmockClassImposterizer_H_

@class IOSClass;

#import "JreEmulation.h"

@interface OrgMockitoInternalCreationJmockClassImposterizer : NSObject {
}

- (instancetype)init;

- (jboolean)canImposteriseWithIOSClass:(IOSClass *)type;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalCreationJmockClassImposterizer_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalCreationJmockClassImposterizer)

FOUNDATION_EXPORT OrgMockitoInternalCreationJmockClassImposterizer *OrgMockitoInternalCreationJmockClassImposterizer_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalCreationJmockClassImposterizer, INSTANCE_, OrgMockitoInternalCreationJmockClassImposterizer *)

#endif // _OrgMockitoInternalCreationJmockClassImposterizer_H_

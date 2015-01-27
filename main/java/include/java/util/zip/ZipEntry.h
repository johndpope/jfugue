//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipEntry.java
//

#ifndef _JavaUtilZipZipEntry_H_
#define _JavaUtilZipZipEntry_H_

@class IOSByteArray;
@class JavaIoInputStream;

#import "JreEmulation.h"
#include "java/util/zip/ZipConstants.h"

#define JavaUtilZipZipEntry_DEFLATED 8
#define JavaUtilZipZipEntry_STORED 0

@interface JavaUtilZipZipEntry : NSObject < JavaUtilZipZipConstants, NSCopying > {
 @public
  NSString *name_;
  NSString *comment_;
  jlong crc_;
  jlong compressedSize_;
  jlong size_;
  jint compressionMethod_;
  jint time_;
  jint modDate_;
  IOSByteArray *extra_;
  jint nameLength_;
  jlong localHeaderRelOffset_;
}

- (instancetype)initWithNSString:(NSString *)name;

- (NSString *)getComment;

- (jlong)getCompressedSize;

- (jlong)getCrc;

- (IOSByteArray *)getExtra;

- (jint)getMethod;

- (NSString *)getName;

- (jlong)getSize;

- (jlong)getTime;

- (jboolean)isDirectory;

- (void)setCommentWithNSString:(NSString *)comment;

- (void)setCompressedSizeWithLong:(jlong)value;

- (void)setCrcWithLong:(jlong)value;

- (void)setExtraWithByteArray:(IOSByteArray *)data;

- (void)setMethodWithInt:(jint)value;

- (void)setSizeWithLong:(jlong)value;

- (void)setTimeWithLong:(jlong)value;

- (NSString *)description;

- (instancetype)initWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

- (id)clone;

- (NSUInteger)hash;

- (instancetype)initWithByteArray:(IOSByteArray *)hdrBuf
            withJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

__attribute__((always_inline)) inline void JavaUtilZipZipEntry_init() {}

J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, comment_, NSString *)
J2OBJC_FIELD_SETTER(JavaUtilZipZipEntry, extra_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipEntry, DEFLATED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipEntry, STORED, jint)

#endif // _JavaUtilZipZipEntry_H_
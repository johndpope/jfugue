//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/Deflater.java
//

#ifndef _JavaUtilZipDeflater_H_
#define _JavaUtilZipDeflater_H_

@class DalvikSystemCloseGuard;
@class IOSByteArray;

#import "JreEmulation.h"

#define JavaUtilZipDeflater_BEST_COMPRESSION 9
#define JavaUtilZipDeflater_BEST_SPEED 1
#define JavaUtilZipDeflater_DEFAULT_COMPRESSION -1
#define JavaUtilZipDeflater_DEFAULT_STRATEGY 0
#define JavaUtilZipDeflater_DEFLATED 8
#define JavaUtilZipDeflater_FILTERED 1
#define JavaUtilZipDeflater_FINISH 4
#define JavaUtilZipDeflater_FULL_FLUSH 3
#define JavaUtilZipDeflater_HUFFMAN_ONLY 2
#define JavaUtilZipDeflater_NO_COMPRESSION 0
#define JavaUtilZipDeflater_NO_FLUSH 0
#define JavaUtilZipDeflater_SYNC_FLUSH 2

@interface JavaUtilZipDeflater : NSObject {
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)level;

- (instancetype)initWithInt:(jint)level
                withBoolean:(jboolean)noHeader;

- (jint)deflateWithByteArray:(IOSByteArray *)buf;

- (jint)deflateWithByteArray:(IOSByteArray *)buf
                     withInt:(jint)offset
                     withInt:(jint)byteCount;

- (jint)deflateWithByteArray:(IOSByteArray *)buf
                     withInt:(jint)offset
                     withInt:(jint)byteCount
                     withInt:(jint)flush;

- (void)end;

- (void)dealloc;

- (void)finish;

- (jboolean)finished;

- (jint)getAdler;

- (jint)getTotalIn;

- (jint)getTotalOut;

- (jboolean)needsInput;

- (void)reset;

- (void)setDictionaryWithByteArray:(IOSByteArray *)dictionary;

- (void)setDictionaryWithByteArray:(IOSByteArray *)buf
                           withInt:(jint)offset
                           withInt:(jint)byteCount;

- (void)setInputWithByteArray:(IOSByteArray *)buf;

- (void)setInputWithByteArray:(IOSByteArray *)buf
                      withInt:(jint)offset
                      withInt:(jint)byteCount;

- (void)setLevelWithInt:(jint)level;

- (void)setStrategyWithInt:(jint)strategy;

- (jlong)getBytesRead;

- (jlong)getBytesWritten;

@end

__attribute__((always_inline)) inline void JavaUtilZipDeflater_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, BEST_COMPRESSION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, BEST_SPEED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, NO_COMPRESSION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, DEFAULT_COMPRESSION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, DEFAULT_STRATEGY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, DEFLATED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, FILTERED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, HUFFMAN_ONLY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, NO_FLUSH, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, SYNC_FLUSH, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, FULL_FLUSH, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflater, FINISH, jint)

#endif // _JavaUtilZipDeflater_H_

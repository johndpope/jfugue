//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/File.java
//

#ifndef _JavaIoFile_H_
#define _JavaIoFile_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaNetURI;
@class JavaNetURL;
@class JavaUtilRandom;
@protocol JavaIoFileFilter;
@protocol JavaIoFilenameFilter;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

#define JavaIoFile_serialVersionUID 301077366599181567LL

@interface JavaIoFile : NSObject < JavaIoSerializable, JavaLangComparable > {
}

- (instancetype)initWithJavaIoFile:(JavaIoFile *)dir
                      withNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)path;

- (instancetype)initWithNSString:(NSString *)dirPath
                    withNSString:(NSString *)name;

- (instancetype)initWithJavaNetURI:(JavaNetURI *)uri;

+ (IOSObjectArray *)listRoots;

- (jboolean)canExecute;

- (jboolean)canRead;

- (jboolean)canWrite;

- (jint)compareToWithId:(JavaIoFile *)another;

- (jboolean)delete__;

- (void)deleteOnExit;

- (jboolean)isEqual:(id)obj;

- (jboolean)exists;

- (NSString *)getAbsolutePath;

- (JavaIoFile *)getAbsoluteFile;

- (NSString *)getCanonicalPath;

- (JavaIoFile *)getCanonicalFile;

- (NSString *)getName;

- (NSString *)getParent;

- (JavaIoFile *)getParentFile;

- (NSString *)getPath;

- (NSUInteger)hash;

- (jboolean)isAbsolute;


- (jboolean)isDirectory;

- (jboolean)isFile;

- (jboolean)isHidden;

- (jlong)lastModified;

- (jboolean)setLastModifiedWithLong:(jlong)time;

- (jboolean)setReadOnly;

- (jboolean)setExecutableWithBoolean:(jboolean)executable
                         withBoolean:(jboolean)ownerOnly;

- (jboolean)setExecutableWithBoolean:(jboolean)executable;

- (jboolean)setReadableWithBoolean:(jboolean)readable
                       withBoolean:(jboolean)ownerOnly;

- (jboolean)setReadableWithBoolean:(jboolean)readable;

- (jboolean)setWritableWithBoolean:(jboolean)writable
                       withBoolean:(jboolean)ownerOnly;

- (jboolean)setWritableWithBoolean:(jboolean)writable;

- (jlong)length;

- (IOSObjectArray *)list;

- (IOSObjectArray *)listWithJavaIoFilenameFilter:(id<JavaIoFilenameFilter>)filter;

- (IOSObjectArray *)listFiles;

- (IOSObjectArray *)listFilesWithJavaIoFilenameFilter:(id<JavaIoFilenameFilter>)filter;

- (IOSObjectArray *)listFilesWithJavaIoFileFilter:(id<JavaIoFileFilter>)filter;

- (jboolean)mkdir;

- (jboolean)mkdirs;

- (jboolean)createNewFile;

+ (JavaIoFile *)createTempFileWithNSString:(NSString *)prefix
                              withNSString:(NSString *)suffix;

+ (JavaIoFile *)createTempFileWithNSString:(NSString *)prefix
                              withNSString:(NSString *)suffix
                            withJavaIoFile:(JavaIoFile *)directory;

- (jboolean)renameToWithJavaIoFile:(JavaIoFile *)newPath;

- (NSString *)description;

- (JavaNetURI *)toURI;

- (JavaNetURL *)toURL;

- (jlong)getTotalSpace;

- (jlong)getUsableSpace;

- (jlong)getFreeSpace;

@end

FOUNDATION_EXPORT BOOL JavaIoFile_initialized;
J2OBJC_STATIC_INIT(JavaIoFile)
FOUNDATION_EXPORT IOSObjectArray *JavaIoFile_listRoots();
FOUNDATION_EXPORT JavaIoFile *JavaIoFile_createTempFileWithNSString_withNSString_(NSString *prefix, NSString *suffix);
FOUNDATION_EXPORT JavaIoFile *JavaIoFile_createTempFileWithNSString_withNSString_withJavaIoFile_(NSString *prefix, NSString *suffix, JavaIoFile *directory);

J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaUtilRandom *JavaIoFile_tempFileRandom_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, tempFileRandom_, JavaUtilRandom *)

FOUNDATION_EXPORT jchar JavaIoFile_separatorChar_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, separatorChar_, jchar)

FOUNDATION_EXPORT NSString *JavaIoFile_separator_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, separator_, NSString *)

FOUNDATION_EXPORT jchar JavaIoFile_pathSeparatorChar_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, pathSeparatorChar_, jchar)

FOUNDATION_EXPORT NSString *JavaIoFile_pathSeparator_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, pathSeparator_, NSString *)

FOUNDATION_EXPORT jboolean JavaIoFile_caseSensitive_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoFile, caseSensitive_, jboolean)
J2OBJC_STATIC_FIELD_REF_GETTER(JavaIoFile, caseSensitive_, jboolean)

#endif // _JavaIoFile_H_
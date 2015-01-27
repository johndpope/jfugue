//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/io/CharStreams.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoCharStreams_RESTRICT
#define ComGoogleCommonIoCharStreams_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCharStreams_RESTRICT
#if !defined (_ComGoogleCommonIoCharStreams_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_INCLUDE)
#define _ComGoogleCommonIoCharStreams_

@class ComGoogleCommonIoCharSink;
@class ComGoogleCommonIoCharSource;
@class IOSObjectArray;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaLangStringBuilder;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonIoInputSupplier;
@protocol ComGoogleCommonIoLineProcessor;
@protocol ComGoogleCommonIoOutputSupplier;
@protocol JavaIoCloseable;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaLangReadable;
@protocol JavaUtilList;


#define ComGoogleCommonIoCharStreams_BUF_SIZE 2048

@interface ComGoogleCommonIoCharStreams : NSObject {
}

+ (id<ComGoogleCommonIoInputSupplier>)newReaderSupplierWithNSString:(NSString *)value OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonIoCharSource *)asCharSourceWithNSString:(NSString *)string;

+ (id<ComGoogleCommonIoInputSupplier>)newReaderSupplierWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)inArg
                                                                withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonIoOutputSupplier>)newWriterSupplierWithComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)outArg
                                                                  withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (void)writeWithJavaLangCharSequence:(id<JavaLangCharSequence>)from
  withComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)to;

+ (jlong)copy__WithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)from
              withComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)to OBJC_METHOD_FAMILY_NONE;

+ (jlong)copy__WithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)from
                           withJavaLangAppendable:(id<JavaLangAppendable>)to OBJC_METHOD_FAMILY_NONE;

+ (jlong)copy__WithJavaLangReadable:(id<JavaLangReadable>)from
             withJavaLangAppendable:(id<JavaLangAppendable>)to OBJC_METHOD_FAMILY_NONE;

+ (NSString *)toStringWithJavaLangReadable:(id<JavaLangReadable>)r;

+ (NSString *)toStringWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (NSString *)readFirstLineWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (id<JavaUtilList>)readLinesWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (id<JavaUtilList>)readLinesWithJavaLangReadable:(id<JavaLangReadable>)r;

+ (id)readLinesWithJavaLangReadable:(id<JavaLangReadable>)readable
 withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)processor;

+ (id)readLinesWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier
               withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)callback;

+ (id<ComGoogleCommonIoInputSupplier>)joinWithJavaLangIterable:(id<JavaLangIterable>)suppliers;

+ (id<ComGoogleCommonIoInputSupplier>)joinWithComGoogleCommonIoInputSupplierArray:(IOSObjectArray *)suppliers;

+ (void)skipFullyWithJavaIoReader:(JavaIoReader *)reader
                         withLong:(jlong)n;

+ (JavaIoWriter *)asWriterWithJavaLangAppendable:(id<JavaLangAppendable>)target;

+ (JavaIoReader *)asReaderWithJavaLangReadable:(id<JavaLangReadable, JavaIoCloseable>)readable;

+ (id<ComGoogleCommonIoInputSupplier>)asInputSupplierWithComGoogleCommonIoCharSource:(ComGoogleCommonIoCharSource *)source;

+ (id<ComGoogleCommonIoOutputSupplier>)asOutputSupplierWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)sink;

+ (ComGoogleCommonIoCharSource *)asCharSourceWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (ComGoogleCommonIoCharSink *)asCharSinkWithComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)supplier;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_init() {}
FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_newReaderSupplierWithNSString_(NSString *value);
FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharStreams_asCharSourceWithNSString_(NSString *string);
FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_newReaderSupplierWithComGoogleCommonIoInputSupplier_withJavaNioCharsetCharset_(id<ComGoogleCommonIoInputSupplier> inArg, JavaNioCharsetCharset *charset);
FOUNDATION_EXPORT id<ComGoogleCommonIoOutputSupplier> ComGoogleCommonIoCharStreams_newWriterSupplierWithComGoogleCommonIoOutputSupplier_withJavaNioCharsetCharset_(id<ComGoogleCommonIoOutputSupplier> outArg, JavaNioCharsetCharset *charset);
FOUNDATION_EXPORT void ComGoogleCommonIoCharStreams_writeWithJavaLangCharSequence_withComGoogleCommonIoOutputSupplier_(id<JavaLangCharSequence> from, id<ComGoogleCommonIoOutputSupplier> to);
FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithComGoogleCommonIoInputSupplier_withComGoogleCommonIoOutputSupplier_(id<ComGoogleCommonIoInputSupplier> from, id<ComGoogleCommonIoOutputSupplier> to);
FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithComGoogleCommonIoInputSupplier_withJavaLangAppendable_(id<ComGoogleCommonIoInputSupplier> from, id<JavaLangAppendable> to);
FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithJavaLangReadable_withJavaLangAppendable_(id<JavaLangReadable> from, id<JavaLangAppendable> to);
FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_toStringWithJavaLangReadable_(id<JavaLangReadable> r);
FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_toStringWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);
FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_readFirstLineWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoCharStreams_readLinesWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoCharStreams_readLinesWithJavaLangReadable_(id<JavaLangReadable> r);
FOUNDATION_EXPORT id ComGoogleCommonIoCharStreams_readLinesWithJavaLangReadable_withComGoogleCommonIoLineProcessor_(id<JavaLangReadable> readable, id<ComGoogleCommonIoLineProcessor> processor);
FOUNDATION_EXPORT id ComGoogleCommonIoCharStreams_readLinesWithComGoogleCommonIoInputSupplier_withComGoogleCommonIoLineProcessor_(id<ComGoogleCommonIoInputSupplier> supplier, id<ComGoogleCommonIoLineProcessor> callback);
FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_joinWithJavaLangIterable_(id<JavaLangIterable> suppliers);
FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_joinWithComGoogleCommonIoInputSupplierArray_(IOSObjectArray *suppliers);
FOUNDATION_EXPORT void ComGoogleCommonIoCharStreams_skipFullyWithJavaIoReader_withLong_(JavaIoReader *reader, jlong n);
FOUNDATION_EXPORT JavaIoWriter *ComGoogleCommonIoCharStreams_asWriterWithJavaLangAppendable_(id<JavaLangAppendable> target);
FOUNDATION_EXPORT JavaIoReader *ComGoogleCommonIoCharStreams_asReaderWithJavaLangReadable_(id<JavaLangReadable, JavaIoCloseable> readable);
FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_asInputSupplierWithComGoogleCommonIoCharSource_(ComGoogleCommonIoCharSource *source);
FOUNDATION_EXPORT id<ComGoogleCommonIoOutputSupplier> ComGoogleCommonIoCharStreams_asOutputSupplierWithComGoogleCommonIoCharSink_(ComGoogleCommonIoCharSink *sink);
FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharStreams_asCharSourceWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);
FOUNDATION_EXPORT ComGoogleCommonIoCharSink *ComGoogleCommonIoCharStreams_asCharSinkWithComGoogleCommonIoOutputSupplier_(id<ComGoogleCommonIoOutputSupplier> supplier);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoCharStreams, BUF_SIZE, jint)
#endif
#if !defined (_ComGoogleCommonIoCharStreams_StringCharSource_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_StringCharSource_INCLUDE)
#define _ComGoogleCommonIoCharStreams_StringCharSource_

@class ComGoogleCommonBaseSplitter;
@class ComGoogleCommonCollectImmutableList;
@class JavaIoReader;
@protocol JavaLangIterable;

#define ComGoogleCommonIoCharSource_RESTRICT 1
#define ComGoogleCommonIoCharSource_INCLUDE 1
#include "com/google/common/io/CharSource.h"


@interface ComGoogleCommonIoCharStreams_StringCharSource : ComGoogleCommonIoCharSource {
}

- (JavaIoReader *)openStream;

- (NSString *)read;

- (NSString *)readFirstLine;

- (ComGoogleCommonCollectImmutableList *)readLines;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonIoCharStreams_StringCharSource_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonIoCharStreams_StringCharSource)

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonIoCharStreams_StringCharSource_LINE_SPLITTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoCharStreams_StringCharSource, LINE_SPLITTER_, ComGoogleCommonBaseSplitter *)
#endif
#if !defined (_ComGoogleCommonIoCharStreams_StringCharSource_$1_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_StringCharSource_$1_INCLUDE)
#define _ComGoogleCommonIoCharStreams_StringCharSource_$1_

@class ComGoogleCommonIoCharStreams_StringCharSource;
@protocol JavaUtilIterator;

#define JavaLangIterable_RESTRICT 1
#define JavaLangIterable_INCLUDE 1
#include "java/lang/Iterable.h"


@interface ComGoogleCommonIoCharStreams_StringCharSource_$1 : NSObject < JavaLangIterable > {
}

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonIoCharStreams_StringCharSource:(ComGoogleCommonIoCharStreams_StringCharSource *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_StringCharSource_$1_init() {}
#endif
#if !defined (_ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_INCLUDE)
#define _ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_

@class ComGoogleCommonIoCharStreams_StringCharSource_$1;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonIoCharStreams_StringCharSource_$1_$1 : ComGoogleCommonCollectAbstractIterator {
 @public
  id<JavaUtilIterator> lines_;
}

- (NSString *)computeNext;

- (instancetype)initWithComGoogleCommonIoCharStreams_StringCharSource_$1:(ComGoogleCommonIoCharStreams_StringCharSource_$1 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonIoCharStreams_StringCharSource_$1_$1, lines_, id<JavaUtilIterator>)
#endif
#if !defined (_ComGoogleCommonIoCharStreams_$1_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$1_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$1_

@class JavaIoReader;
@protocol JavaLangIterable;

#define ComGoogleCommonIoInputSupplier_RESTRICT 1
#define ComGoogleCommonIoInputSupplier_INCLUDE 1
#include "com/google/common/io/InputSupplier.h"


@interface ComGoogleCommonIoCharStreams_$1 : NSObject < ComGoogleCommonIoInputSupplier > {
}

- (JavaIoReader *)getInput;

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_$1_init() {}
#endif
#if !defined (_ComGoogleCommonIoCharStreams_$2_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$2_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$2_

@class IOSCharArray;
@class JavaNioCharBuffer;
@protocol JavaIoCloseable;
@protocol JavaLangReadable;

#define JavaIoReader_RESTRICT 1
#define JavaIoReader_INCLUDE 1
#include "java/io/Reader.h"


@interface ComGoogleCommonIoCharStreams_$2 : JavaIoReader {
}

- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

- (void)close;

- (instancetype)initWithJavaLangReadable:(id<JavaLangReadable, JavaIoCloseable>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_$2_init() {}
#endif
#if !defined (_ComGoogleCommonIoCharStreams_$3_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$3_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$3_

@class ComGoogleCommonIoCharSource;
@class JavaIoReader;

#define ComGoogleCommonIoInputSupplier_RESTRICT 1
#define ComGoogleCommonIoInputSupplier_INCLUDE 1
#include "com/google/common/io/InputSupplier.h"


@interface ComGoogleCommonIoCharStreams_$3 : NSObject < ComGoogleCommonIoInputSupplier > {
}

- (id)getInput;

- (instancetype)initWithComGoogleCommonIoCharSource:(ComGoogleCommonIoCharSource *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_$3_init() {}
#endif
#if !defined (_ComGoogleCommonIoCharStreams_$4_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$4_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$4_

@class ComGoogleCommonIoCharSink;
@class JavaIoWriter;

#define ComGoogleCommonIoOutputSupplier_RESTRICT 1
#define ComGoogleCommonIoOutputSupplier_INCLUDE 1
#include "com/google/common/io/OutputSupplier.h"


@interface ComGoogleCommonIoCharStreams_$4 : NSObject < ComGoogleCommonIoOutputSupplier > {
}

- (id)getOutput;

- (instancetype)initWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_$4_init() {}
#endif
#if !defined (_ComGoogleCommonIoCharStreams_$5_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$5_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$5_

@class JavaIoReader;
@protocol ComGoogleCommonIoInputSupplier;

#define ComGoogleCommonIoCharSource_RESTRICT 1
#define ComGoogleCommonIoCharSource_INCLUDE 1
#include "com/google/common/io/CharSource.h"


@interface ComGoogleCommonIoCharStreams_$5 : ComGoogleCommonIoCharSource {
}

- (JavaIoReader *)openStream;

- (instancetype)initWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_$5_init() {}
#endif
#if !defined (_ComGoogleCommonIoCharStreams_$6_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$6_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$6_

@class JavaIoWriter;
@protocol ComGoogleCommonIoOutputSupplier;

#define ComGoogleCommonIoCharSink_RESTRICT 1
#define ComGoogleCommonIoCharSink_INCLUDE 1
#include "com/google/common/io/CharSink.h"


@interface ComGoogleCommonIoCharStreams_$6 : ComGoogleCommonIoCharSink {
}

- (JavaIoWriter *)openStream;

- (instancetype)initWithComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCharStreams_$6_init() {}
#endif

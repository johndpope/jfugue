//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/tools/GetInstrumentsUsedTool.java
//

#ifndef _OrgJfugueToolsGetInstrumentsUsedTool_H_
#define _OrgJfugueToolsGetInstrumentsUsedTool_H_

@protocol JavaUtilList;
@protocol OrgJfuguePatternPatternProducer;

#import "JreEmulation.h"
#include "org/jfugue/parser/ParserListenerAdapter.h"

@interface OrgJfugueToolsGetInstrumentsUsedTool : OrgJfugueParserParserListenerAdapter {
 @public
  id<JavaUtilList> instruments_;
}

- (instancetype)init;

- (void)onInstrumentParsedWithByte:(jbyte)instrument;

- (id<JavaUtilList>)getInstrumentsUsedInPatternWithOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer;

- (void)copyAllFieldsTo:(OrgJfugueToolsGetInstrumentsUsedTool *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueToolsGetInstrumentsUsedTool_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueToolsGetInstrumentsUsedTool, instruments_, id<JavaUtilList>)

#endif // _OrgJfugueToolsGetInstrumentsUsedTool_H_

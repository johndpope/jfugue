//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/functions/SysexFunction.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "java/lang/Byte.h"
#include "org/jfugue/parser/Parser.h"
#include "org/staccato/StaccatoParserContext.h"
#include "org/staccato/functions/SysexFunction.h"

BOOL OrgStaccatoFunctionsSysexFunction_initialized = NO;

@implementation OrgStaccatoFunctionsSysexFunction

OrgStaccatoFunctionsSysexFunction * OrgStaccatoFunctionsSysexFunction_instance_;
IOSObjectArray * OrgStaccatoFunctionsSysexFunction_NAMES_;

+ (OrgStaccatoFunctionsSysexFunction *)getInstance {
  return OrgStaccatoFunctionsSysexFunction_getInstance();
}

- (instancetype)init {
  return [super init];
}

- (IOSObjectArray *)getNames {
  return OrgStaccatoFunctionsSysexFunction_NAMES_;
}

- (void)applyWithNSString:(NSString *)parameters
withOrgStaccatoStaccatoParserContext:(OrgStaccatoStaccatoParserContext *)context {
  IOSObjectArray *params = [((NSString *) nil_chk(parameters)) split:@","];
  IOSByteArray *bytes = [IOSByteArray newArrayWithLength:((IOSObjectArray *) nil_chk(params))->size_];
  for (jint i = 0; i < params->size_; i++) {
    *IOSByteArray_GetRef(bytes, i) = JavaLangByte_parseByteWithNSString_([((NSString *) nil_chk(IOSObjectArray_Get(params, i))) trim]);
  }
  [((OrgJfugueParserParser *) nil_chk([((OrgStaccatoStaccatoParserContext *) nil_chk(context)) getParser])) fireSystemExclusiveParsedWithByteArray:bytes];
}

+ (void)initialize {
  if (self == [OrgStaccatoFunctionsSysexFunction class]) {
    OrgStaccatoFunctionsSysexFunction_NAMES_ = [IOSObjectArray newArrayWithObjects:(id[]){ @"SYSEX", @"SE", @"SX", @"SYSTEM", @"SYS", @"SYSTEMEXCLUSIVE" } count:6 type:[IOSClass classWithClass:[NSString class]]];
    J2OBJC_SET_INITIALIZED(OrgStaccatoFunctionsSysexFunction)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "getInstance", NULL, "Lorg.staccato.functions.SysexFunction;", 0x9, NULL },
    { "init", "SysexFunction", NULL, 0x2, NULL },
    { "getNames", NULL, "[Ljava.lang.String;", 0x1, NULL },
    { "applyWithNSString:withOrgStaccatoStaccatoParserContext:", "apply", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "instance_", NULL, 0xa, "Lorg.staccato.functions.SysexFunction;", &OrgStaccatoFunctionsSysexFunction_instance_,  },
    { "NAMES_", NULL, 0x9, "[Ljava.lang.String;", &OrgStaccatoFunctionsSysexFunction_NAMES_,  },
  };
  static const J2ObjcClassInfo _OrgStaccatoFunctionsSysexFunction = { "SysexFunction", "org.staccato.functions", NULL, 0x1, 4, methods, 2, fields, 0, NULL};
  return &_OrgStaccatoFunctionsSysexFunction;
}

@end

OrgStaccatoFunctionsSysexFunction *OrgStaccatoFunctionsSysexFunction_getInstance() {
  OrgStaccatoFunctionsSysexFunction_init();
  if (OrgStaccatoFunctionsSysexFunction_instance_ == nil) {
    OrgStaccatoFunctionsSysexFunction_instance_ = [[OrgStaccatoFunctionsSysexFunction alloc] init];
  }
  return OrgStaccatoFunctionsSysexFunction_instance_;
}

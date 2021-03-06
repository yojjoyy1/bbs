//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaTextFormat.h"

@interface JavaTextNumberFormat : JavaTextFormat
{
    _Bool groupingUsed_;
    _Bool parseIntegerOnly_;
    int maximumIntegerDigits_;
    int minimumIntegerDigits_;
    int maximumFractionDigits_;
    int minimumFractionDigits_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getPercentInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getPercentInstance;
+ (id)getNumberInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getNumberInstance;
+ (id)getInstanceWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
+ (id)getInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getInstance;
+ (id)getIntegerInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getIntegerInstance;
+ (id)getCurrencyInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getCurrencyInstance;
+ (id)getAvailableLocales;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)setRoundingModeWithJavaMathRoundingModeEnum:(id)arg1;
- (id)getRoundingMode;
- (void)setParseIntegerOnlyWithBoolean:(_Bool)arg1;
- (void)setMinimumIntegerDigitsWithInt:(int)arg1;
- (void)setMinimumFractionDigitsWithInt:(int)arg1;
- (void)setMaximumIntegerDigitsWithInt:(int)arg1;
- (void)setMaximumFractionDigitsWithInt:(int)arg1;
- (void)setGroupingUsedWithBoolean:(_Bool)arg1;
- (void)setCurrencyWithJavaUtilCurrency:(id)arg1;
- (id)parseObjectWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (id)parseWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (id)parseWithNSString:(id)arg1;
- (_Bool)isParseIntegerOnly;
- (_Bool)isGroupingUsed;
- (unsigned long long)hash;
- (int)getMinimumIntegerDigits;
- (int)getMinimumFractionDigits;
- (int)getMaximumIntegerDigits;
- (int)getMaximumFractionDigits;
- (id)getCurrency;
- (id)formatWithId:(id)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)formatWithLong:(long long)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)formatWithLong:(long long)arg1;
- (id)formatWithDouble:(double)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)formatWithDouble:(double)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)clone;
- (id)init;

@end


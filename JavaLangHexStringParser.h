//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JavaLangHexStringParser : NSObject
{
    int EXPONENT_WIDTH_;
    int MANTISSA_WIDTH_;
    long long EXPONENT_BASE_;
    long long MAX_EXPONENT_;
    long long MIN_EXPONENT_;
    long long MANTISSA_MASK_;
    long long sign_;
    long long exponent_;
    long long mantissa_;
    NSString *abandonedNumber_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (float)parseFloatWithNSString:(id)arg1;
+ (double)parseDoubleWithNSString:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (int)countBitsLengthWithLong:(long long)arg1;
- (int)getOffsetWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getNormalizedSignificandWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)round;
- (void)discardTrailingBitsWithLong:(long long)arg1;
- (void)fitMantissaInDesiredWidthWithInt:(int)arg1;
- (void)processSubNormalNumber;
- (void)processNormalNumber;
- (void)checkedAddExponentWithLong:(long long)arg1;
- (void)setZero;
- (void)setInfinite;
- (void)parseMantissaWithNSString:(id)arg1;
- (void)parseExponentWithNSString:(id)arg1;
- (void)parseHexSignWithNSString:(id)arg1;
- (long long)parseWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;

@end


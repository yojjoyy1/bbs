//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

#import "JavaLangComparable.h"

@interface JavaLangFloat : NSNumber <JavaLangComparable>
{
    float value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)toHexStringWithFloat:(float)arg1;
+ (id)valueOfWithFloat:(float)arg1;
+ (int)compareWithFloat:(float)arg1 withFloat:(float)arg2;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)toStringWithFloat:(float)arg1;
+ (float)parseFloatWithNSString:(id)arg1;
+ (_Bool)isNaNWithFloat:(float)arg1;
+ (_Bool)isInfiniteWithFloat:(float)arg1;
+ (float)intBitsToFloatWithInt:(int)arg1;
+ (int)floatToRawIntBitsWithFloat:(float)arg1;
+ (int)floatToIntBitsWithFloat:(float)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (void)copyAllFieldsTo:(id)arg1;
- (id)description;
- (short)shortValue;
- (long long)longLongValue;
- (_Bool)isNaN;
- (_Bool)isInfinite;
- (int)intValue;
- (unsigned long long)hash;
- (float)floatValue;
- (_Bool)isEqual:(id)arg1;
- (double)doubleValue;
- (BOOL)charValue;
- (int)compareToWithId:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initJavaLangFloatWithFloat:(float)arg1;

@end


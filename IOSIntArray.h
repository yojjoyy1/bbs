//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSIntArray : IOSArray
{
    int buffer_[0];
}

+ (id)iosClass;
+ (id)arrayWithInts:(const int *)arg1 count:(unsigned long long)arg2;
+ (id)newArrayWithInts:(const int *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithLength:(unsigned long long)arg1;
+ (id)newArrayWithLength:(unsigned long long)arg1;
- (id)elementType;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (void)getInts:(int *)arg1 length:(unsigned long long)arg2;
- (int)replaceIntAtIndex:(unsigned long long)arg1 withInt:(int)arg2;
- (int *)intRefAtIndex:(unsigned long long)arg1;
- (int)intAtIndex:(unsigned long long)arg1;

@end


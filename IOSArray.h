//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IOSArray : NSObject <NSCopying>
{
    int size_;
}

+ (id)iosClassWithDimensions:(unsigned long long)arg1;
+ (id)iosClass;
+ (id)newArrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2;
+ (id)arrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)elementType;
- (id)getClass;
- (id)description;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (unsigned long long)count;
- (int)length;
- (void)dealloc;

@end


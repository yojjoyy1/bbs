//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractList.h"

#import "JavaIoSerializable.h"

@interface JavaUtilCollections_SingletonList : JavaUtilAbstractList <JavaIoSerializable>
{
    id element_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (int)size;
- (id)getWithInt:(int)arg1;
- (_Bool)containsWithId:(id)arg1;
- (id)initWithId:(id)arg1;

@end


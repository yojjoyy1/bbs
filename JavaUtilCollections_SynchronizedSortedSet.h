//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilCollections_SynchronizedSet.h"

#import "JavaUtilSortedSet.h"

@interface JavaUtilCollections_SynchronizedSortedSet : JavaUtilCollections_SynchronizedSet <JavaUtilSortedSet>
{
    id <JavaUtilSortedSet> ss_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)tailSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)last;
- (id)headSetWithId:(id)arg1;
- (id)first;
- (id)comparator;
- (id)initWithJavaUtilSortedSet:(id)arg1 withId:(id)arg2;
- (id)initWithJavaUtilSortedSet:(id)arg1;

@end


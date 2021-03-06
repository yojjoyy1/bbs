//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class JavaUtilHashtable, JavaUtilHashtable_Entry;

@interface JavaUtilHashtable_HashIterator : NSObject <JavaUtilIterator>
{
    int position_;
    int expectedModCount_;
    id <JavaUtilMapEntry_Type> type_;
    JavaUtilHashtable_Entry *lastEntry_;
    int lastPosition_;
    _Bool canRemove_;
    JavaUtilHashtable *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)remove;
- (id)next;
- (_Bool)hasNext;
- (id)initWithJavaUtilHashtable:(id)arg1 withJavaUtilMapEntry_Type:(id)arg2;

@end


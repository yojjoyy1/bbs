//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class JavaUtilAbstractList;

@interface JavaUtilAbstractList_SimpleListIterator : NSObject <JavaUtilIterator>
{
    int numLeft_;
    int expectedModCount_;
    int lastPosition_;
    JavaUtilAbstractList *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)initWithJavaUtilAbstractList:(id)arg1;
- (void)remove;
- (id)next;
- (_Bool)hasNext;

@end

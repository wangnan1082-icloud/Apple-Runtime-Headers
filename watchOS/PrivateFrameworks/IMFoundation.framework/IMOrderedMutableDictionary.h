//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDoubleLinkedList, NSMutableDictionary;

@interface IMOrderedMutableDictionary : NSObject
{
    NSMutableDictionary *_dictionary;
    IMDoubleLinkedList *_linkedList;
}

- (_Bool)containsKey:(id)arg1;
- (_Bool)containsOrderedObject:(id)arg1;
- (id)orderedObjects;
- (void)removeOrderedObjectForKey:(id)arg1;
- (id)orderedObjectForKey:(id)arg1;
- (void)setOrderedObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

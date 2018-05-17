//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSString;

@interface PKDiff : NSObject <NSSecureCoding>
{
    NSMutableArray *_hunks;
    NSString *_passUniqueID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
- (void).cxx_destruct;
- (unsigned int)_hunkIndexForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)compare:(id)arg1;
- (_Bool)isEqualToDiff:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)anyKey;
- (void)addHunksFromDiff:(id)arg1;
- (void)removeHunkForKey:(id)arg1;
- (_Bool)getHunkForKey:(id)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4;
- (id)description;
- (void)enumerateHunks:(CDUnknownBlockType)arg1;
- (void)key:(id *)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4 forHunkAtIndex:(int)arg5;
- (int)hunkCount;
- (void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
- (id)init;

@end

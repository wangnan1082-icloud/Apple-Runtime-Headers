//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NSPointerFunctions : NSObject <NSCopying>
{
}

+ (id)pointerFunctionsWithOptions:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property _Bool usesWeakReadAndWriteBarriers;
@property _Bool usesStrongWriteBarrier;
@property CDUnknownFunctionPointerType relinquishFunction;
@property CDUnknownFunctionPointerType acquireFunction;
@property CDUnknownFunctionPointerType descriptionFunction;
@property CDUnknownFunctionPointerType isEqualFunction;
@property CDUnknownFunctionPointerType hashFunction;
@property CDUnknownFunctionPointerType sizeFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NUTileInfo : NSObject
{
    long long _index;
    CDStruct_d58201db _size;
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
}

+ (id)tileInfoWithIndex:(long long)arg1 size:(CDStruct_912cb5d2)arg2 frameRect:(CDStruct_996ac03c)arg3 contentRect:(CDStruct_996ac03c)arg4;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (id)debugDescription;
- (id)translatedAndClippedRegion:(id)arg1;

@end

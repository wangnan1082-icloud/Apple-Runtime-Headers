//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _HDDatabasePendingWriteRecord : NSObject
{
    CDUnknownBlockType _writeBlock;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) CDUnknownBlockType writeBlock; // @synthesize writeBlock=_writeBlock;
- (void).cxx_destruct;
- (id)initWithWriteBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

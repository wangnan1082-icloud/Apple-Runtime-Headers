//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCOperationCanceling.h"

@class NSString;

@interface FCKeyedOperation : NSObject <FCOperationCanceling>
{
    _Bool _cancelled;
    id <FCOperationCanceling> _cancelHandler;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)executeForQueue:(id)arg1 delegate:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

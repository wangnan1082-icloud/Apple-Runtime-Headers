//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTSUIOChannel-Protocol.h>
#import <ModelIO/MDLTSUStreamReadChannel-Protocol.h>

@protocol MDLTSUReadChannel <MDLTSUIOChannel, MDLTSUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCControlChannelencryptionDelegate <NSObject>
- (BOOL)decryptWithMKI:(const void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (BOOL)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString;

@protocol iAUPServerDelegate
- (void)updateProgress:(double)arg1;
- (void)firmwareUpdateComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)handleFirmwareUpdateStatus:(NSDictionary *)arg1;
- (NSError *)writeData:(NSData *)arg1;
- (void)logStatusString:(NSString *)arg1;
@end


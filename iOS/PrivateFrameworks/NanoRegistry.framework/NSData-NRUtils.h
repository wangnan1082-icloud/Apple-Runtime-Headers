//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (NRUtils)
+ (id)fromUUID:(id)arg1;
+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;
@property(readonly, nonatomic) NSData *NRSHA256;
- (void)NRSHA256:(unsigned char [32])arg1;
- (id)toUUID;
@end

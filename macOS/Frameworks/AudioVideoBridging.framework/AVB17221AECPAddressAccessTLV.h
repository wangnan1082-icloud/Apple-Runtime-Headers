//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface AVB17221AECPAddressAccessTLV : NSObject
{
    unsigned char mode;
    unsigned long long address;
    NSData *memoryData;
}

@property(copy) NSData *memoryData; // @synthesize memoryData;
@property unsigned long long address; // @synthesize address;
@property unsigned char mode; // @synthesize mode;
- (void)dealloc;
- (id)description;

@end

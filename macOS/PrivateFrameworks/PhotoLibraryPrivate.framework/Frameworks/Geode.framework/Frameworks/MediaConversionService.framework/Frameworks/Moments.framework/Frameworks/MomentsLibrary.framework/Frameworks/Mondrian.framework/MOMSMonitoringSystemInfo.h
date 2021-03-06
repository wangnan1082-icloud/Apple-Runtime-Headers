//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mondrian/NSSecureCoding-Protocol.h>

@interface MOMSMonitoringSystemInfo : NSObject <NSSecureCoding>
{
    double _cpuUsagePercentage;
    unsigned long long _physicalMemoryFreeBytes;
    unsigned long long _physicalMemoryUsedBytes;
    unsigned long long _virtualMemoryBytes;
    unsigned long long _virtualMemoryPageInBytes;
    unsigned long long _virtualMemoryPageOutBytes;
    unsigned long long _virtualMemoryCompressedBytes;
    unsigned long long _virtualMemorySwapUsedBytes;
    unsigned long long _diskBytesReadPerInterval;
    unsigned long long _diskBytesWritePerInterval;
}

+ (BOOL)supportsSecureCoding;
@property unsigned long long diskBytesWritePerInterval; // @synthesize diskBytesWritePerInterval=_diskBytesWritePerInterval;
@property unsigned long long diskBytesReadPerInterval; // @synthesize diskBytesReadPerInterval=_diskBytesReadPerInterval;
@property unsigned long long virtualMemorySwapUsedBytes; // @synthesize virtualMemorySwapUsedBytes=_virtualMemorySwapUsedBytes;
@property unsigned long long virtualMemoryCompressedBytes; // @synthesize virtualMemoryCompressedBytes=_virtualMemoryCompressedBytes;
@property unsigned long long virtualMemoryPageOutBytes; // @synthesize virtualMemoryPageOutBytes=_virtualMemoryPageOutBytes;
@property unsigned long long virtualMemoryPageInBytes; // @synthesize virtualMemoryPageInBytes=_virtualMemoryPageInBytes;
@property unsigned long long virtualMemoryBytes; // @synthesize virtualMemoryBytes=_virtualMemoryBytes;
@property unsigned long long physicalMemoryUsedBytes; // @synthesize physicalMemoryUsedBytes=_physicalMemoryUsedBytes;
@property unsigned long long physicalMemoryFreeBytes; // @synthesize physicalMemoryFreeBytes=_physicalMemoryFreeBytes;
@property double cpuUsagePercentage; // @synthesize cpuUsagePercentage=_cpuUsagePercentage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


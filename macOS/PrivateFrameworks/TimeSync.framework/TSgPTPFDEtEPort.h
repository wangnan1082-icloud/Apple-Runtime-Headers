//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort
{
    TSgPTPPortStatistics *_statistics;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
@property(retain, nonatomic) TSgPTPPortStatistics *statistics; // @synthesize statistics=_statistics;
- (void)dealloc;
- (id)_statistics;
- (void)updateProperties;
- (BOOL)_commonInitWithService:(unsigned int)arg1;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end

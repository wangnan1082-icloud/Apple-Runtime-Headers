//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABMetadataOperation.h>

@class NSArray;

@interface ABMetadataPlanToCompleteOperation : ABMetadataOperation
{
    NSArray *_uniqueIds;
    int _jobType;
}

- (void).cxx_destruct;
- (void)main;
- (int)metadataJobType;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2 jobType:(int)arg3;

@end

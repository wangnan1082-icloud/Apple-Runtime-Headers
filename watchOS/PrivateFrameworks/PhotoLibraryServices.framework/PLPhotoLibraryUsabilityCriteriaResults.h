//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPersonClusterUsabilityCriteriaResults.h"

@class NSArray, NSString;

@interface PLPhotoLibraryUsabilityCriteriaResults : NSObject <PLPersonClusterUsabilityCriteriaResults>
{
    NSArray *_unverifiedPersons;
    unsigned int _verifiedPersonsCount;
}

- (void).cxx_destruct;
- (int)faceCountOfUnverifiedPersonAtIndex:(unsigned int)arg1;
- (unsigned int)countOfUnverifiedPersons;
- (unsigned int)countOfVerifiedPersons;
- (id)initWithUnverifiedPersons:(id)arg1 verifiedPersonsCount:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

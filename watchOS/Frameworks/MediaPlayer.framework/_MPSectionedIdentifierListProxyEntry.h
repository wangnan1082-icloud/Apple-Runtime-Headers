//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPSectionedIdentifierListEnumerationResult.h"

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult>
{
    int _branchDepth;
    int _entryType;
}

@property(readonly, nonatomic) int entryType; // @synthesize entryType=_entryType;
@property(readonly, nonatomic) int branchDepth; // @synthesize branchDepth=_branchDepth;
- (id)trackingEntryResult;
- (id)itemResult;
@property(readonly, copy) NSString *description;
- (id)initWithType:(int)arg1 branchDepth:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

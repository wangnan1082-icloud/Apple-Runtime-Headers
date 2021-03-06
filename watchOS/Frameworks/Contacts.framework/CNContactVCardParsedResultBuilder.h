//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNVCardParsedResultBuilder-Protocol.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder>
{
    CNMutableContact *_contact;
    _Bool _empty;
}

+ (id)labeledValuesWithValues:(id)arg1 transform:(CDUnknownBlockType)arg2 labels:(id)arg3 isPrimaries:(id)arg4;
+ (CDUnknownBlockType)contactValueTransformForVCardKey:(id)arg1;
+ (id)contactKeyForVCardKey:(id)arg1;
- (void).cxx_destruct;
- (int)personFlags;
- (_Bool)setPersonFlags:(int)arg1;
- (int)personFlagsByAddingContactType:(int)arg1 toFlags:(int)arg2;
- (int)contactTypeFromPersonFlags:(int)arg1;
- (id)validCountryCodes;
- (void)setUnknownProperties:(id)arg1;
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)canSetValueForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)build;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


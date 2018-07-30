//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEDSecureArchiving.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface DEDBugSessionOperation : NSObject <NSSecureCoding, DEDSecureArchiving>
{
    int _type;
    NSDictionary *_options;
    NSString *_identifier;
}

+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
+ (id)hashingKeyWithId:(id)arg1 type:(int)arg2;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hashingKey;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, NSURL, NSUUID;

@interface SPMSharePoint : NSObject <NSCopying>
{
    BOOL _available;
    BOOL _smbGuestAccess;
    BOOL _smbShared;
    NSUUID *_identifier;
    NSString *_name;
    NSURL *_url;
    NSUUID *_accountID;
    NSUUID *_ownerID;
    NSArray *_permissions;
    NSUUID *_groupID;
    NSString *_smbName;
    unsigned long long _smbCreateMask;
    unsigned long long _smbDirectoryMask;
}

+ (BOOL)isURLShareable:(id)arg1;
+ (id)attributesToFetch;
@property(readonly) BOOL smbShared; // @synthesize smbShared=_smbShared;
@property(readonly) BOOL smbGuestAccess; // @synthesize smbGuestAccess=_smbGuestAccess;
@property(readonly) unsigned long long smbDirectoryMask; // @synthesize smbDirectoryMask=_smbDirectoryMask;
@property(readonly) unsigned long long smbCreateMask; // @synthesize smbCreateMask=_smbCreateMask;
@property(readonly) NSString *smbName; // @synthesize smbName=_smbName;
@property(readonly) NSUUID *groupID; // @synthesize groupID=_groupID;
@property(retain) NSArray *permissions; // @synthesize permissions=_permissions;
@property(readonly) NSUUID *ownerID; // @synthesize ownerID=_ownerID;
@property(readonly) BOOL available; // @synthesize available=_available;
@property(readonly) NSUUID *accountID; // @synthesize accountID=_accountID;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 url:(id)arg3;
- (id)initWithRecord:(id)arg1;

@end

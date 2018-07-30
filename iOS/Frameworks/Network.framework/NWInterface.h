//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NWPrettyDescription.h"

@class NSObject<OS_nw_interface>, NSString;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    NSObject<OS_nw_interface> *_internalInterface;
}

+ (id)interfaceWithProtocolBufferData:(id)arg1;
+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain) NSObject<OS_nw_interface> *internalInterface; // @synthesize internalInterface=_internalInterface;
- (void).cxx_destruct;
- (id)createProtocolBufferObject;
@property(readonly, nonatomic) NSString *typeString;
- (_Bool)isDeepEqual:(id)arg1;
- (_Bool)isShallowEqual:(id)arg1;
@property(readonly, nonatomic) NWInterface *delegateInterface;
@property(readonly, nonatomic) unsigned long long generation;
@property(readonly, nonatomic) long long mtu;
@property(readonly, nonatomic, getter=isExpensive) _Bool expensive;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) unsigned long long interfaceIndex;
@property(readonly, nonatomic) NSString *interfaceName;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithInterfaceIndex:(unsigned long long)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2;

@end

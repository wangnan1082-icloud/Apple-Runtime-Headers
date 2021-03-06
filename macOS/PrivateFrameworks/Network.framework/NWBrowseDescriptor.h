//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString, NWInterface;
@protocol OS_nw_browse_descriptor;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_browse_descriptor> *_internalDescriptor;
}

+ (id)descriptorWithProtocolBufferData:(id)arg1;
+ (BOOL)supportsBrowseCallback;
+ (id)descriptorWithInternalDescriptor:(id)arg1;
+ (Class)copyClassForDescriptorType:(int)arg1;
+ (unsigned int)descriptorType;
@property(retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor; // @synthesize internalDescriptor=_internalDescriptor;
- (void).cxx_destruct;
- (id)createProtocolBufferObject;
- (id)encodedData;
- (id)initWithEncodedData:(id)arg1;
- (void)browseWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NWInterface *interface;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptor:(id)arg1;

@end


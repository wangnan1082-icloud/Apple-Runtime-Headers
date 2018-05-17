//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface IDSGlobalLinkMessage : NSObject
{
    int _command;
    NSData *_hmacKeyData;
    struct IDSGlobalLinkAttribute _attributes[20];
    int _numAttribute;
}

+ (id)messageWithBuffer:(char *)arg1 length:(int)arg2;
+ (id)messageWithCommand:(int)arg1 attributes:(id)arg2;
@property(readonly) NSData *hmacKeyData; // @synthesize hmacKeyData=_hmacKeyData;
@property(readonly, nonatomic) int command; // @synthesize command=_command;
- (void).cxx_destruct;
- (_Bool)read:(char *)arg1 inputLength:(int)arg2;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2;
- (_Bool)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char *)arg2 inputLength:(int)arg3;
- (_Bool)getAttribute:(int)arg1 attribute:(struct IDSGlobalLinkAttribute *)arg2;
- (void)setAttributes:(id)arg1;
- (void)_addBinaryDataAttribute:(int)arg1 value:(id)arg2;
- (void)_addUInt64Attribute:(int)arg1 value:(unsigned long long)arg2;
- (void)_addUInt32Attribute:(int)arg1 value:(unsigned int)arg2;
- (void)_addUInt16Attribute:(int)arg1 value:(unsigned short)arg2;
- (void)_addAddressAttribute:(int)arg1 value:(struct sockaddr *)arg2;
- (_Bool)_addAttribute:(struct IDSGlobalLinkAttribute *)arg1;
- (void)dealloc;
- (id)initWithCommand:(int)arg1;

@end

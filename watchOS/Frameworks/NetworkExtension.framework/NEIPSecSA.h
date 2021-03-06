//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData, NSString, NWAddressEndpoint, NWInterface;

@interface NEIPSecSA : NSObject <NSCopying>
{
    _Bool _natTraversalEnabled;
    _Bool _natDetectedOnPeer;
    _Bool _natKeepaliveEnabled;
    _Bool _natKeepaliveOffloadEnabled;
    unsigned short _natTraversalPort;
    unsigned int _spi;
    int _direction;
    int _mode;
    int _protocol;
    NWAddressEndpoint *_localAddress;
    NWAddressEndpoint *_remoteAddress;
    NWInterface *_boundInterface;
    NSString *_tunnelInterfaceName;
    unsigned int _replayWindowSize;
    int _encryptionAlgorithm;
    NSData *_encryptionKey;
    int _authenticationAlgorithm;
    NSData *_authenticationKey;
    unsigned int _internalSAID;
    unsigned long long _lifetimeSeconds;
    unsigned long long _natKeepaliveIntervalSeconds;
    unsigned long long _natKeepaliveOffloadIntervalSeconds;
}

@property unsigned int internalSAID; // @synthesize internalSAID=_internalSAID;
@property unsigned short natTraversalPort; // @synthesize natTraversalPort=_natTraversalPort;
@property unsigned long long natKeepaliveOffloadIntervalSeconds; // @synthesize natKeepaliveOffloadIntervalSeconds=_natKeepaliveOffloadIntervalSeconds;
@property unsigned long long natKeepaliveIntervalSeconds; // @synthesize natKeepaliveIntervalSeconds=_natKeepaliveIntervalSeconds;
@property _Bool natKeepaliveOffloadEnabled; // @synthesize natKeepaliveOffloadEnabled=_natKeepaliveOffloadEnabled;
@property _Bool natKeepaliveEnabled; // @synthesize natKeepaliveEnabled=_natKeepaliveEnabled;
@property _Bool natDetectedOnPeer; // @synthesize natDetectedOnPeer=_natDetectedOnPeer;
@property _Bool natTraversalEnabled; // @synthesize natTraversalEnabled=_natTraversalEnabled;
@property(retain) NSData *authenticationKey; // @synthesize authenticationKey=_authenticationKey;
@property int authenticationAlgorithm; // @synthesize authenticationAlgorithm=_authenticationAlgorithm;
@property(retain) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property int encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
@property unsigned long long lifetimeSeconds; // @synthesize lifetimeSeconds=_lifetimeSeconds;
@property unsigned int replayWindowSize; // @synthesize replayWindowSize=_replayWindowSize;
@property(retain) NSString *tunnelInterfaceName; // @synthesize tunnelInterfaceName=_tunnelInterfaceName;
@property(retain) NWInterface *boundInterface; // @synthesize boundInterface=_boundInterface;
@property(retain) NWAddressEndpoint *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain) NWAddressEndpoint *localAddress; // @synthesize localAddress=_localAddress;
@property int protocol; // @synthesize protocol=_protocol;
@property int mode; // @synthesize mode=_mode;
@property(readonly) int direction; // @synthesize direction=_direction;
@property unsigned int spi; // @synthesize spi=_spi;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)createDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initInboundSA;
- (id)initOutboundSAWithSPI:(unsigned int)arg1;

@end


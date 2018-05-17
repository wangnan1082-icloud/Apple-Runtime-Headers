//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface SIUXPCHelper : NSObject
{
    struct AuthorizationOpaqueRef *_authorizationRef;
    NSXPCConnection *_connection;
    BOOL _allowInteraction;
    double _creationTime;
}

+ (id)helperAllowingInteraction:(BOOL)arg1 exportedObject:(id)arg2;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (int)validateAuthorizationRef:(struct AuthorizationOpaqueRef *)arg1;
- (id)getAuthorizationExternalFormWithError:(id *)arg1;
- (id)authErrorForCode:(int)arg1;
- (BOOL)authenticateWithError:(id *)arg1;
- (void)stopImageCreation;
- (double)creationTime;
- (void)createAnImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)blessBootVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initAllowingInteraction:(BOOL)arg1 callbackObject:(id)arg2;

@end

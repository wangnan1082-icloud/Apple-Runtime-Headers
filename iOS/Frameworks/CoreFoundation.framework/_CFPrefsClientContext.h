//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface _CFPrefsClientContext : NSObject
{
    // Error parsing type: A@, name: _cfprefsd
    struct __CFDictionary *_readPermissionsCache;
    struct __CFDictionary *_writePermissionsCache;
    struct __CFDictionary *_suiteCache;
    struct __CFArray *_ownedSources;
    NSObject<OS_xpc_object> *_entitlements;
    struct __CFBoolean *_sandboxed;
    struct os_unfair_lock_s _lock;
    unsigned long long _token;
    BOOL _isPlatformBinary;
}

@end

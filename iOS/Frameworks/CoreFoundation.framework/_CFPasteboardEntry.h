//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardEntry : NSObject
{
    const struct __CFString *_flavorName;
    const struct __CFUUID *_uuid;
    const struct __CFData *_data;
    NSObject<OS_xpc_object> *_shmem;
    unsigned long long _shmemLength;
    unsigned long long _dataFlags;
    unsigned char _isHidden;
    CDUnknownBlockType _promisor;
    CDUnknownBlockType _asyncPromisor;
    int _promiseState;
    NSObject<OS_xpc_object> *_promisorConnection;
    int _itemIdentifier;
    unsigned char _isPendingFlush;
    unsigned char _extensionConsumed;
}

@property unsigned char extensionConsumed; // @synthesize extensionConsumed=_extensionConsumed;
@property unsigned char isPendingFlush; // @synthesize isPendingFlush=_isPendingFlush;
@property(getter=isHidden) unsigned char hidden; // @synthesize hidden=_isHidden;
@property(readonly) const struct __CFUUID *promiseUUID; // @synthesize promiseUUID=_uuid;
@property(readonly) int itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property unsigned long long dataFlags; // @synthesize dataFlags=_dataFlags;
@property(readonly) const struct __CFString *flavorName; // @synthesize flavorName=_flavorName;
- (void)resolveClientPromisedDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned char)resolveLocalPromisedData;
-     // Error parsing type: v40@0:8@?16^{__CFPasteboard={__CFRuntimeBase=QAQ}^{__CFString}@^{__CFUUID}^{__CFArray}C@@CCCC}24q32, name: promiseDataWithBlock:forPasteboard:generation:
- (id)createXPCObjectWithMetadataOnly:(unsigned char)arg1;
- (id)initFromXPCObject:(id)arg1 fromConnection:(id)arg2;
- (void)_setLocalPromiseState:(int)arg1;
@property(readonly) unsigned char hasLocalPromise;
- (const struct __CFData *)createDataAndReturnError:(int *)arg1;
- (id)_createShmemIfNecessaryLength:(unsigned long long *)arg1;
- (void)setData:(struct __CFData *)arg1;
@property(readonly) unsigned char hasData;
- (id)description;
- (void)dealloc;
- (id)initWithFlavorName:(const struct __CFString *)arg1 itemIdentifier:(int)arg2;
- (void)promiseDataWithFetchOperation:(id)arg1;

@end


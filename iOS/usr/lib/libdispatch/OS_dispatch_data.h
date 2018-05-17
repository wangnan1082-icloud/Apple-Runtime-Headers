//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_dispatch_data.h"

@class NSString;

@interface OS_dispatch_data : NSObject <OS_dispatch_data>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_activate;
- (void)_resume;
- (void)_suspend;
- (_Bool)_isCompact;
@property(readonly, nonatomic) const void *bytes;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, copy) NSString *debugDescription;
- (void)_setTargetQueue:(id)arg1;
- (void)_setFinalizer:(CDUnknownFunctionPointerType)arg1;
- (void *)_getContext;
- (void)_setContext:(void *)arg1;
- (_Bool)_bytesAreVM;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

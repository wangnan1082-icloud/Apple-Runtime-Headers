//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject
{
    _OSLogCollectionReference *_lcr;
    _Bool _closeOnRelease;
    _Bool _hasEndTimeRef;
    int _state;
    int _version;
}

@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hasEndTimeRef; // @synthesize hasEndTimeRef=_hasEndTimeRef;
- (void).cxx_destruct;
- (_Bool)repairTimesyncDB:(id *)arg1;
- (_Bool)checkTimesyncDB:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)performDestructiveUpdates:(id *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 closeOnRelease:(_Bool)arg2 error:(id *)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppContext, NSMutableDictionary;

@interface IKJSArrayBufferStore : NSObject
{
    NSMutableDictionary *_bufferStorage;
    IKAppContext *_appContext;
}

@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) NSMutableDictionary *bufferStorage; // @synthesize bufferStorage=_bufferStorage;
- (void).cxx_destruct;
- (id)arrayBufferForData:(id)arg1;
- (id)initWithAppContext:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSITable : NSObject
{
    _Bool _finalizzeWasCalled;
    id <PSITableDelegate> _delegate;
}

@property(readonly) __weak id <PSITableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clear;
- (void)finalizze;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 searchable:(_Bool)arg2 writable:(_Bool)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKController;

@interface AKActionController : NSObject
{
    AKController *_controller;
}

@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (_Bool)validateSender:(id)arg1 segment:(long long)arg2;
- (_Bool)validateSender:(id)arg1;
- (_Bool)_isSenderEnabled:(id)arg1 segment:(long long)arg2;
- (_Bool)isSenderEnabled:(id)arg1;
- (void)performActionForSender:(id)arg1 segment:(long long)arg2;
- (void)performActionForSender:(id)arg1;
- (id)initWithController:(id)arg1;

@end

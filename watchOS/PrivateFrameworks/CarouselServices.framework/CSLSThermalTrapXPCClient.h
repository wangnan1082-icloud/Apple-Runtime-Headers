//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@interface CSLSThermalTrapXPCClient : BSBaseXPCClient
{
    id <CSLSThermalTrapXPCClientDelegate> _delegate;
    _Bool _trapped;
}

@property(nonatomic, getter=isTrapped) _Bool trapped; // @synthesize trapped=_trapped;
- (void).cxx_destruct;
- (void)queue_handleMessage:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

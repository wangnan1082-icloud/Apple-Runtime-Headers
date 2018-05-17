//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLDepthStencilState.h"

@class NSString;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilState>
{
    id <MTLDevice> _device;
    NSString *_label;
}

@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

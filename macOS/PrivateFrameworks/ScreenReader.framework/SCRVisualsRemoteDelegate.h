//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXVisualsAgentDelegateInterface.h"

@class SCRVisualsMenuWindow;

__attribute__((visibility("hidden")))
@interface SCRVisualsRemoteDelegate : NSObject <AXVisualsAgentDelegateInterface>
{
    SCRVisualsMenuWindow *_menuWindow;
}

@property(retain, nonatomic) SCRVisualsMenuWindow *menuWindow; // @synthesize menuWindow=_menuWindow;
- (void).cxx_destruct;
- (void)mouseDownOnMenuItem:(id)arg1 atRowIndex:(long long)arg2;

@end

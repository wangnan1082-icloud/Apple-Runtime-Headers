//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLPIButtonHandlerOverrider : NSObject
{
    float _priority;
    id <CSLPIButtonHandlerOverride> _override;
}

+ (id)overriderWithOverride:(id)arg1 andPriority:(float)arg2;
@property(nonatomic) __weak id <CSLPIButtonHandlerOverride> override; // @synthesize override=_override;
@property(nonatomic) float priority; // @synthesize priority=_priority;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon
{
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initForSubclass;
- (id)initWithType:(int)arg1;

@end


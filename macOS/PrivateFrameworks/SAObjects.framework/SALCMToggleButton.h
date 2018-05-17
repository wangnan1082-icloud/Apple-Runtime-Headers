//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSDictionary, NSString, SABaseCommand;

@interface SALCMToggleButton : SAAceView
{
}

+ (id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)toggleButton;
@property(copy, nonatomic) NSString *onTitle;
@property(copy, nonatomic) NSDictionary *onIconDynamicImage;
@property(copy, nonatomic) NSString *offTitle;
@property(copy, nonatomic) NSDictionary *offIconDynamicImage;
@property(retain, nonatomic) SABaseCommand *commandToToggleToOnMode;
@property(retain, nonatomic) SABaseCommand *commandToToggleToOffMode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
